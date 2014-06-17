/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, NSString, NSURL, UITabBarItem;

@interface SKUITabBarItem : NSObject <NSCopying> {
    bool_alwaysCreatesRootViewController;
    long long _barTintStyle;
    NSString *_metricsIdentifier;
    NSURL *_rootURL;
    Class _rootViewControllerClass;
    NSString *_tabIdentifier;
    UITabBarItem *_underlyingTabBarItem;
    UIColor *_userInterfaceTintColor;
}

@property(readonly) NSString * tabIdentifier;
@property bool alwaysCreatesRootViewController;
@property long long barTintStyle;
@property(copy) NSString * metricsIdentifier;
@property(copy) NSURL * rootURL;
@property(retain) Class rootViewControllerClass;
@property(retain) UITabBarItem * underlyingTabBarItem;
@property(retain) UIColor * userInterfaceTintColor;


- (id)underlyingTabBarItem;
- (void)setUserInterfaceTintColor:(id)arg1;
- (void)setUnderlyingTabBarItem:(id)arg1;
- (void)setRootViewControllerClass:(Class)arg1;
- (void)setRootURL:(id)arg1;
- (void)setMetricsIdentifier:(id)arg1;
- (void)setBarTintStyle:(long long)arg1;
- (void)setAlwaysCreatesRootViewController:(bool)arg1;
- (id)initWithTabIdentifier:(id)arg1;
- (id)userInterfaceTintColor;
- (id)metricsIdentifier;
- (long long)barTintStyle;
- (Class)rootViewControllerClass;
- (bool)alwaysCreatesRootViewController;
- (id)tabIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)rootURL;

@end
