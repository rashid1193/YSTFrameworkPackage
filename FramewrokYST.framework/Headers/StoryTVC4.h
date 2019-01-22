
#import <UIKit/UIKit.h>
#import "ViewController.h"
#import "DBManagerClass.h"
#import "MainLayoutViewController4.h"
#import "Reachability.h"
#import "AppDelegate.h"
@class DBManagerClass;
static NSMutableArray *getCurrentdataArray;
static int NtwrkvalueOneTimeJasonDownload = 0;

@class MenuViewController4;
static NSString *selectedCompanyID;
static NSString *url_CompanyId;
static int selectedIndexPath;

@interface StoryTVC4 : UITableViewController<NSURLSessionDelegate,NSURLSessionDataDelegate>
{
    NSString *strng;
    NSString *strng1;
    NSString *strng2;
    NSString *strng3;
    NSString *strng4;
    NSString *strng5;
    NSString *rating;
    NSString *startreached;
    NSString *endreached;
    NSString *quesAnsreached;
    NSString *createdTime;
    NSString *releasingdate;
    NSString *catagory;
    NSString *version;
    NSString *youtubeurl;
    NSString *lngid;
    NSString *lngNm;
    NSString *lngcd;
    
    NSMutableArray *lngID;
    NSMutableArray *lngNM;
    NSMutableArray *lngCD;
    
    NSMutableArray *storyIcon_url;
    NSMutableArray *zip_URL_FromJson_Array;
    NSDictionary *myItems;
     NSMutableDictionary *myItems1;
    NSArray *objectdata;
     NSArray *objectdata1;
    NSString *query;
    NSString *nstr;
    IBOutlet UIActivityIndicatorView *ActivityIndicator;
     NSDictionary *NEwItemsdict;
   //NSString *tokenString_strng;
}
@property (nonatomic,retain) NSDictionary *myItems;
@property (nonatomic,retain) NSMutableArray *storyIcon_url;
@property (nonatomic,strong)NSArray *objectdata;
@property (nonatomic,strong)NSArray *objectdata1;
@property (nonatomic,retain)NSString *strng;
//@property (nonatomic,retain)NSString *tokenString_strng;
@property (nonatomic , assign) BOOL Ntwrkstatusbool;
+(UIImage*)getMyImage:(NSString*)imageName;
+(void)printLog:(NSMutableArray*)logArray;
+(void)StoryToken:(NSString *)tokenId;
//+(void)selectedCompanyIdMethod:(NSString*)Id indexpath:(int)indexPathNum;
@end
/*
This is the Final Coding to complete Every thing from Rashid Iqubal And faizan
Ahmad.
 */
#define GET @"GET"
