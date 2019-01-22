//
//  TableViewCell4.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuViewController4.h"
@class MainLayoutViewController4;
static NSString *DownloadingResourceStoryId;
static BOOL OutletChangeBoolValue;

@interface TableViewCell4 : UITableViewCell
{
    NSFileManager *fileMgr;
}
@property (weak, nonatomic) IBOutlet UIImageView *storyIconImageView;
@property (weak, nonatomic) IBOutlet UILabel *storyEnglishName;
@property (weak, nonatomic) IBOutlet UILabel *storyHindiName;
@property (weak, nonatomic) IBOutlet UILabel *storyIdLabel;
@property (weak, nonatomic) IBOutlet UIImageView *nwStoryUpdateIconView;
- (IBAction)resourceContainedButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *resourceAbailabelView;
@property (weak, nonatomic) IBOutlet UIButton *storyViewedButton;
@property (weak, nonatomic) IBOutlet UILabel *storyViewsLabel;
@property (weak, nonatomic) IBOutlet UIImageView *resourceFolderIcon;
@property (weak, nonatomic) IBOutlet UIImageView *viewedStoryIcon;
@property (strong, nonatomic) NSString *storyIdfordeleteResourcebutton;
@property (weak, nonatomic) IBOutlet UIButton *outlet_storySeenBtn;
@property (strong, nonatomic) IBOutlet UILabel *star_Lbl1;
@property (strong, nonatomic) IBOutlet UILabel *star_Lbl2;
@property (strong, nonatomic) IBOutlet UILabel *star_Lbl3;
@property (strong, nonatomic) IBOutlet UILabel *star_Lbl4;
@property (strong, nonatomic) IBOutlet UILabel *star_Lbl5;

@property (strong, nonatomic) IBOutlet UIButton *outlet_starBtn1;
@property (strong, nonatomic) IBOutlet UIButton *outlet_starBtn2;
@property (strong, nonatomic) IBOutlet UIButton *outlet_starBtn3;
@property (strong, nonatomic) IBOutlet UIButton *outlet_starBtn4;
@property (strong, nonatomic) IBOutlet UIButton *outlet_starBtn5;
- (IBAction)storySeenbtn_Action:(id)sender;

@end
