

#import <Foundation/Foundation.h>
#import "Languages.h"
#import "BackgroundClass.h"
#import "AudioClass.h"
#import "SceneClass.h"
#import "DeviceClass.h"
#import "CharacterClass.h"
#import "StoryClass.h"
#import "ElementClass.h"
@interface ParserClass : NSObject<NSXMLParserDelegate>
{
    Languages *langClass;
    BackgroundClass *backgroundClass;
    AudioClass *audioClass;
    SceneClass *sceneClass;
    CharacterClass *characterClass;
    
    DeviceClass *deviceClass;
    ElementClass *elementClass;
}
@property (nonatomic , strong) NSMutableArray *backgroundArray;
@property (nonatomic , strong) NSMutableArray *audioArray;
@property (nonatomic , strong) NSMutableArray *characterArray;
@property (nonatomic , strong) NSMutableArray *sceneArray;
@property (nonatomic , strong) StoryClass *storyClass;
@property BOOL parserResult;
-(void)xmlParser:(NSData *)xmlFile;
@end
