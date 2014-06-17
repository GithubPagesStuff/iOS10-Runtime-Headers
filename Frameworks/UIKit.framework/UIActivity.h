/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSExtension, NSExtensionItem;

@interface UIActivity : NSObject  {
    bool_hiddenByDefault;
    long long _defaultPriority;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activityCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activityCompletionWithItemsHandler;

    NSExtensionItem *__injectedExtensionItem;
}

@property(retain,readonly) NSExtension * applicationExtension;
@property(retain,readonly) NSExtensionItem * _injectedExtensionItem;
@property(getter=_isHiddenByDefault,setter=_setHiddenByDefault:) bool hiddenByDefault;
@property(copy) id activityCompletionHandler;
@property(copy) id activityCompletionWithItemsHandler;
@property(retain) NSExtensionItem * _injectedExtensionItem;

+ (id)_activityGenericImage:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;
+ (long long)activityCategory;

- (id)init;
- (void)_cleanup;
- (void)dealloc;
- (id)activityType;
- (void)_injectedJavaScriptResult:(id)arg1;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (void)_setSubject:(id)arg1;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionWithItemsHandler:(id)arg1;
- (void)_setActivityCompletionHandler:(id)arg1;
- (id)_beforeActivity;
- (bool)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)activitySettingsImage;
- (void)set_injectedExtensionItem:(id)arg1;
- (void)setActivityCompletionWithItemsHandler:(id)arg1;
- (id)activityCompletionWithItemsHandler;
- (void)setActivityCompletionHandler:(id)arg1;
- (id)activityCompletionHandler;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (id)_injectedExtensionItem;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)applicationExtension;
- (void)_setHiddenByDefault:(bool)arg1;
- (bool)_isHiddenByDefault;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (void)activityDidFinish:(bool)arg1;
- (struct CGSize { double x1; double x2; })_thumbnailSize;

@end
