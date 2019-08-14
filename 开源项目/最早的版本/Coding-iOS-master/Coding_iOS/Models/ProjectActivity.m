//
//  ProjectActivity.m
//  Coding_iOS
//
//  Created by Ease on 15/5/13.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import "ProjectActivity.h"
#import "NSMutableString+Common.h"

@implementation ProjectActivity
@synthesize actionStr = _actionStr, contentStr = _contentStr;
- (instancetype)init
{
    self = [super init];
    if (self) {
        _propertyArrayMap = @{@"commits": @"Commit",
                              @"labels": @"ProjectTag",
                              };
        _actionMediaItems = [[NSMutableArray alloc] init];
        _contentMediaItems = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)setComment_content:(NSString *)comment_content{
    if (comment_content) {
        _comment_content = [comment_content stringByRemoveHtmlTag];
    }else{
        _comment_content = @"";
    }
}

- (void)setContent:(NSString *)content{
    if (_content != content) {
        _htmlMedia = [HtmlMedia htmlMediaWithString:content showType:MediaShowTypeNone];
        _content = _htmlMedia.contentDisplay;
    }
}

- (NSString *)ref_type{
    if ([_ref_type isEqualToString:@"tag"]) {
        return @"标签";
    }else if ([_ref_type isEqualToString:@"branch"]){
        return @"分支";
    }else{
        return _ref_type;
    }
}

- (void)addActionUser:(User *)curUser{
    if (curUser) {
        [_actionStr appendString:@" "];
        [HtmlMedia addMediaItemUser:curUser toString:_actionStr andMediaItems:_actionMediaItems];
        [_actionStr appendString:@" "];
    }
}

//- (void)addActionLinkStr:(NSString *)linkStr{
//    [HtmlMedia addLinkStr:linkStr type:HtmlMediaItemType_CustomLink toString:_actionStr andMediaItems:_actionMediaItems];
//}

//- (void)addContentLinkStr:(NSString *)linkStr{
//    if (linkStr.length > 0) {
//        [_contentStr appendString:@" "];
//        [HtmlMedia addLinkStr:linkStr type:HtmlMediaItemType_CustomLink toString:_contentStr andMediaItems:_contentMediaItems];
//        [_contentStr appendString:@" "];
//    }
//}

- (NSMutableString *)actionStr{
    if (!_actionStr) {
        _actionStr = [[NSMutableString alloc] init];
        if ([_target_type isEqualToString:@"ProjectMember"]) {
            if ([_action isEqualToString:@"quit"]) {
                [self addActionUser:_target_user];
                [_actionStr appendFormat:@"%@项目", _action_msg];
            }else{
                [self addActionUser:_user];
                [_actionStr appendFormat:@"%@项目成员", _action_msg];
            }
        }else if ([_target_type isEqualToString:@"Release"]){
            [self addActionUser:_user];
            [_actionStr appendFormat:@"%@版本", _action_msg];
        }else if ([_target_type isEqualToString:@"Task"]){
            [self addActionUser:_user];
            if ([_action isEqualToString:@"update_priority"]) {
                [_actionStr appendFormat:@"更新了任务「%@」的优先级", _task.title];
            }else if ([_action isEqualToString:@"update_deadline"]) {
                if (_task.deadline && _task.deadline.length > 0) {
                    [_actionStr appendFormat:@"更新了任务「%@」的截止日期", _task.title];
                }else{
                    [_actionStr appendFormat:@"移除了任务「%@」的截止日期", _task.title];
                }
            }else if ([_action isEqualToString:@"update_description"]) {
                [_actionStr appendFormat:@"更新了任务「%@」的描述", _task.title];
            }else if ([_action isEqualToString:@"update_label"]) {
                [_actionStr appendFormat:@"更新了任务「%@」的标签", _task.title];
            }else if ([_action isEqualToString:@"add_watcher"]){
                [_actionStr saveAppendString:_action_msg];
                [self addActionUser:_watcher];
            }else if ([_action isEqualToString:@"remove_watcher"]){
                [_actionStr saveAppendString:_action_msg];
                [self addActionUser:_watcher];
            }else if ([_action isEqualToString:@"add_milestone"] || [_action isEqualToString:@"remove_milestone"]){
                [_actionStr appendFormat:@"在任务「%@」中%@", _task.title, _action_msg];
            }else{
                [_actionStr saveAppendString:_action_msg];
                if (_origin_task.owner) {
                    [self addActionUser:_origin_task.owner];
                    [_actionStr appendString:@"的"];
                }
                [_actionStr appendString:@"任务"];
                
                if ([_action isEqualToString:@"reassign"]) {
                    [_actionStr appendString:@"给"];
                    [self addActionUser:_task.owner];
                }
            }
        }else if ([_target_type isEqualToString:@"TaskComment"]){
            [self addActionUser:_user];
            [_actionStr appendFormat:@"%@任务「%@」的评论", _action_msg, _task.title];
        }else if ([_target_type isEqualToString:@"Project"] && [_action isEqualToString:@"transfer"]){
            [self addActionUser:_user];
            [_actionStr appendFormat:@"将项目「%@」%@", _project.full_name, _action_msg];
            [self addActionUser:_target_user];
        }else if ([_target_type isEqualToString:@"Project"] && [_action isEqualToString:@"transferToTeam"]){
            [self addActionUser:_user];
            [_actionStr appendFormat:@"转让了项目"];
        }else{
            [self addActionUser:_user];
            if ([_target_type isEqualToString:@"ProjectTweet"]){
                NSString *action_msg = ([_action isEqualToString:@"create"]? @"发布了":
                                        [_action isEqualToString:@"update"]? @"更新了":
                                        [_action isEqualToString:@"delete"]? @"删除了":
                                        _action);
                [_actionStr appendFormat:@"%@项目公告", action_msg];
            }else{
                [_actionStr saveAppendString:_action_msg];
                if ([_target_type isEqualToString:@"ProjectTopic"]){
                    [_actionStr appendString:@"讨论"];
                    if ([_action isEqualToString:@"comment"]) {
                        [_actionStr appendFormat:@"「%@」", _project_topic.parent.title];
                    }
                }else if ([_target_type isEqualToString:@"BranchMember"]){
                    if ([@[@"add", @"remove"] containsObject:_action]) {
                        [_actionStr appendString:@"分支管理员"];
                    }else{//deny_push/allow_push
                        [self addActionUser:self.target_user];
                        [_actionStr appendString:@"直接 Push 保护分支"];
                    }
                }else if ([_target_type isEqualToString:@"ProtectedBranch"]){
//                    enable_protected_branch/allow_force_push/disable_protected_branch
                }else if ([_target_type isEqualToString:@"ProjectFile"]){
                    if ([_action isEqualToString:@"rename"]) {
                        [_actionStr appendString:@"修改了文件名称"];
                    }else{
                        [_actionStr appendString:[_type isEqualToString:@"dir"]? @"文件夹": @"文件"];
                    }
                }else if ([_target_type isEqualToString:@"ProjectFileComment"]){
                    [_actionStr appendFormat:@"文件「%@」的评论", _projectFile.title];
                }else if ([_target_type isEqualToString:@"Depot"]){
                    if ([_action isEqualToString:@"push"]) {
                        [_actionStr appendFormat:@"项目 %@ 「%@」", self.ref_type, _ref];
                    }else if ([_action isEqualToString:@"fork"]){
                        [_actionStr appendFormat:@"项目「%@」到 「%@」", _source_depot.name, _depot.name];
                    }
                }else if ([_target_type isEqualToString:@"Wiki"]){
                    [_actionStr appendString:@"wiki"];
                }else if ([_target_type isEqualToString:@"Milestone"]){

                }else{
                    [_actionStr appendString:@"项目"];
                    if ([_target_type isEqualToString:@"Project"]){
                    }else if ([_target_type isEqualToString:@"QcTask"]){
                        [_actionStr appendFormat:@"「%@」的质量分析任务", _project.full_name];
                    }else if ([_target_type isEqualToString:@"ProjectStar"]){
                        [_actionStr appendFormat:@"「%@」", _project.full_name];
                    }else if ([_target_type isEqualToString:@"ProjectWatcher"]){
                        [_actionStr appendFormat:@"「%@」", _project.full_name];
                    }else if ([_target_type isEqualToString:@"PullRequestBean"]){
                        [_actionStr appendFormat:@"「%@」中的 Pull Request", _depot.name];
                    }else if ([_target_type isEqualToString:@"PullRequestComment"]){
                        [_actionStr appendFormat:@"「%@」中的 Pull Request 「%@」", _depot.name, _pull_request_title];
                    }else if ([_target_type isEqualToString:@"MergeRequestBean"]){
                        [_actionStr appendFormat:@"「%@」中的 Merge Request", _depot.name];
                    }else if ([_target_type isEqualToString:@"MergeRequestComment"]){
                        [_actionStr appendFormat:@"「%@」中的 Merge Request 「%@」", _depot.name, _merge_request_title];
                    }else if ([_target_type isEqualToString:@"CommitLineNote"]){
                        [_actionStr appendFormat:@"「%@」的 %@「%@」", _project.full_name, _line_note.noteable_type, _line_note.noteable_title];
                    }
                }
            }
        }
    }
    return _actionStr;
}

- (NSMutableString *)contentStr{
    if (!_contentStr) {
        _contentStr = [[NSMutableString alloc] init];
        
        if ([_target_type isEqualToString:@"Task"]) {
            if ([_action isEqualToString:@"update_priority"]) {
                if (_task.priority && _task.priority.intValue < kTaskPrioritiesDisplay.count) {
                    [_contentStr appendFormat:@"「%@」", kTaskPrioritiesDisplay[_task.priority.intValue]];
                }
            }else if ([_action isEqualToString:@"update_deadline"] && _task.deadline && _task.deadline.length > 0) {
                [_contentStr appendFormat:@"「%@」", [NSDate convertStr_yyyy_MM_ddToDisplay:_task.deadline]];
            }else if ([_action isEqualToString:@"update_description"]) {
                [_contentStr saveAppendString:_task.description_mine];
            }else if ([_action isEqualToString:@"update_label"]) {
                if (_labels.count > 0) {
                    [_contentStr appendFormat:@"%@", [[_labels valueForKey:@"name"] componentsJoinedByString:@","]];
                }else{
                    [_contentStr appendFormat:@"移除了任务的所有标签"];
                }
            }else if ([_action isEqualToString:@"add_milestone"] || [_action isEqualToString:@"remove_milestone"]){
                [_contentStr saveAppendString:_milestone.name];
            }else{
                [_contentStr saveAppendString:_task.title];
            }
        }else if ([_target_type isEqualToString:@"TaskComment"]){
            if (_taskComment.content) {
                [_contentStr saveAppendString:_taskComment.content];
            }
        }else if ([_target_type isEqualToString:@"ProjectTopic"]){
            if ([_action isEqualToString:@"comment"]) {
                [_contentStr saveAppendString:_project_topic.content];
            }else{
                [_contentStr saveAppendString:_project_topic.title];
            }
        }else if ([_target_type isEqualToString:@"ProjectFile"]){
            if ([_action isEqualToString:@"rename"]) {
                [_contentStr appendFormat:@"%@ -> %@", _old_name, _file.name];
            }else{
                [_contentStr saveAppendString:_file.name];
            }
        }else if ([_target_type isEqualToString:@"ProjectFileComment"]){
            [_contentStr saveAppendString:_projectFileComment.content];
        }else if ([_target_type isEqualToString:@"Depot"]){
            if (_commits && [_commits count] > 0) {
                Commit *curCommit = _commits.firstObject;
                [_contentStr saveAppendString:curCommit.contentStr];
                for (int i = 1; i<[_commits count]; i++) {
                    curCommit = [_commits objectAtIndex:i];
                    [_contentStr appendFormat:@"\n%@",curCommit.contentStr];
                }
            }
        }else{
            if ([_target_type isEqualToString:@"ProjectMember"]) {
                if ([_action isEqualToString:@"quit"]) {
                    [_contentStr saveAppendString:_project.full_name];
                }else{
                    [_contentStr saveAppendString:_target_user.name];
                }
            }else if ([_target_type isEqualToString:@"Project"]){
                [_contentStr saveAppendString:_project.full_name];
            }else if ([_target_type isEqualToString:@"QcTask"]){
                [_contentStr saveAppendString:_qc_task.link];
            }else if ([_target_type isEqualToString:@"ProjectStar"]){
                [_contentStr saveAppendString:_project.full_name];
            }else if ([_target_type isEqualToString:@"ProjectWatcher"]){
                [_contentStr saveAppendString:_project.full_name];
            }else if ([_target_type isEqualToString:@"PullRequestBean"]){
                [_contentStr saveAppendString:_pull_request_title];
            }else if ([_target_type isEqualToString:@"PullRequestComment"]){
                [_contentStr saveAppendString:_comment_content];
            }else if ([_target_type isEqualToString:@"MergeRequestBean"]){
                [_contentStr saveAppendString:_merge_request_title];
            }else if ([_target_type isEqualToString:@"MergeRequestComment"]){
                [_contentStr saveAppendString:_comment_content];
            }else if ([_target_type isEqualToString:@"CommitLineNote"]){
                [_contentStr appendFormat:@"%@", _line_note.content];
            }else if ([_target_type isEqualToString:@"Wiki"]){
                [_contentStr appendFormat:@"%@", _wiki_title];
            }else if ([_target_type isEqualToString:@"ProjectTweet"]){
                [_contentStr saveAppendString:_content];
            }else if ([_target_type isEqualToString:@"BranchMember"]){
                if ([@[@"add", @"remove"] containsObject:_action]) {
                    [_contentStr saveAppendString:self.target_user.name];
                }else{//deny_push/allow_push
                    [_contentStr saveAppendString:self.ref_name];
                }
            }else if ([_target_type isEqualToString:@"ProtectedBranch"]){
                [_contentStr saveAppendString:self.ref_name];
            }else if ([_target_type isEqualToString:@"Milestone"]){
                [_contentStr saveAppendString:_milestone.name];
            }else if ([_target_type isEqualToString:@"Release"]){
                [_contentStr saveAppendString:_release_title.length> 0 ? _release_title: _release_tag_name];
            }else{
                [_contentStr appendString:@"**未知**"];
            }
        }
    }
    return _contentStr;
}
@end
