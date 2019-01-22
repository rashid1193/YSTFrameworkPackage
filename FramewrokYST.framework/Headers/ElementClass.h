
#import <Foundation/Foundation.h>

@interface ElementClass : NSObject

    @property int sceneId;
    @property int elementId;
    @property int sequenceId;
    @property float delay;
    @property (nonatomic,strong) NSString *type;

    //Associated Properties;

    //type sequence
    @property int next_scene_sequence;
    // type draw
    @property (nonatomic,strong) NSString *characterIdDraw;
    @property int expressionIdDraw;
    @property (nonatomic,strong) NSString *animationDraw;
    @property int x,y,z;
    // type dialog
    @property (nonatomic,strong) NSString *characterIdDialog;
    @property int expressionIdDialog;
    @property (nonatomic,strong) NSString *dialog;
    @property (nonatomic,strong) NSString *audioId;
    // type disappear
   // @property int characterIdDisappear;
   @property (nonatomic,strong) NSString *characterIdDisappear;
    @property (nonatomic,strong) NSString *animationDisappear;
    // type message
    @property (nonatomic,strong) NSString *dialogMessage;
    @property (nonatomic,strong) NSString *audioIdMessage;
    // type stop
    @property (nonatomic,strong) NSString *questionStop;
    @property (nonatomic,strong) NSString *q_type_stop;
    @property (nonatomic,strong) NSString *correctStop;
    @property (nonatomic,strong) NSString *incorrectStop;
    @property (nonatomic,strong) NSString *q_audio_id_stop;
    @property (nonatomic,strong) NSString *a_audio_id_stop;
@property (nonatomic,strong) NSString *w_audio_id_stop;
-(id)initWithValue:(NSString*)elementId sequenceId:(NSString*)seqId  sceneDelay:(NSString*)sceneDelay sceneType:(NSString*)sceneType sceneId:(NSString*)SceneId;
//Type draw
-(void)drawTypeElement:(NSString*)charId exprId:(NSString*)exprId animat:(NSString*)Animation x:(NSString*)X y:(NSString*)Y Z:(NSString*)Z;
//Type dialog
-(void)dialogTypeElement:(NSString*)charId exprId:(NSString*)exprId dialog:(NSString*)Dialog audioId:(NSString*)AudioId;
//Type sequence
-(void)sequenceTypeElement:(NSString*)nextScene;
//Type message
-(void)messageTypeElement:(NSString*)Message andAudioId:(NSString*)audioId;
//Type stop
-(void)stopTypeElement:(NSString*)question q_type:(NSString*)q_type correct:(NSString*)correct incorrect:(NSString*)incorrect q_audio_id:(NSString*)q_audio_id a_audio_id:(NSString*)a_audio_id w_audio_id:(NSString*)w_audio_id;
//Type disappear
-(void)disappearTypeElement:(NSString*)charId animat:(NSString*)Animation;
-(void)printElementClassInfo;
-(void)printDrawTypeElement;
-(void)printDialogTypeElement;
-(void)printDisappearTypeElement;
-(void)printSequenceTypeElement;
@end
