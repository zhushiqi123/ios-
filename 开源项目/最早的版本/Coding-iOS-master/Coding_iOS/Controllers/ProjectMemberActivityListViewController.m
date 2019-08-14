//
//  ProjectMemberActivityListViewController.m
//  Coding_iOS
//
//  Created by 王 原闯 on 14/10/31.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import "ProjectMemberActivityListViewController.h"
#import "UserInfoViewController.h"
#import "EditTaskViewController.h"
#import "TopicDetailViewController.h"
#import "FileListViewController.h"
#import "FileViewController.h"
#import "MRDetailViewController.h"

#import "ProjectCommitsViewController.h"
#import "PRDetailViewController.h"
#import "NProjectViewController.h"
#import "ProjectViewController.h"
#import "CommitFilesViewController.h"

@interface ProjectMemberActivityListViewController ()

@end

@implementation ProjectMemberActivityListViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = _curUser.name;

    __weak typeof(self) weakSelf = self;
    ProjectActivityListView *listView = [[ProjectActivityListView alloc] initWithFrame:self.view.bounds proAtcs:[ProjectActivities proActivitiesWithPro:_curProject user:_curUser] block:^(ProjectActivity *proActivity) {
        [weakSelf goToVCWithItem:nil activity:proActivity isContent:YES inProject:weakSelf.curProject];
    }];
    listView.htmlItemClickedBlock = ^(HtmlMediaItem *clickedItem, ProjectActivity *proAct, BOOL isContent){
        [weakSelf goToVCWithItem:clickedItem activity:proAct isContent:isContent inProject:weakSelf.curProject];
    };
    listView.userIconClickedBlock = ^(User *curUser){
        [weakSelf goToUserInfo:curUser];
    };
    [self.view addSubview:listView];
    [listView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.equalTo(self.view);
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark toVC
- (void)goToUserInfo:(User *)user{
    UserInfoViewController *vc = [[UserInfoViewController alloc] init];
    vc.curUser = user;
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)goToVCWithItem:(HtmlMediaItem *)clickedItem activity:(ProjectActivity *)proAct isContent:(BOOL)isContent inProject:(Project *)project{
    if (isContent) {//cell上面第二个Label
        NSString *target_type = proAct.target_type;
        NSString *linkPath = nil, *tipStr = nil;
        
        if ([target_type isEqualToString:@"Task"]) {
            linkPath = proAct.task.path;
            tipStr = @"任务不存在";
        }else if ([target_type isEqualToString:@"TaskComment"]){
            NSArray *pathArray = [proAct.project.full_name componentsSeparatedByString:@"/"];
            linkPath = pathArray.count >= 2? [NSString stringWithFormat:@"/u/%@/p/%@/task/%@", pathArray[0], pathArray[1], proAct.task.id]: nil;
        }else if ([target_type isEqualToString:@"ProjectFile"]){
            BOOL isFile = [proAct.type isEqualToString:@"file"];
            NSArray *pathArray = [proAct.file.path componentsSeparatedByString:@"/"];
            if (!isFile && pathArray.count >= 7){
                //文件夹
                ProjectFolder *folder;
                NSString *folderIdStr = pathArray[6];
                if (![folderIdStr isEqualToString:@"default"] && [folderIdStr isPureInt]) {
                    NSNumber *folderId = [NSNumber numberWithInteger:folderIdStr.integerValue];
                    folder = [ProjectFolder folderWithId:folderId];
                    folder.name = proAct.file.name;
                }else{
                    folder = [ProjectFolder defaultFolder];
                }
                FileListViewController *vc = [[FileListViewController alloc] init];
                vc.curProject = project;
                vc.curFolder = folder;
                vc.rootFolders = nil;
                [self.navigationController pushViewController:vc animated:YES];
            }else{
                if (isFile) {
                    linkPath = proAct.file.path;
                }
                tipStr = isFile? @"文件不存在" :@"文件夹不存在";
            }
        }else if ([target_type isEqualToString:@"ProjectMember"]) {
            if ([proAct.action isEqualToString:@"quit"]) {
                //退出项目
            }else{
                //添加了某成员
                linkPath = [NSString stringWithFormat:@"/u/%@", proAct.target_user.global_key];
            }
        }else if ([target_type isEqualToString:@"Depot"]) {
            if ([proAct.action_msg isEqualToString:@"删除了"]) {
                tipStr = @"删除了，不能看了~";
            }else if ([proAct.action isEqualToString:@"fork"]) {
                NSArray *nameComponents = [proAct.depot.name componentsSeparatedByString:@"/"];
                linkPath = nameComponents.count == 2? [NSString stringWithFormat:@"/u/%@/p/%@", nameComponents[0], nameComponents[1]]: nil;
                tipStr = @"没找到 Fork 到哪里去了~";
            }else if ([proAct.action isEqualToString:@"push"]){
                //    current_user_role_id = 75 是受限成员，不可访问代码
                if (!project.is_public.boolValue && project.current_user_role_id.integerValue <= 75) {
                    tipStr = @"无权访问项目代码相关功能";
                }else{
                    if (proAct.commits.count == 1) {
                        Commit *firstCommit = [proAct.commits firstObject];
                        linkPath = [NSString stringWithFormat:@"%@/commit/%@", proAct.depot.path, firstCommit.sha];
                    }else{
                        NSString *ref = proAct.ref? proAct.ref : @"master";
                        ProjectCommitsViewController *vc = [ProjectCommitsViewController new];
                        vc.curProject = project;
                        vc.curCommits = [Commits commitsWithRef:ref Path:@""];
                        [self.navigationController pushViewController:vc animated:YES];
                    }
                }
            }else{
                ProjectViewController *vc = [ProjectViewController codeVCWithCodeRef:proAct.ref andProject:project];
                [self.navigationController pushViewController:vc animated:YES];
            }
        }else if ([target_type isEqualToString:@"PullRequestBean"] ||
                  [target_type isEqualToString:@"MergeRequestBean"] ||
                  [target_type isEqualToString:@"CommitLineNote"]){
            //    current_user_role_id = 75 是受限成员，不可访问代码
            if (!project.is_public.boolValue && project.current_user_role_id.integerValue <= 75) {
                tipStr = @"无权访问项目代码相关功能";
            }else{
                if ([target_type isEqualToString:@"PullRequestBean"]){
                    linkPath = proAct.pull_request_path;
                }else if ([target_type isEqualToString:@"MergeRequestBean"]){
                    linkPath = proAct.merge_request_path;
                }else if ([target_type isEqualToString:@"CommitLineNote"]){
                    linkPath = proAct.line_note.noteable_url;
                }
                tipStr = @"不知道这是个什么东西o(╯□╰)o~";
            }
        }else if ([target_type isEqualToString:@"ProjectTweet"]) {
            if ([proAct.action isEqualToString:@"delete"]) {
                tipStr = @"删除了，不能看了~";
            }else{
                linkPath = [NSString stringWithFormat:@"/p/%@/setting/notice", proAct.project.name];
            }
        }else if ([target_type isEqualToString:@"Wiki"]) {
            if ([proAct.action isEqualToString:@"delete"]) {
                tipStr = @"删除了，不能看了~";
            }else{
                linkPath = proAct.wiki_path;
            }
        }else if ([target_type isEqualToString:@"BranchMember"]){
            if ([@[@"add", @"remove"] containsObject:proAct.action]) {
                linkPath = [NSString stringWithFormat:@"/u/%@", proAct.target_user.global_key];
            }else{//deny_push/allow_push
                ProjectViewController *vc = [ProjectViewController codeVCWithCodeRef:proAct.ref_name andProject:project];
                [self.navigationController pushViewController:vc animated:YES];
            }
        }else if ([target_type isEqualToString:@"ProtectedBranch"]){
            ProjectViewController *vc = [ProjectViewController codeVCWithCodeRef:proAct.ref_name andProject:project];
            [self.navigationController pushViewController:vc animated:YES];
        }else if ([target_type isEqualToString:@"Release"]) {
            if ([proAct.action isEqualToString:@"delete"]) {
                tipStr = @"版本已删除";
            }else{
                linkPath = proAct.release_path;
            }
        }else{
            if ([target_type isEqualToString:@"Project"]){//转让项目之类的
                //            }else if ([target_type isEqualToString:@"MergeRequestComment"]){//过期类型，已用CommitLineNote替代
                //            }else if ([target_type isEqualToString:@"PullRequestComment"]){//过期类型，已用CommitLineNote替代
                //            }else if ([target_type isEqualToString:@"ProjectStar"]){//不用解析
                //            }else if ([target_type isEqualToString:@"ProjectWatcher"]){//不用解析
                //            }else if ([target_type isEqualToString:@"QcTask"]){//还不能解析
            }else{
                tipStr = @"还不能查看详细信息呢~";
            }
        }
        UIViewController *vc = [BaseViewController analyseVCFromLinkStr:linkPath];
        if (vc) {
            [self.navigationController pushViewController:vc animated:YES];
        }else{
            [NSObject showHudTipStr:tipStr];
        }
    }else{//cell上面第一个Label
        [self goToUserInfo:[User userWithGlobalKey:[clickedItem.href substringFromIndex:3]]];
    }
}
@end
