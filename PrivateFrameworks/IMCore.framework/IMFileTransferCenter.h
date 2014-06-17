/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, NSDictionary, NSMutableSet, NSArray, NSMutableArray;

@interface IMFileTransferCenter : NSObject  {
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
}

@property(readonly) NSDictionary * transfers;
@property(readonly) NSArray * activeTransferGUIDs;
@property(readonly) NSArray * orderedTransfersGUIDs;
@property(readonly) bool hasActiveFileTransfers;
@property(readonly) bool hasPendingFileTransfers;
@property(readonly) NSArray * activeTransfers;
@property(readonly) NSArray * orderedTransfers;

+ (void)setTransferCenterClass:(Class)arg1;
+ (Class)fileTransferClass;
+ (Class)transferCenterClass;
+ (id)sharedInstance;

- (bool)wasFileTransferPreauthorized:(id)arg1;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (void)clearFinishedTransfers;
- (id)orderedTransfersGUIDs;
- (id)orderedTransfers;
- (id)activeTransferGUIDs;
- (id)activeTransfers;
- (id)transfers;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)deleteTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)sendTransfer:(id)arg1;
- (id)chatForTransfer:(id)arg1;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (bool)hasActiveFileTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (bool)hasPendingFileTransfers;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (void)_clearTransfers;
- (bool)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4;
- (void)_addActiveTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(bool)arg2;
- (bool)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (id)transferForGUID:(id)arg1;
- (void)_addTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)acknowledgeAllPendingTransfers;
- (void)_removeAllActiveTransfers;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removePendingTransfer:(id)arg1;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (id)transfersForAccount:(id)arg1;
- (void)dealloc;

@end
