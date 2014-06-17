/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest  {
}

@property long long style;
@property(getter=isLegacy) bool legacy;
@property long long legibilityStyle;
@property(retain) UIColor * foregroundColor;
@property(retain) NSNumber * overrideHeight;


- (void)setForegroundColor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setOverrideHeight:(id)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;

@end
