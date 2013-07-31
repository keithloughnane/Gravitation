

#import <UIKit/UIKit.h>

@class rockViewController;

@interface rockAppDelegate : NSObject <UIApplicationDelegate> {
	IBOutlet UIWindow *window;
	IBOutlet rockViewController *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) rockViewController *viewController;

@end

