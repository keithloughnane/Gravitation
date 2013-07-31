

#import <UIKit/UIKit.h>
#ifndef IBOutlet
#define IBOutlet
#endif

#define stateFilename @"state.plist"
#define optionsFilename @"state.plist"
#define scoresFilename @"state.plist"
@interface rockViewController : UIViewController {
	
	UIImage* rockImage;
	UIImage* smallRockImage;
	UIImage* smallH20Image;	
	UIImage* smallIronImage;
	UIImage* magmaImage;
	UIImage* earthlikeImage;
	UIImage* gravImage;
	
	UIImage* killBoxImage;
	UIImage* BGImage;
	
	UIImage* largeRockImage;	
	UIImage* largeH20Image;	
	UIImage* largeIronImage;
	
	UIImage* ironCoreImage;	
	UIImage* rockMantalImage;	
	UIImage* H20SurfaceImage;	
	
		UIImage* ufoImage;
	UIImage* blackHoleButtonImage;
	
	UIImage* bombImage;
	
	UIImage* minusButtonImage;
	UIImage* plusButtonImage;
	UIImage* playButtonImage;
	UIImage* pauseButtonImage;
	UIImage* zeroButtonImage;
	UIImage* nukeButtonImage;
	UIImage* menuBarImage;
	UIImage* pauseScreenImage[20];
	//UIImageView* BGView;
	IBOutlet UILabel *debugText;
	
	int level;
	//NSArray scores;
}
@property (nonatomic, retain) UIImage* rockImage;
@property (retain, nonatomic) UILabel *debugText;

- (void)onTimer;
- (void)onAnimationComplete:(NSString *)animationID finished:(NSNumber *)finished context:(void *)context;
- (double)GetDist:(double)x1 :(double)y1 :(double)x2 :(double)y2;
- (double)GetAng:(double)x1 :(double)y1 :(double)x2 :(double)y2;
- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)LoadLevel:(int)levelNumber;
- (void)destroyBody:(int) body;
- (void)pauseAtEnd:(int)levelNumber;
- (void)unpause;
- (void)pause;
- (bool)goalTest;
- (void)MakeBlackHole:(double)bx :(double)by;
- (int) placeScore:(int)mscore :(int)mlevel ;

-(void)applicationWillTerminate:(NSNotification *)notification;

- (NSString *) dataFilePath;
- (NSString *) optionsFilePath;
- (NSString *) scoreFilePath:(int) llevel;

-(int)LoadState;	
-(int)SaveState;		
-(int)LoadScores:(int) llevel;			
-(int)SaveScores:(int) llevel;
-(int)SaveOptions;
-(int)LoadOptions;

//ifAddScore(array scores, int level score)
@end

