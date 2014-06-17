/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFContactsSearchResultsModel, MFContactsSearchManager, NSNumber, <MFMailComposeContactsSearchControllerDelegate>;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_corecipientSearchTaskID;
    bool_foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    NSNumber *_taskID;
}

@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(retain) NSNumber * taskID;


- (void)_finishSearch;
- (void)searchWithString:(id)arg1;
- (void)setTaskID:(id)arg1;
- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)finishedTaskWithID:(id)arg1;
- (id)taskID;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)cancelSearch;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
