/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor  {
    unsigned long long _reasons;
    bool_visitedViewIsWindow;
    bool_viewHasDefinedTintColor;
    bool_viewHasNonAutomaticTintAdjustmentMode;
    UIView *_originalVisitedView;
    UIView *_changedSubview;
}


- (void)_prepareForView:(id)arg1 trackingHierarchy:(bool)arg2;
- (bool)_visitView:(id)arg1;
- (bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (id)initWithTraversalDirection:(unsigned long long)arg1;
- (id)initWithNotificationReasons:(unsigned long long)arg1;

@end
