/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIViewController, NSString, UIImage, _UIActivityBundleHelper, NSExtension;

@interface UIApplicationExtensionActivity : UIActivity  {
    NSExtension *_applicationExtension;
    UIViewController *_extensionViewController;
    id _extensionContextIdentifier;
    UIViewController *_presenterViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presenterCompletion;

    _UIActivityBundleHelper *_activityBundleHelper;
    NSString *_localizedExtensionBundleName;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _extensionRequestCleanupCompletion;

}

@property(retain) NSExtension * applicationExtension;
@property(retain) UIViewController * extensionViewController;
@property(copy) id extensionContextIdentifier;
@property UIViewController * presenterViewController;
@property(copy) id presenterCompletion;
@property(retain) _UIActivityBundleHelper * activityBundleHelper;
@property(copy) NSString * localizedExtensionBundleName;
@property(retain) UIImage * renderedActivityImage;
@property(retain) UIImage * renderedActivitySettingsImage;
@property(copy) id extensionRequestCleanupCompletion;

+ (id)applicationExtensionActivitiesForItems:(id)arg1;
+ (id)activityForApplicationExtension:(id)arg1 category:(long long)arg2;
+ (id)activityForApplicationExtension:(id)arg1;
+ (long long)activityCategory;

- (id)extensionContextIdentifier;
- (void)setExtensionContextIdentifier:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)activityType;
- (void)setActivityBundleHelper:(id)arg1;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (id)_itemProviderForImageRep:(id)arg1;
- (id)presenterCompletion;
- (id)presenterViewController;
- (void)setExtensionViewController:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id)arg1;
- (id)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (void)_presentExtensionViewControllerIfPossible;
- (void)setPresenterCompletion:(id)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (bool)_isNonUIExtension;
- (id)_inputItemsFromActivityItems:(id)arg1;
- (void)setRenderedActivitySettingsImage:(id)arg1;
- (id)renderedActivitySettingsImage;
- (void)setRenderedActivityImage:(id)arg1;
- (id)renderedActivityImage;
- (void)setLocalizedExtensionBundleName:(id)arg1;
- (id)activityBundleHelper;
- (id)localizedExtensionBundleName;
- (id)applicationExtension;
- (void)setApplicationExtension:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;

@end
