/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, MKSmallCalloutView, MKCalloutBackgroundView, UIView;

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol> {
    MKSmallCalloutView *_smallCalloutView;
}

@property double maximumWidth;
@property(retain) MKCalloutBackgroundView * calloutBackgroundView;
@property unsigned long long mapDisplayStyle;
@property(copy) NSString * calloutTitle;
@property(copy) NSString * calloutSubtitle;
@property(retain) UIView * leftView;
@property(retain) UIView * rightView;
@property(retain) UIView * detailView;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)mapDisplayStyle;
- (void)setDetailView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)setCalloutBackgroundView:(id)arg1;
- (id)calloutBackgroundView;
- (id)detailView;
- (id)_smallCalloutView;
- (void)beginMapsTransitionMovingSideways;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (id)calloutSubtitle;
- (void)updatePreferredContentSize;
- (void)setCalloutTitle:(id)arg1;
- (id)calloutTitle;
- (void).cxx_destruct;
- (void)reset;
- (id)rightView;
- (id)leftView;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;

@end
