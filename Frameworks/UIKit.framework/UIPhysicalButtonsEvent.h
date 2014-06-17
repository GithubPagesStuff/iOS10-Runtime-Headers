/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, _UIPhysicalButton;

@interface UIPhysicalButtonsEvent : UIInternalEvent  {
    NSMutableSet *_allPhysicalButtons;
    _UIPhysicalButton *_triggeringPhysicalButton;
}

@property(retain) _UIPhysicalButton * _triggeringPhysicalButton;


- (long long)type;
- (void)dealloc;
- (id)_init;
- (id)_triggeringPhysicalButton;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForWindow:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (id)_respondersForWindow:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_windows;
- (void)_removePhysicalButton:(id)arg1;
- (void)set_triggeringPhysicalButton:(id)arg1;
- (id)_allPhysicalButtons;
- (void)_addPhysicalButton:(id)arg1;

@end
