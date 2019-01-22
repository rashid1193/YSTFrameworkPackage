//
//  DBManagerClass.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 15/02/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>
#import "StoryTVC4.h"

@interface DBManagerClass : NSObject
{
    NSString *databasePath;
    NSString *databasePath2;
    NSString *dbFile;
    NSDictionary *Itemsdict;
    NSString *docsDir;
    NSArray *dirPaths;
    NSMutableArray *storyIdArray;
    NSMutableDictionary *allRecordDictionary;    
}
-(int)dropTable;
@property (nonatomic,strong)NSMutableArray *dataArray;
@property (nonatomic,strong)NSMutableArray *JsonDetailArray;
-(void)setArray;
-(void)printArrayviaClassB;
+(DBManagerClass*)getSharedInstance;
-(void)CreateDatabse:(NSString*)dbName;
-(int)createTableforTokenBundle:(NSString *)TokenfilePath;
-(void)CreateDb;
-(int) createTableforJson:(NSString*) filePath;
-(int)insertJsondetailYoutubeurl:(NSString *)utubeUrl StoryVersion:(NSString *)version catagory:(NSString *)storycatagory realeasingDate:(NSString *)storyreleasingdate createdtime:(NSString *)storycreatedtime question_Answer_reached:(NSString *)storyquesAnsReached end_reached:(NSString *)storyendReached startreached:(NSString *)storyStartreached rating:(NSString *)storyRating Views:(NSString *)storyviews iconUrl:(NSString *)storyiconurl zipUrl:(NSString *)zipUrl hindiname:(NSString *)storyhindiname authorname:(NSString *)storyauthorname englishname:(NSString *)storyenglishname id:(NSString *)storyid;
-(NSArray*)getJsonRecordsfromdatabase:(NSString*)filepath where:(NSString *)wherestmt query:(NSString *)selectQuery;
-(int)delete:(NSString *)stryid;
//---------------------------------------------.
-(int)runDMLAndDDLQuery:(NSString *)queryString;
-(NSMutableArray *)runDQLQuery:(NSString *)queryString;
-(NSString *)runDQLForTableExistenceQuery:(NSString *)tableName;
-(NSString *)runDQLForRecordExistenceQuery:(NSString *)recordQuery;
@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;
@end
