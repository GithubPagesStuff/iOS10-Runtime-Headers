/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView  {
    bool_connected;
    bool_shouldAnimateConnection;
}


- (void)setVisible:(bool)arg1;
- (void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (double)alphaForConnected:(bool)arg1;
- (void)performPendedActions;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
