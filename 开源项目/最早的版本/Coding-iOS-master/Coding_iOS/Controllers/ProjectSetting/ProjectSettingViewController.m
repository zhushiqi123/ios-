//
//  ProjectSettingViewController.m
//  Coding_iOS
//
//  Created by isaced on 15/3/31.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import "ProjectSettingViewController.h"
#import "Projects.h"
#import "UIImageView+WebCache.h"
#import "Coding_NetAPIManager.h"
#import "MBProgressHUD+Add.h"
#import "JDStatusBarNotification.h"
#import "Coding_NetAPIManager.h"

@interface ProjectSettingViewController ()<UITextViewDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (nonatomic, strong) UIBarButtonItem *submitButtonItem;
@property (nonatomic, strong) UIImage *projectIconImage;
@property (nonatomic, strong) MBProgressHUD *uploadHUD;

@property (weak, nonatomic) IBOutlet UIView *tableHeaderV;

@end

@implementation ProjectSettingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"项目设置";
    // Private Icon
    if ([self.project.is_public isEqual:@YES]) {
        self.privateImageView.hidden = YES;
    }
    
    // sep
    for (NSLayoutConstraint *cons in self.lines) {
        cons.constant = 0.5;
    }
    
    //tabview
    self.tableView.tableFooterView = [UIView new];
    [self.tableView setSeparatorColor:[UIColor colorWithRGBHex:0xe5e5e5]];
    self.tableView.backgroundColor = kColorTableSectionBg;

    self.projectNameF.text = self.project.name;

    //
    self.descTextView.placeholder = @"填写项目描述...";
    self.descTextView.text = self.project.description_mine;
    self.descTextView.delegate = self;
    
    //
    self.projectImageView.layer.cornerRadius = 2;
    [self.projectImageView sd_setImageWithURL:[self.project.icon urlImageWithCodePathResizeToView:self.projectImageView] placeholderImage:kPlaceholderCodingSquareWidth(55.0)];
    UITapGestureRecognizer *tapProjectImageViewGR = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(selectProjectImage)];
    [self.projectImageView addGestureRecognizer:tapProjectImageViewGR];
    
    // 添加 “完成” 按钮
    if ([self p_canEditPro]) {
        self.submitButtonItem = [UIBarButtonItem itemWithBtnTitle:@"完成" target:self action:@selector(submit)];
        self.submitButtonItem.enabled = NO;
        self.navigationItem.rightBarButtonItem = self.submitButtonItem;

        RAC(self, navigationItem.rightBarButtonItem.enabled) = [RACSignal combineLatest:@[self.projectNameF.rac_textSignal, self.descTextView.rac_textSignal] reduce:^id (NSString *name, NSString *desc){
            BOOL hasChange = ![name isEqualToString:self.project.name] || ![desc isEqualToString:self.project.description_mine];
            return @(hasChange);
        }];
    }

    //HUD
    self.uploadHUD = [[MBProgressHUD alloc] initWithView:self.view];
    self.uploadHUD.mode = MBProgressHUDModeDeterminate;
    [self.view addSubview:self.uploadHUD];
    
    if ([self p_isOwner]) {
        self.tableHeaderV.height = 0;
    }
}

