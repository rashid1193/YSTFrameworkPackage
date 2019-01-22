//
//  DeviceClass.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 15/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceClass : NSObject

-(id)initWithValue:(NSInteger)Width height:(NSInteger)Height;
-(void)printDeviceValue;
@property int width;
@property int height;
@end
