/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSPublishStorageProtocolDelegate>, NSMutableDictionary;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
    <MSPublishStorageProtocolDelegate> *_delegate;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
    unsigned int *_itemFlags;
    long long _itemsInFlight;
}

@property <MSPublishStorageProtocolDelegate> * delegate;


- (void)_putItemsFailure;
- (void)_requestCompleted;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1;
- (void)deactivate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