-(void)submit{
    self.project.name = [self.projectNameF.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    self.project.description_mine = [self.descTextView.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];

    self.submitButtonItem.enabled = NO;
    
    // 更新项目
    [[Coding_NetAPIManager sharedManager] request_UpdateProject_WithObj:self.project andBlock:^(Project *data, NSError *error) {
        if (!error) {
            [self.navigationController popViewControllerAnimated:YES];
        }
        self.submitButtonItem.enabled = YES;
    }];
}

-(void)selectProjectImage{
    [[UIActionSheet bk_actionSheetCustomWithTitle:@"选择照片" buttonTitles:@[@"拍照",@"从相册选择"] destructiveTitle:nil cancelTitle:@"取消" andDidDismissBlock:^(UIActionSheet *sheet, NSInteger index) {
        
        if (index > 1) {
            return ;
        }
        
        UIImagePickerController *avatarPicker = [[UIImagePickerController alloc] init];
        avatarPicker.delegate = self;
        if (index == 0) {
            avatarPicker.sourceType = UIImagePickerControllerSourceTypeCamera;
        }else{
            avatarPicker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
        }
        avatarPicker.allowsEditing = YES;
        [self presentViewController:avatarPicker animated:YES completion:nil];
    }] showInView:self.view];
}

-(void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{
    UIImage *image = [info objectForKey:UIImagePickerControllerEditedImage];
    
    [self.view endEditing:YES];
    
    if (image) {

        self.uploadHUD.progress = 0;
        [self.uploadHUD show:YES];
        [[Coding_NetAPIManager sharedManager] request_UpdateProject_WithObj:self.project icon:image andBlock:^(id data, NSError *error) {
            if (data) {
                NSDictionary *dataDic = data[@"data"];
                if (dataDic) {
                    self.project.icon = dataDic[@"icon"];
                    [[[SDWebImageManager sharedManager] imageCache] storeImage:image forKey:self.project.icon];
//                    [self.navigationController popViewControllerAnimated:YES];
                }
                //
                self.projectImageView.image = image;
                self.projectIconImage = image;
            }
            [self.uploadHUD hide:YES];
        } progerssBlock:^(CGFloat progressValue) {
            self.uploadHUD.progress = progressValue;
        }];
    }
    
    [picker dismissViewControllerAnimated:YES completion:^{
        [JDStatusBarNotification showWithStatus:@"正在上传项目图标" styleName:JDStatusBarStyleSuccess];
        [JDStatusBarNotification showActivityIndicator:YES indicatorStyle:UIActivityIndicatorViewStyleWhite];
    }];
}

-(void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    [picker dismissViewControllerAnimated:YES completion:nil];
}


-(BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text{
    NSString *string = [textView.text stringByReplacingCharactersInRange:range withString:text];
    
    if ([string isEqualToString:self.project.description_mine]) {
        self.submitButtonItem.enabled = NO;
    }else{
        self.submitButtonItem.enabled = YES;
    }
    
    return YES;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark UITableView

- (BOOL)p_canEditPro{
    return _project.current_user_role_id.integerValue >= 90;
}

- (BOOL)p_isOwner{
    return [self.project.owner_id isEqual:[Login curLoginUser].id];
}

-(UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    return [UIView new];
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    if (section == 0) {
        return [self p_isOwner]? 15: 0;
    }else if (section == 1){
        return [self p_isOwner]? 15: 0;
    }else{
        return [self p_isOwner]? 0: 15;
    }
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    if (section == 0) {
        return [self p_canEditPro]? 2: 0;
    }else if (section == 1){
        return [self p_isOwner]? 3: 0;
    }else{
        return [self p_isOwner]? 0: 1;
    }
}

-(void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView addLineforPlainCell:cell forRowAtIndexPath:indexPath withLeftSpace:13];
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    UIViewController *vc = segue.destinationViewController;
    [vc setValue:self.project forKey:@"project"];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (indexPath.section == 2) {
        __weak typeof(self) weakSelf = self;
        [[UIActionSheet bk_actionSheetCustomWithTitle:@"确定退出项目？" buttonTitles:nil destructiveTitle:@"确认退出" cancelTitle:@"取消" andDidDismissBlock:^(UIActionSheet *sheet, NSInteger index) {
            if (index == 0) {
                [weakSelf quitPro];
            }
        }] showInView:self.view];
    }
}

- (void)quitPro{
    ProjectMember *tempM = [ProjectMember new];
    tempM.user_id = [Login curLoginUser].id;
    tempM.project_id = _project.id;
    __weak typeof(self) weakSelf = self;
    [[Coding_NetAPIManager sharedManager] request_ProjectMember_Quit:tempM andBlock:^(id data, NSError *error) {
        if (data) {
            [self.navigationController popToRootViewControllerAnimated:YES];
        }
    }];
}

#pragma mark - Orientations
- (BOOL)shouldAutorotate{
    return UIInterfaceOrientationIsLandscape(self.interfaceOrientation);
}

- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation {
    return UIInterfaceOrientationPortrait;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

@end
