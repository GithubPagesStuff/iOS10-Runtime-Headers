/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMManualUpdater : NSObject  {
    id _target;
    SEL _action;
    unsigned int _needsUpdate : 1;
}

@property id target;
@property SEL action;
@property bool needsUpdate;


- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (SEL)action;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setAction:(SEL)arg1;
- (bool)needsUpdate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1;
- (id)description;
- (id)target;

@end
