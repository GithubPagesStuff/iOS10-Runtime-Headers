/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, UIKBKeyView, UIKBBackgroundView, NSMutableArray, UITouch, UILabel;

@interface UIKeyboardPredictionView : UIView  {
    UIKBBackgroundView *m_backgroundView;
    NSMutableArray *m_predictionCells;
    unsigned long long m_activeIndex;
    double m_width;
    NSString *m_openQuote;
    NSString *m_closeQuote;
    UIView *m_message;
    UILabel *m_messageLabel;
    UIKBKeyView *m_messageKeyView;
    double m_messageShownTime;
    struct CGPoint { 
        double x; 
        double y; 
    } m_initLocation;
    boolm_dragging;
    boolm_hasLongCandidates;
    boolm_currentInputModeEnablePrediction;
    UIView *m_leftDimmingView;
    UIView *m_rightDimmingView;
    boolm_touchOnDimmingView;
    int _state;
    UITouch *_activeTouch;
}

@property(retain) UITouch * activeTouch;
@property bool show;
@property int state;

+ (id)sharedInstance;
+ (double)predictionViewHeight;
+ (unsigned long long)numberOfCandidates;
+ (id)activeInstance;

- (bool)enabled;
- (double)height;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)suspend;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (id)description;
- (void)activateCandidateAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)acceptCandidate;
- (unsigned long long)predictionCount;
- (void)showMessageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeMessage;
- (int)maxMessageCount;
- (void)acceptCandidateAtCell:(id)arg1;
- (void)deactivateCandidate;
- (void)setActiveCellWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setActiveCellWithIndex:(unsigned long long)arg1;
- (void)setTouchedCellState:(int)arg1;
- (void)releaseMessage;
- (void)inputModeDidChange;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (void)setShow:(bool)arg1;
- (void)setPredictions:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
- (void)setPredictionViewState:(int)arg1 animate:(bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)show;
- (int)messageCount;

@end
