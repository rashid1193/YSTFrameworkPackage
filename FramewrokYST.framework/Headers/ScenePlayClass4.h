//
//  ScenePlayClass4.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "ParserClass.h"
#import "DBManagerClass.h"
#import "StoryTVC4.h"
#import "StoryPlayViewController.h"
#import "DownloadingResourcesClass.h"
#import "MainLayoutViewController4.h"
#import "Reachability.h"
#import <QuartzCore/QuartzCore.h>

@class MainLayoutViewController4;

static NSString *getCurrentStoryId;
static NSString *StoryNameForYoutubePopUpview;
static NSString *StoryIconUrlForYoutubePopUpView;
static NSString *selectedLanguage;
static int selectedIndexPath;

@interface ScenePlayClass4 : UIView
{
    __weak IBOutlet UIButton *backBtn_Outlet;
    __weak IBOutlet UIButton *exitbtn_Outlet;
    __weak IBOutlet UILabel *storyName_lbl;
    IBOutlet UIStackView *outlet_uistackforstarRating;
    IBOutlet UIButton *outlet_btnfouistackforstarRating;
    __weak IBOutlet UIView *uiview_youtubepopupOutlet;
    __weak IBOutlet UIImageView *iconViewOnYuotubeViewPopup;
    __weak IBOutlet UIButton *youTubebtn_outlet;
    __weak IBOutlet UIButton *crossbtn_outlet;
    __weak IBOutlet UIButton *rateUsbtn_outlet;
    __weak IBOutlet UIView *view_Outlet;
    __weak IBOutlet UIStackView *outlet_Stack;
    IBOutletCollection(UIButton) NSArray *outlet_BtnStoreStarvalue;
    __weak IBOutlet UIButton *rightButtonOutlet;
    __weak IBOutlet UIButton *wrongButtonOutlet;
    ParserClass *ParserClassObject;
    AVAudioPlayer *avAudioPlayer;
    AVAudioPlayer *audioPlayer;

    IBOutlet UIButton *outlet_crossBtnforYoutubrPopNotification;
    IBOutlet UIButton *outlet_MenuBtn;
    IBOutlet UIButton *outlet_pausebtn;
}

@property (strong, nonatomic) IBOutlet UIImageView *outlet_imageViewafterPressingRateUsBtn;
@property (strong, nonatomic) IBOutlet UIButton *outlet_PreviousBtn;
@property (strong, nonatomic) IBOutlet UIButton *outlet_NxtBtn;

@property (strong, nonatomic) IBOutlet UIButton *outlet_youtubebckgrndBtn;
@property (strong, nonatomic) IBOutlet UIStackView *outlet_youtubeStack;

@property (strong, nonatomic) IBOutlet UIButton *outlet_playerControlemenubtn;
@property (strong, nonatomic) IBOutlet UIButton *outlet_pauseBtnAction;
@property (strong, nonatomic) IBOutlet UIButton *outlet_downActionBtn;
@property (strong, nonatomic) IBOutlet UIStackView *outlet_stackviewPlayrControlebtn;
@property (strong, nonatomic) IBOutlet UIButton *outlet_SoundMuteBtn;

+(void)printLogStringandUrl:(NSString*)logName icon:(NSString*)logIcon;
+(void)printLog:(NSString*)log;
+(void)selectedLanguageMethod:(NSString*)lang indexpath:(int)indexPathNum;
@property (weak , nonatomic) IBOutlet UIButton *outlet_stop_btn;
@property (weak , nonatomic) IBOutlet UIButton *outlet_exitPlayerCtrlBtn;

- (IBAction)wrongButton:(id)sender;
- (IBAction)rightButton:(id)sender;
- (IBAction)backBtn_Action:(id)sender;
- (IBAction)exitBtn_Action:(id)sender;
- (IBAction)action_BtnStoreStarValue:(UIButton *)sender;
- (IBAction)rateUsbtn_Action:(id)sender;
- (IBAction)crossBtn_Action:(id)sender;
- (IBAction)youtubeShareBtn_Action:(id)sender;


- (IBAction)PlayrControlMenuBtn_Action:(id)sender;
- (IBAction)action_SoundMutebtn:(id)sender;
- (IBAction)prviousBtn:(id)sender;
- (IBAction)pauseplayBtn:(id)sender;
- (IBAction)stopbtn:(id)sender;
- (IBAction)NxtBtn:(id)sender;
- (IBAction)exitBtn_playerCntrolMenu:(id)sender;

//- (NSTextAlignment)naturalTextAligment;
@end

