//
//  MenuViewController4.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import "ViewController.h"
#import "DownloadingResourcesClass.h"
@interface MenuViewController4 : UIViewController<UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UIButton *outlet_StoryListButton;
- (IBAction)goToStoryListButton:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *outlet_AboutUsMenuButton;
- (IBAction)goToAboutUsMenuButton:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *outlet_shareBtn;
- (IBAction)action_shareBtn:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *outlet_FbBtn;
- (IBAction)action_FbBtn:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *outlet_companyIdBtn;
//- (IBAction)action_CompanyIDButton:(id)sender;

@end

