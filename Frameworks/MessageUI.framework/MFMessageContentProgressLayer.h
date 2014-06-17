/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UILabel, UIActivityIndicatorView;

@interface MFMessageContentProgressLayer : UIView  {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;


- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
