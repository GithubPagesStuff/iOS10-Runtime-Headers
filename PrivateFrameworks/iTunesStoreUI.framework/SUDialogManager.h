/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate> {
    NSMutableArray *_dialogs;
}

@property(readonly) long long numberOfPendingDialogs;

+ (id)newDialogWithError:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (bool)presentDialogForError:(id)arg1;
- (void)dialogDidCancel:(id)arg1;
- (void)dialog:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)presentDialogForError:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2;
- (bool)_haveEquivalentDialog:(id)arg1;
- (bool)presentDialog:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (long long)numberOfPendingDialogs;
- (bool)presentDialog:(id)arg1;
- (void)dealloc;

@end
