//
//  StoryClass.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 15/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StoryClass : NSObject

-(instancetype)initWithValue:(NSString *)Identity name:(NSString *)Name category:(NSString *)category writer:(NSString *)writer version:(NSString *)version hits:(NSString *)hits status:(NSString*)status approved:(NSString*)approved access:(NSString*)access;
-(void)printStoryItem;
@property (nonatomic , strong) NSString *storyIdString;
@property (nonatomic , strong) NSString *storyName;
@property (nonatomic , strong) NSString *storyCategory;
@property int storyWriter;
@property int storyVersion;
@property int storyHits;
@property int storyStatus;
@property int storyApproved;
@property int storyAccess;
@end
