/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NotificationsUI.framework/NotificationsUI
 */

@class NSDictionary;

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface> {
    NSDictionary *_context;
}

@property(copy) NSDictionary * context;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)becomeSticky;
- (void)_getPreferredContentSizeWithCompletion:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)_setContext:(id)arg1;
- (void)dealloc;
- (void)dismiss;

@end
