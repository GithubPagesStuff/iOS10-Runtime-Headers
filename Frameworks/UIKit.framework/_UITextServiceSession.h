/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIViewController, UIPopoverController;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {
    long long _type;
    UIViewController *_modalViewController;
    UIPopoverController *_popoverController;
    bool_isTextEffectsWindow;
    bool_dismissed;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissedHandler;

}

@property(copy) id dismissedHandler;

+ (id)textServiceSessionForType:(long long)arg1;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (bool)canShowTextServices;

- (id)initWithType:(long long)arg1;
- (id)init;
- (long long)type;
- (void)dealloc;
- (id)dismissedHandler;
- (void)sessionDidDismiss;
- (void)_endSession;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (bool)isDisplaying;
- (void)setDismissedHandler:(id)arg1;
- (void)dismissTextServiceAnimated:(bool)arg1;

@end
