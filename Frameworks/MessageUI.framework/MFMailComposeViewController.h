/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMailComposeViewControllerDelegate>;

@interface MFMailComposeViewController : UINavigationController  {
    id _internal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setupAnimationBlock;

    bool_didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

@property <MFMailComposeViewControllerDelegate> * mailComposeDelegate;

+ (unsigned long long)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (bool)canSendMailSourceAccountManagement:(int)arg1;
+ (bool)canSendMail;
+ (bool)hasAutosavedMessageWithIdentifier:(id)arg1;

- (void)setAutorotationDelegate:(id)arg1;
- (void)addSetupAnimationBlock:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (id)mailComposeDelegate;
- (id)_internalViewController;
- (void)finalizeCompositionValues;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
