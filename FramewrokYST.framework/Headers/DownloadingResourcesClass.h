//
//  DownloadingResourcesClass.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MainLayoutViewController4.h"
#import "MenuViewController4.h"

@class DownloadingResourcesClass;
@protocol DownloadingResourcesClassDelegate
-(IBAction)resourceDownloadButton:(DownloadingResourcesClass*)sender;
-(void)xmlDownloadingCompleteNotification;
-(void)getDownloadingCounting:(long int)downloadedFileCount andSize:(NSData*)downloadedFileSize;
@end
@interface DownloadingResourcesClass : NSObject
@property (nonatomic , weak) id <DownloadingResourcesClassDelegate> delegate;

- (void)download_async:(NSURLRequest*)urlRequest fileName:(NSString*)fileName folderName:(NSString*)folderName;
//@property (nonatomic , strong) NSData *resourceTempSize;

@end
