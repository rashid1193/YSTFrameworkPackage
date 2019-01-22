
#import <Foundation/Foundation.h>

@interface AudioClass : NSObject
{
   // int size;
}

-(instancetype)initWithValue:(NSString *)AudioId name:(NSString *)Name audiopath:(NSString *)audioPath size:(NSString *)Size used_falg:(NSString *)Used_falg;
-(void)printAudioValue;
-(NSString*)returnAudioPath;
-(NSString*)returnAudioSize;
-(int)returnNewAudioSize;
@property(nonatomic)int size1;
@property (nonatomic , strong) NSString *audioId;
@property (nonatomic , strong) NSString *audiopath;
@property (nonatomic , strong) NSString *name;
@property (nonatomic , strong) NSString *size;
@property (nonatomic , strong) NSString *used_flag;
@end
