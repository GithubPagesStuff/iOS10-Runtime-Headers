/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDownloadManager, NSString, SSPreorderManager, NSArray, SUClientInterface;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}

@property(readonly) NSArray * downloads;
@property(readonly) NSString * queueType;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)queueType;
- (id)initWithQueueType:(id)arg1 clientInterface:(id)arg2;
- (void)checkQueue;
- (void)_tearDownQueues;
- (void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)preorderManagerPreordersDidChange:(id)arg1;
- (id)downloads;
- (void)finalizeForWebScript;
- (id)attributeKeys;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)dealloc;

@end
