//
//  EAEditCodeReleaseViewController.m
//  Coding_iOS
//
//  Created by Easeeeeeeeee on 2018/3/27.
//  Copyright © 2018年 Coding. All rights reserved.
//

#import "EAEditCodeReleaseViewController.h"
#import "Coding_NetAPIManager.h"
#import "EaseMarkdownTextView.h"
#import "WebContentManager.h"
#import "WebViewController.h"
#import "UIViewController+BackButtonHandler.h"

@interface EAEditCodeReleaseViewController ()
<UIWebViewDelegate>
@property (strong, nonatomic) UISegmentedControl *segmentedControl;
@property (assign, nonatomic) NSInteger curIndex;

@property (strong, nonatomic) UIWebView *preview;
@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator;

@property (strong, nonatomic) UIView *editView;
@property (strong, nonatomic) UITextField *inputTitleView;
@property (strong, nonatomic) EaseMarkdownTextView *inputContentView;
@property (strong, nonatomic) UIView *lineView;
@end

@implementation EAEditCodeReleaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = kColorTableBG;
    if (!_segmentedControl) {
        _segmentedControl = ({
            UISegmentedControl *segmentedControl = [[UISegmentedControl alloc] initWithItems:@[@"编辑", @"预览"]];
            [segmentedControl setWidth:80 forSegmentAtIndex:0];
            [segmentedControl setWidth:80 forSegmentAtIndex:1];
            [segmentedControl setTitleTextAttributes:@{
                                                       NSFontAttributeName: [UIFont systemFontOfSize:16],
                                                       NSForegroundColorAttributeName: [UIColor whiteColor]
                                                       }
                                            forState:UIControlStateSelected];
            [segmentedControl setTitleTextAttributes:@{
                                                       NSFontAttributeName: [UIFont systemFontOfSize:16],
                                                       NSForegroundColorAttributeName: kColorNavTitle
                                                       } forState:UIControlStateNormal];
            [segmentedControl addTarget:self action:@selector(segmentedControlSelected:) forControlEvents:UIControlEventValueChanged];
            segmentedControl;
        });
        
        self.navigationItem.titleView = _segmentedControl;
    }
    
    [self.navigationItem setRightBarButtonItem:[UIBarButtonItem itemWithBtnTitle:@"保存" target:self action:@selector(saveBtnClicked)] animated:YES];
    self.navigationItem.rightBarButtonItem.enabled = NO;
    
    [[[[NSNotificationCenter defaultCenter] rac_addObserverForName:UIKeyboardWillChangeFrameNotification object:nil] takeUntil:self.rac_willDeallocSignal] subscribeNext:^(NSNotification *aNotification) {
        if (self.inputContentView) {
            NSDictionary* userInfo = [aNotification userInfo];
            CGRect keyboardEndFrame = [[userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue];
            self.inputContentView.contentInset = UIEdgeInsetsMake(0, 0, CGRectGetHeight(keyboardEndFrame), 0);
            self.inputContentView.scrollIndicatorInsets = self.inputContentView.contentInset;
        }
    }];
    self.curIndex = 0;
}


- (void)refreshUI{
    self.inputTitleView.text = self.curR.editTitle;
    self.inputContentView.text = self.curR.editBody;
    if (_curIndex == 1) {
        [self loadPreview];
    }
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    if (_curIndex == 0) {
        [self loadEditView];
    } else {
        [self loadPreview];
    }
    //禁用屏幕左滑返回手势
    if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
        self.navigationController.interactivePopGestureRecognizer.enabled = NO;
    }
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    //开启屏幕左滑返回手势
    if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
        self.navigationController.interactivePopGestureRecognizer.enabled = YES;
    }
}

- (BOOL)navigationShouldPopOnBackButton{
    self.curR.editTitle = _inputTitleView.text;
    self.curR.editBody = _inputContentView.text;
    if ([self.curR hasChanged]) {
        __weak typeof(self) weakSelf = self;
        [[UIAlertView bk_showAlertViewWithTitle:@"提示" message:@"如果不保存，更改将丢失，是否确认返回？" cancelButtonTitle:@"取消" otherButtonTitles:@[@"确认返回"] handler:^(UIAlertView *alertView, NSInteger buttonIndex) {
            if (buttonIndex == 0) {
                [weakSelf.navigationController popViewControllerAnimated:YES];
            }
        }] show];
        return NO;
    }else{
        return YES;
    }
}

#pragma mark UISegmentedControl
- (void)segmentedControlSelected:(id)sender{
    UISegmentedControl *segmentedControl = (UISegmentedControl *)sender;
    self.curIndex = segmentedControl.selectedSegmentIndex;
}

#pragma mark index_view
- (void)setCurIndex:(NSInteger)curIndex{
    _curIndex = curIndex;
    if (_segmentedControl.selectedSegmentIndex != curIndex) {
        [_segmentedControl setSelectedSegmentIndex:_curIndex];
    }
    
    if (_curIndex == 0) {
        [self loadEditView];
    } else {
        [self loadPreview];
    }
}

#pragma mark PreView

