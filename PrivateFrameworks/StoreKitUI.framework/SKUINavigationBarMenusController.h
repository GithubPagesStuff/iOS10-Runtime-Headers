/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIControl, NSArray, SKUIMenuPopoverController, SKUINavigationBarMenusView;

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate> {
    UIControl *_focusedMenuButton;
    SKUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SKUIMenuPopoverController *_popoverController;
}


- (id)_menuViewElementForView:(id)arg1;
- (void)_destroyPopover;
- (void)reloadSectionViews;
- (id)initWithMenuViewElements:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)willAppearInNavigationBar;
- (id)view;
- (void)dealloc;
- (void).cxx_destruct;

@end
