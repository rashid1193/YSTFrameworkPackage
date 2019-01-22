//
//  MainLayoutViewController4.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import "ViewController.h"
#import "StoryPlayViewController.h"
#import "ParserClass.h"
#import "ScenePlayClass4.h"
#import "TableViewCell4.h"
#import "StoryTVC4.h"
#import "ZipArchive.h"

@class StoryTVC4;
static BOOL networkconnectivitystatus;
//@end

@interface MainLayoutViewController4 : UIViewController
{
    __weak IBOutlet UIButton *downloadButtonOutlet;
    
    __weak IBOutlet UIButton *playButtonOutlet;
    
    __weak IBOutlet UIButton *backButtonOutlet;
    ParserClass *parserClass;
    IBOutlet UISegmentedControl *segmentControlOutlet;
    
}


@property (strong, nonatomic) IBOutlet UIButton *outlet_FirstlngBtn;
@property (weak, nonatomic) IBOutlet UIStackView *outlet_StackviewForLangTableView;
- (IBAction)action_LanguageMenuBtn:(id)sender;

//-(IBAction)Action_FirstlngBtn:(id)sender;
//- (IBAction)action_ScelngBtn:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *outlet_SeclngBtn;
//- (IBAction)action_ThirdLngBtn:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *outlet_ThirdLngBtn;


@property BOOL hindi;
@property BOOL english;
@property BOOL bangla;
@property BOOL punjabi;
@property (weak, nonatomic) IBOutlet UIProgressView *progressViewIndicator;
@property (weak, nonatomic) IBOutlet UILabel *progressShowingLabel;
@property (weak, nonatomic) IBOutlet UILabel *progresSsupportLabel;
@property NSTimer *myTimer;
@property (strong, nonatomic) IBOutlet UIView *downloadingOutlet_view;

@property (nonatomic , retain) NSString *storynameforScenepalyClass;
@property (nonatomic , retain) NSString *storyIconUrlForScenePlayClass;

@property (nonatomic , retain) NSString *callingIDString;
@property (nonatomic , retain) NSString *xmlFilePath;
@property (nonatomic , strong) NSString *docDirectoryPath;
@property (nonatomic , strong) NSString *folderPath;
@property (strong, nonatomic) IBOutlet UIButton *outlet_btndownloadingbackground;
@property (strong, nonatomic) IBOutlet UIImageView *outlet_imageviewbackTrancparentdownloading;
//-(void)getDownloadingCounting:(long int)downloadedFileCount andSize:(NSData*)downloadedFileSize;
//-(void)DownloadMethodPrint:(int)downloadFileCount downloadeFileData:(double)downloadedFileSize fileBoolean:(BOOL)fileBoolean;
@property (weak, nonatomic) IBOutlet UILabel *authornameLabel;

@property (weak, nonatomic) IBOutlet UILabel *storyId;
@property (weak, nonatomic) IBOutlet UILabel *storyView;
@property (weak, nonatomic) IBOutlet UILabel *storyName;
@property (strong, nonatomic) IBOutlet UIStackView *outlet_stackviewdownloading;

//Pass following six parameters.
@property (nonatomic , strong) NSString *icon_URL;
@property (nonatomic , strong) NSString *story_Name;
@property (nonatomic , strong) NSString *author_Name;
@property (nonatomic , strong) NSString *views4;

@property (nonatomic , strong) NSString *ID;
@property (nonatomic , strong) NSString *zipFile_URL;
///////////////////////////////////////////////////
@property (nonatomic , assign) BOOL Hnd;
@property (nonatomic , assign) BOOL KRW;
@property (nonatomic , assign) BOOL Eng;
@property (nonatomic , assign) BOOL Bngla;
@property (nonatomic , assign) BOOL Telgu;
@property (nonatomic , assign) BOOL Pnjbi;
@property (strong, nonatomic) IBOutlet UILabel *outlet_downloadIngSizeShowingLabel;
@property int total_resource_count;
@property double totoalResourceSizeInDownloadCtrl;
-(void)setString;
-(void)printStringviaClassB;
//-(void)setBoolvalueTrue;
-(IBAction)resourceDownloadButton:(id)sender;
-(IBAction)storyPlayButton:(id)sender;
-(IBAction)backButton:(id)sender;
@end