- (void)loadPreview{
    if (!_preview) {
        _preview = [[UIWebView alloc] initWithFrame:self.view.bounds];
        _preview.delegate = self;
        _preview.backgroundColor = [UIColor clearColor];
        _preview.opaque = NO;
        _preview.scalesPageToFit = YES;
        [self.view addSubview:_preview];
        //webview加载指示
        _activityIndicator = [[UIActivityIndicatorView alloc]
                              initWithActivityIndicatorStyle:
                              UIActivityIndicatorViewStyleGray];
        _activityIndicator.hidesWhenStopped = YES;
        [_activityIndicator setCenter:CGPointMake(CGRectGetWidth(_preview.frame)/2, CGRectGetHeight(_preview.frame)/2)];
        [_preview addSubview:_activityIndicator];
        [_preview mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.view);
        }];
    }
    self.curR.editTitle = _inputTitleView.text;
    self.curR.editBody = _inputContentView.text;
    
    _preview.hidden = NO;
    _editView.hidden = YES;
    [self.view endEditing:YES];
    [self previewLoadMDData];
}

- (void)previewLoadMDData{
    NSString *mdStr = [NSString stringWithFormat:@"# %@ \n\n%@", self.curR.editTitle, self.curR.editBody];
    @weakify(self);
    [[Coding_NetAPIManager sharedManager] request_MDHtmlStr_WithMDStr:mdStr inProject:self.curR.project andBlock:^(id data, NSError *error) {
        @strongify(self);
        NSString *htmlStr = data? data : error.description;
        NSString *contentStr = [WebContentManager wikiPatternedWithContent:htmlStr];
        [self.preview loadHTMLString:contentStr baseURL:nil];
    }];
}
#pragma mark EditView


- (void)loadEditView{
    if (!_editView) {
        //控件
        _editView = [[UIView alloc] initWithFrame:self.view.bounds];
        [self.view addSubview:_editView];
        
        _inputTitleView = [UITextField new];
        _inputTitleView.textColor = kColor222;
        _inputTitleView.font = [UIFont systemFontOfSize:18];
        _inputTitleView.placeholder = @"Release 标题";
        [_editView addSubview:_inputTitleView];
        
        _lineView = [UIView new];
        _lineView.backgroundColor = kColorDDD;
        [_editView addSubview:_lineView];
        
        _inputContentView = [[EaseMarkdownTextView alloc] initWithFrame:CGRectZero];
        _inputContentView.curProject = self.curR.project;
        _inputContentView.textColor = kColor222;
        _inputContentView.placeholder = @"Release 的描述内容";
        _inputContentView.backgroundColor = [UIColor clearColor];
        _inputContentView.font = [UIFont systemFontOfSize:15];
        _inputContentView.textContainerInset = UIEdgeInsetsMake(10, kPaddingLeftWidth - 5, 8, kPaddingLeftWidth - 5);
        [_editView addSubview:_inputContentView];
        
        [self.view addSubview:_editView];
        // 布局
        [_editView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.view);
        }];
        [_inputTitleView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(_editView.mas_top).offset(10.0);
            make.height.mas_equalTo(25);
            make.left.equalTo(_editView).offset(kPaddingLeftWidth);
            make.right.equalTo(_editView).offset(-kPaddingLeftWidth);
        }];
        [_lineView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(_inputTitleView.mas_bottom).offset(10.0);
            make.left.equalTo(_editView).offset(kPaddingLeftWidth);
            make.height.mas_equalTo(1.0);
            make.right.equalTo(_editView);
        }];
        [_inputContentView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(_lineView.mas_bottom).offset(5.0);
            make.left.right.bottom.equalTo(_editView);
        }];
        // 内容
        @weakify(self);
        RAC(self.navigationItem.rightBarButtonItem, enabled) = [RACSignal combineLatest:@[self.inputTitleView.rac_textSignal,
                                                                                          self.inputContentView.rac_textSignal]
                                                                                 reduce:^id (NSString *title, NSString *content) {
                                                                                     @strongify(self);
                                                                                     title = self.inputTitleView.text;
                                                                                     content = self.inputContentView.text;
                                                                                     BOOL enabled = ([title stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].length > 0
                                                                                                     && (![title isEqualToString:self.curR.editTitle] || ![content isEqualToString:self.curR.editBody]));
                                                                                     return @(enabled);
                                                                                 }];
        _inputTitleView.text = _curR.editTitle;
        _inputContentView.text = _curR.editBody;
    }
    _editView.hidden = NO;
    _preview.hidden = YES;
}

#pragma mark - click
- (void)saveBtnClicked{
    self.curR.editTitle = _inputTitleView.text;
    self.curR.editBody = _inputContentView.text;
    
    self.navigationItem.rightBarButtonItem.enabled = NO;
    [NSObject showHUDQueryStr:@"正在保存..."];
    @weakify(self);
    [[Coding_NetAPIManager sharedManager] request_ModifyCodeRelease:_curR andBlock:^(EACodeRelease *data, NSError *error) {
        @strongify(self);
        self.navigationItem.rightBarButtonItem.enabled = YES;
        [NSObject hideHUDQuery];
        if (data) {
            [NSObject showHudTipStr:@"保存成功"];
            [self.navigationController popViewControllerAnimated:YES];
        }
    }];
}

#pragma mark UIWebViewDelegate
- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType{
    DebugLog(@"strLink=[%@]",request.URL.absoluteString);
    UIViewController *vc = [BaseViewController analyseVCFromLinkStr:request.URL.absoluteString];
    if (vc) {
        [self.navigationController pushViewController:vc animated:YES];
        return NO;
    }
    return YES;
}
- (void)webViewDidStartLoad:(UIWebView *)webView{
    [_activityIndicator startAnimating];
}
- (void)webViewDidFinishLoad:(UIWebView *)webView{
    [_activityIndicator stopAnimating];
}
- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error{
    if([error code] == NSURLErrorCancelled)
        return;
    else
        DebugLog(@"%@", error.description);
}
@end
