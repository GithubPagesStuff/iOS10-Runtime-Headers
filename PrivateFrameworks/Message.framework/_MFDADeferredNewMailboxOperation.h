/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {
    NSString *_displayName;
    NSString *_parentFolderID;
    NSString *_temporaryFolderID;
}


- (id)initWithDisplayName:(id)arg1 parentFolderID:(id)arg2 temporaryFolderID:(id)arg3;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)applyToFolderMap:(id)arg1;
- (id)folderChangeResult;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
