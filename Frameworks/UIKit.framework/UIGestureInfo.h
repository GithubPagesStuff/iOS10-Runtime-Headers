/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollAnimation, UIGestureAnimation;

@interface UIGestureInfo : NSObject  {
    id delegate;
    int enabledGestures;
    int rotationState;
    int zoomState;
    int panState;
    struct CGPoint { 
        double x; 
        double y; 
    } startGestureInner;
    struct CGPoint { 
        double x; 
        double y; 
    } startGestureOuter;
    struct CGPoint { 
        double x; 
        double y; 
    } startScrollPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } endScrollPoint;
    struct CGSize { 
        double width; 
        double height; 
    } visibleSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } centerRect;
    UIGestureAnimation *rotationAnimation;
    float rotationDegrees;
    float recentRotationDegrees;
    float minDegrees;
    float maxDegrees;
    float startDegrees;
    float endDegrees;
    UIGestureAnimation *zoomAnimation;
    int zoomRubberBandHysteresisCount;
    float zoomScale;
    float startScale;
    float endScale;
    float unadjustedScale;
    float zoomMultiplier;
    float minScale;
    float maxScale;
    struct CGPoint { 
        double x; 
        double y; 
    } zoomFailureWindowPoint;
    float zoomFailureDuration;
    float zoomFailureStartScale;
    float zoomAnimationProgress;
    UIScrollAnimation *scrollAnimation;
    struct { 
        unsigned int pushedRunLoop : 1; 
        unsigned int isRotatingRight : 1; 
        unsigned int isZoomRubberBandEnabled : 1; 
        unsigned int zoomsFromCurrentToMinOrMax : 1; 
        unsigned int updatesScroller : 1; 
        unsigned int isAnimatingZoomFailure : 1; 
    } flags;
}


- (id)init;
- (void)dealloc;

@end
