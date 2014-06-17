/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CALayer, UIPDFPageView, CAShapeLayer;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
    CAShapeLayer *_trackingBorder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _initialRect;
    bool_tracking;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _boundsInPDFSpace;
    UIPDFPageView *_pageView;
    struct CGPoint { 
        double x; 
        double y; 
    } _initialSelectionPointOnPage;
}

@property UIPDFPageView * pageView;
@property(readonly) struct CGPoint { double x1; double x2; } initialSelectionPointOnPage;
@property(readonly) struct CGPoint { double x1; double x2; } currentSelectionPointOnPage;


- (void)setPageView:(id)arg1;
- (struct CGPoint { double x1; double x2; })currentSelectionPointOnPage;
- (struct CGPoint { double x1; double x2; })initialSelectionPointOnPage;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })viewOffset;
- (struct CGPoint { double x1; double x2; })selectedPointFor:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1 fixedPoint:(struct CGPoint { double x1; double x2; }*)arg2 preceeds:(bool*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundsInEffectsSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setSelectedGrabberPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (id)init;
- (void)dealloc;
- (id)pageView;
- (void)remove;
- (void)setSelection:(id)arg1;
- (void)hide;

@end
