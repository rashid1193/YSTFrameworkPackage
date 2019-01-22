//
//  Languages.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 14/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Languages : NSObject

-(id)initWithValue:(NSString*)langid langName:(NSString*)langname langCode:(NSString*)langcode;
-(void)printLangValue;

@property (nonatomic, strong) NSString *Lang_id;
@property (nonatomic, strong) NSString *Lang_name;
@property (nonatomic, strong) NSString *Lang_code;
@end
