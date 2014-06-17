/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, <_UIScreenEdgePanRecognizerDelegate>, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _screenBounds;
    bool_useGrapeFlags;
    bool_hasRecordedData;
    bool_hasDoneInitialBackProjectionTest;
    double _gestureRestrictionFactor;
    struct CGPoint { 
        double x; 
        double y; 
    } _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _type;
    bool_requiresLongPress;
    bool_requiresFlatThumb;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    <_UIScreenEdgePanRecognizerDelegate> *_delegate;
    _UIScreenEdgePanRecognizerSettings *_settings;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property unsigned long long targetEdges;
@property bool requiresFlatThumb;
@property(readonly) long long state;
@property(readonly) unsigned long long recognizedRegion;
@property(getter=isRequiringLongPress,readonly) bool requiringLongPress;
@property <_UIScreenEdgePanRecognizerDelegate> * delegate;
@property(retain) _UIScreenEdgePanRecognizerSettings * settings;
@property bool shouldUseGrapeFlags;

+ (bool)_edgeSwipeNavigationGestureEnabled;

- (id)settings;
- (void)setSettings:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)_setState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (long long)state;
- (void)dealloc;
- (void)reset;
- (unsigned long long)recognizedRegion;
- (bool)requiresFlatThumb;
- (unsigned long long)targetEdges;
- (bool)shouldUseGrapeFlags;
- (void)setRequiresFlatThumb:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (bool)isRequiringLongPress;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_longPressTimerElapsed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (unsigned long long)_targetEdges;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)_type;

@end
