//
//  BackgroundClass.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 14/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BackgroundClass : NSObject
//{
//int size;
//}
-(int)returnNewBackgroundSize;
-(instancetype)initWithValue:(NSString *)backgroundId name:(NSString *)Name imagepath:(NSString *)Imagepath layout:(NSString *)Layout size:(NSString *)Size used_falg:(NSString *)Used_falg;
-(void)printBackgroundValue;
-(NSString*)returnBackgroundPath;
-(NSString*)returnBackgroundSize;
@property(nonatomic)int size1;
@property (nonatomic, strong) NSString *backId;
@property (nonatomic, strong) NSString *imagepath;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *layout;
@property (nonatomic, strong) NSString *size;
@property (nonatomic, strong) NSString *used_flag;

@end
