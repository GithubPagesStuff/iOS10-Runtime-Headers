/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, <MFMessageComposeViewControllerDelegate>, NSString, NSMutableArray;

@interface MFMessageComposeViewController : UINavigationController  {
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    NSMutableArray *_mutableAttachmentURLs;
    unsigned long long _currentAttachedVideoCount;
    unsigned long long _currentAttachedAudioCount;
    unsigned long long _currentAttachedImageCount;
    NSArray *_attachments;
}

@property <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;
@property(copy) NSArray * recipients;
@property(copy) NSString * body;
@property(copy) NSString * subject;
@property(copy,readonly) NSArray * attachments;
@property unsigned long long currentAttachedVideoCount;
@property unsigned long long currentAttachedAudioCount;
@property unsigned long long currentAttachedImageCount;
@property(copy) NSMutableArray * mutableAttachmentURLs;

+ (void)_startListeningForAvailabilityNotifications;
+ (bool)canSendAttachments;
+ (bool)canSendSubject;
+ (void)_setupAccountMonitor;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (bool)_canSendText;
+ (void)initialize;
+ (bool)isSupportedAttachmentUTI:(id)arg1;
+ (bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (bool)isiMessageEnabled;
+ (bool)isMMSEnabled;
+ (bool)canSendText;

- (unsigned long long)currentAttachedImageCount;
- (unsigned long long)currentAttachedAudioCount;
- (unsigned long long)currentAttachedVideoCount;
- (void)setMutableAttachmentURLs:(id)arg1;
- (id)messageComposeDelegate;
- (void)_setCanEditRecipients:(bool)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (bool)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (bool)canAddAttachmentURL:(id)arg1;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (id)_contentTypeForMIMEType:(id)arg1;
- (id)mutableAttachmentURLs;
- (bool)_isImageMIMEType:(id)arg1;
- (bool)_isAudioMIMEType:(id)arg1;
- (bool)_isVideoMIMEType:(id)arg1;
- (id)_MIMETypeForURL:(id)arg1;
- (void)setCurrentAttachedImageCount:(unsigned long long)arg1;
- (void)setCurrentAttachedAudioCount:(unsigned long long)arg1;
- (void)setCurrentAttachedVideoCount:(unsigned long long)arg1;
- (void)disableUserAttachments;
- (id)attachmentURLs;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)setBody:(id)arg1;
- (id)body;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)attachments;
- (void)dealloc;
- (bool)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (bool)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (void)setMessageComposeDelegate:(id)arg1;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
