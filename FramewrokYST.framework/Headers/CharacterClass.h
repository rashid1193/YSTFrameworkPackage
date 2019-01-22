//
//  CharacterClass.h
//  NSURLSessionProject
//
//  Created by ZMQ MAC4 on 15/12/17.
//  Copyright © 2017 ZMQ MAC4. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CharacterClass : NSObject
//{
//int size;
//}
-(int)returnNewCharacterSize;
-(instancetype)initWithValue:(NSString *)CharId name:(NSString *)Name imagepath:(NSString *)Imagepath res_type:(NSString *)Res_Type size:(NSString *)Size used_falg:(NSString *)Used_falg;
-(void)expressionStore:(NSString*)Id imagepath:(NSString*)imagePath size:(NSString*)Size;
-(void)printCharacterValue;
-(NSString*)returnCharacterPath;
-(NSString*)returnCharacterSize;
@property(nonatomic)int size1;
@property (nonatomic , strong) NSString *charId;
@property (nonatomic , strong) NSString *imagepath;
@property (nonatomic , strong) NSString *name;
@property (nonatomic , strong) NSString *res_type;
@property (nonatomic , strong) NSString *size;
@property (nonatomic , strong) NSString *used_flag;

@property (nonatomic , strong) NSString *exprId;
@property (nonatomic , strong) NSString *exprImagePath;
@property (nonatomic , strong) NSString *exprImageSize;
@end
