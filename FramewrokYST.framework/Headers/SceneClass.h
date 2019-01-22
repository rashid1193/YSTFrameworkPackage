//
//  SceneClass.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 15/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ElementClass.h"
@interface SceneClass : NSObject
{
    //ElementClass *elementClassWithinSceneClass;
}
-(id)initWithValue:(NSString*)Id BackgroundId:(NSString*)bgId sequenceId:(NSString*)sequId name:(NSString*)NameOfScene sceneLayout:(NSString*)sceneLayout sceneType:(NSString*)sceneType;
-(void)StoreElementObject:(NSMutableArray*)elementClass;
-(void)printSceneClass;
-(void)printSceneElementObject;
//-(NSArray*)returnSceneClassAllObject;
@property (nonatomic , strong) NSMutableArray
*returnElementObjectArray;
@property (nonatomic , strong) NSString *sceneId;
@property (nonatomic , strong) NSString *backgroundId;
@property (nonatomic , strong) NSString *sequence;
@property (nonatomic , strong) NSString *name;
@property (nonatomic , strong) NSString *layout;
@property (nonatomic , strong) NSString *type;
@end
