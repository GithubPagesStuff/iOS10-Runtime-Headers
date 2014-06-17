/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement  {
    double _normalizedOffset;
}

@property double normalizedOffset;

+ (id)placementWithUndockedOffset:(double)arg1;

- (bool)isEqual:(id)arg1;
- (double)normalizedOffset;
- (void)setNormalizedOffset:(double)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (bool)inputViewWillAppear;
- (bool)isUndocked;

@end
