/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {
    bool_didPickApplication;
    bool_isVisible;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presentationBlock;

    bool_redisplayAfterRotation;
}


- (void)presentUsingBlock:(id)arg1;
- (bool)_isAffectedByWindowNotification:(id)arg1;
- (void)setupNativeObject;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)destroyNativeObject;
- (void)dealloc;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;

@end
