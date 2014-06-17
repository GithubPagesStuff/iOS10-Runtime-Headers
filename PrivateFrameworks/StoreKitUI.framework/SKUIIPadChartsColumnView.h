/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    NSArray *_contentViewControllers;
    long long _selectedViewControllerIndex;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(copy) NSArray * contentViewControllers;
@property(readonly) UIViewController * selectedViewController;


- (id)contentViewControllers;
- (void)_addSelectedViewController;
- (void)setContentViewControllers:(id)arg1;
- (void)setSelectedViewControllerIndex:(long long)arg1;
- (void).cxx_destruct;
- (id)selectedViewController;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)layoutSubviews;

@end
