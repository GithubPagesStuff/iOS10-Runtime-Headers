/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIAlertController, RUIObjectModel<RUIAlertViewDelegate>, NSDictionary;

@interface RUIAlertView : RUIElement  {
    UIAlertController *_alertController;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
    NSString *_message;
    long long _buttonIndex;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

}

@property RUIObjectModel<RUIAlertViewDelegate> * objectModel;
@property(retain) NSDictionary * attributes;
@property(retain) NSString * title;
@property(retain) NSString * message;
@property(readonly) long long buttonIndex;
@property(copy) id completion;


- (long long)buttonIndex;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 destructive:(bool)arg3 attributes:(id)arg4;
- (void)runAlertInController:(id)arg1 completion:(id)arg2;
- (void)setObjectModel:(id)arg1;
- (id)objectModel;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)alertController;
- (void)setCompletion:(id)arg1;
- (id)completion;

@end
