/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISnapshotView, UITabBar, UITabBarItemProxy, NSArray, UIImageView, UITabBarItem, NSMutableArray, UILabel;

@interface UITabBarCustomizeView : UIView  {
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    NSArray *_availableItems;
}

@property(retain) NSArray * availableItems;


- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)availableItems;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)tintTabBarItemsForEdit:(bool)arg1;
- (void)setAvailableItems:(id)arg1;
- (void)updateProxiesSelection;
- (long long)_barMetrics;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
