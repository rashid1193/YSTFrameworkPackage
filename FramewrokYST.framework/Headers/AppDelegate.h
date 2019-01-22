//
//  AppDelegate.h
//  YourStoryTeller4
//
//  Created by ZMQ MAC3 on 30/01/18.
//  Copyright © 2018 ZMQ MAC3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
// @property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (nonatomic) Reachability *hostReachablity;
@property (nonatomic) Reachability *internetReachability;
@property (nonatomic) Reachability *wifiReachability;
//- (void)saveContext;
@end
#define APP_DELEGATE1 ((AppDelegate*)[[UIApplication sharedApplication] delegate])
