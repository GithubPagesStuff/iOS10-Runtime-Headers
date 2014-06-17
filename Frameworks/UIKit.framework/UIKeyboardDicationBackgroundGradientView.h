/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDictationView, UIKBRenderConfig;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {
    UIKBRenderConfig *_renderConfig;
    UIDictationView *_dictationView;
}

@property(retain) UIKBRenderConfig * renderConfig;
@property UIDictationView * dictationView;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDictationView:(id)arg1;
- (void)startColorTransitionOut;
- (void)startColorTransitionIn;
- (id)backgroundColorForCurrentRenderConfig;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFillFrame;
- (id)dictationView;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)layoutSubviews;

@end
