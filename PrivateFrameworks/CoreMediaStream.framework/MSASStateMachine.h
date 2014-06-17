/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MSASPersonModel, MSASAssetDownloader, MSBackoffManager, NSDictionary, MSASAssetUploader, NSMutableArray, MSASPhoneInvitations, NSString, NSObject<OS_dispatch_queue>, NSArray, MSASProtocol, MSAlbumSharingDaemon, MSImageScalingSpecification;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {
    int _commandState;
    MSASPersonModel *_model;
    NSString *_currentCommand;
    long long _currentCommandID;
    NSDictionary *_currentCommandParams;
    MSBackoffManager *_metadataBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    MSASAssetUploader *_assetUploader;
    MSASAssetDownloader *_assetDownloader;
    bool_isRetryingOutstandingActivities;
    bool_hasShutDown;
    int _maxMetadataRetryCount;
    MSAlbumSharingDaemon *_daemon;
    NSString *_personID;
    id _delegate;
    NSDictionary *_serverSideConfiguration;
    NSString *_serverSideConfigurationVersion;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSMutableArray *_assetInfoToReauthForDownload;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stopHandlerBlock;

    MSASProtocol *_protocol;
    MSASPhoneInvitations *_phoneInvitations;
    MSImageScalingSpecification *_derivativeImageScalingSpecification;
    MSImageScalingSpecification *_thumbnailImageScalingSpecification;
    NSArray *_derivativeSpecifications;
    NSDictionary *_metadataBackoffManagerParameters;
    NSDictionary *_MMCSBackoffManagerParameters;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postCommandCompletionBlock;

}

@property MSAlbumSharingDaemon * daemon;
@property int maxMetadataRetryCount;
@property(retain) NSDictionary * serverSideConfiguration;
@property(retain,readonly) NSString * serverSideConfigurationVersion;
@property(retain) MSASProtocol * protocol;
@property(retain) MSASPhoneInvitations * phoneInvitations;
@property(retain) NSString * focusAlbumGUID;
@property(retain) NSString * focusAssetCollectionGUID;
@property(retain,readonly) NSArray * derivativeSpecifications;
@property(retain,readonly) MSImageScalingSpecification * derivativeImageScalingSpecification;
@property(retain,readonly) MSImageScalingSpecification * thumbnailImageScalingSpecification;
@property id delegate;
@property(retain) NSString * personID;
@property bool isRetryingOutstandingActivities;
@property(setter=_setAssetInfoToReauthForDownload:,retain) NSMutableArray * _assetInfoToReauthForDownload;
@property(setter=_setStopHandlerBlock:,copy) id _stopHandlerBlock;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSObject<OS_dispatch_queue> * eventQueue;
@property(retain) NSObject<OS_dispatch_queue> * serverSideConfigQueue;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property bool hasShutDown;
@property(retain) NSDictionary * metadataBackoffManagerParameters;
@property(retain) NSDictionary * MMCSBackoffManagerParameters;
@property(copy) id postCommandCompletionBlock;


- (void)shutDownCompletionBlock:(id)arg1;
- (void)setServerSideConfigQueue:(id)arg1;
- (id)thumbnailImageScalingSpecification;
- (id)derivativeImageScalingSpecification;
- (void)setPhoneInvitations:(id)arg1;
- (id)focusAlbumGUID;
- (void)videoURLsForAssetCollection:(id)arg1 forMediaAssetType:(unsigned long long)arg2 inAlbum:(id)arg3 completionBlock:(id)arg4;
- (void)videoURLForAssetCollection:(id)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id)arg4;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id)arg4;
- (void)scheduleEvent:(id)arg1 assetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)removeSharingRelationships:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3;
- (void)addSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3;
- (void)continueAddingAssetCollections:(id)arg1 skipAssetCollections:(id)arg2 toAlbum:(id)arg3 info:(id)arg4;
- (void)updateAlbum:(id)arg1 updateAlbumFlags:(int)arg2 info:(id)arg3;
- (void)createAlbum:(id)arg1 info:(id)arg2;
- (void)deleteComments:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)deleteAlbum:(id)arg1 info:(id)arg2;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 album:(id)arg3 info:(id)arg4;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3;
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)arg1 info:(id)arg2;
- (void)checkForCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)checkForAssetCollectionUpdates:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbum:(id)arg1 info:(id)arg2;
- (void)subscribeToAlbum:(id)arg1 info:(id)arg2;
- (void)checkForUpdatesInAlbums:(id)arg1 resetSync:(bool)arg2 info:(id)arg3;
- (void)setServerSideConfiguration:(id)arg1;
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg1;
- (void)purgeEverythingCompletionBlock:(id)arg1;
- (void)MSASAssetDownloaderDidFinishBatch:(id)arg1;
- (void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
- (void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
- (void)MSASAssetUploader:(id)arg1 didFinishUploadingAssetCollection:(id)arg2 intoAlbum:(id)arg3 error:(id)arg4;
- (void)workQueueScheduleReauthForAssets:(id)arg1 inAlbum:(id)arg2;
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg1 params:(id)arg2;
- (id)_assetInfoToReauthForDownload;
- (void)_setAssetInfoToReauthForDownload:(id)arg1;
- (void)_scheduleEventDisposition:(int)arg1 params:(id)arg2;
- (void)_addCommentDisposition:(int)arg1 params:(id)arg2;
- (void)_removeSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (id)memberQueueMetadataBackoffManager;
- (id)phoneInvitations;
- (void)_addSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (void)_sendGetUploadTokensDisposition:(int)arg1 params:(id)arg2;
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg1;
- (id)_assetCollectionRejectedError;
- (void)_sendPutAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_sendUploadCompleteDisposition:(int)arg1 params:(id)arg2;
- (void)_continueAddingAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteAssetFilesInAssetCollections:(id)arg1;
- (id)derivativeSpecifications;
- (void)_deleteAssetFilesInAssetCollection:(id)arg1;
- (void)addAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3;
- (id)_assetCollectionFailedError;
- (void)_addAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)arg1;
- (void)_updateAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_createAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteCommentDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_setAssetCollectionSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_setAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForCommentChangesDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForAssetCollectionUpdatesDisposition:(int)arg1 params:(id)arg2;
- (void)_unsubscribeFromAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_subscribeToAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_getAccessControlsDisposition:(int)arg1 params:(id)arg2;
- (void)getAccessControlsForAlbums:(id)arg1 info:(id)arg2;
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForUpdatesInAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)setPendingRootCtag:(id)arg1;
- (void)_setStopHandlerBlock:(id)arg1;
- (id)rootCtagToCheckForChanges;
- (void)_checkForChangesDisposition:(int)arg1 params:(id)arg2;
- (void)checkForChangesResetSync:(bool)arg1 info:(id)arg2;
- (id)_URLReauthFailureWithUnderlyingError:(id)arg1;
- (int)maxMetadataRetryCount;
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)_getAlbumURLDisposition:(int)arg1 params:(id)arg2;
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg1;
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;
- (void)workQueueDidFinishCommandDueToCancellation;
- (id)postCommandCompletionBlock;
- (void)workQueuePerformNextCommand;
- (bool)hasShutDown;
- (void)workQueueCheckForNextCommand;
- (void)setMetadataBackoffManagerParameters:(id)arg1;
- (id)metadataBackoffManagerParameters;
- (void)setMMCSBackoffManagerParameters:(id)arg1;
- (id)MMCSBackoffManagerParameters;
- (id)latestNextActivityDate;
- (bool)workQueueEndCommandWithError:(id)arg1 command:(id)arg2 params:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)workQueueRefreshServerSideConfig;
- (void)serverSideQueueSetServerSideConfiguration:(id)arg1;
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg1;
- (id)serverSideQueueServerSideConfiguration;
- (id)serverSideConfigQueue;
- (void)workQueueDidFinishCommand;
- (void)_cancelOutstandingCommandsDisposition:(int)arg1 params:(id)arg2;
- (void)setRootCtagFromPendingRootCtag;
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg1 assetCollectionGUID:(id)arg2;
- (id)_canceledError;
- (void)workQueueCancelCompletionBlock:(id)arg1;
- (id)_stoppedError;
- (id)_stopHandlerBlock;
- (void)setPostCommandCompletionBlock:(id)arg1;
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)arg1;
- (void)setHasShutDown:(bool)arg1;
- (id)_assetUploader;
- (void)setMaxMetadataRetryCount:(int)arg1;
- (id)_assetDownloader;
- (id)_metadataBackoffManager;
- (void)workQueueRetryOutstandingActivities;
- (void)_sendGetServerSideConfigurationDisposition:(int)arg1 params:(id)arg2;
- (void)workQueueApplyServerSideConfiguration;
- (id)_model;
- (void)workQueueUpdateNextActivityDate;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (id)serverSideConfigurationVersion;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)refreshServerSideConfig;
- (id)focusAssetCollectionGUID;
- (id)serverSideConfiguration;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(id)arg3;
- (id)serverCommunicationBackoffDate;
- (bool)hasEnqueuedActivities;
- (int)assetsInDownloadQueueCount;
- (void)checkForChangesInfo:(id)arg1;
- (void)cancelCompletionBlock:(id)arg1;
- (void)stopAssetDownloadsCompletionBlock:(id)arg1;
- (void)setIsRetryingOutstandingActivities:(bool)arg1;
- (bool)isRetryingOutstandingActivities;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg1;
- (id)initWithPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (void)setDaemon:(id)arg1;
- (bool)isInRetryState;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (id)daemon;
- (id)protocol;
- (void)setEventQueue:(id)arg1;
- (id)eventQueue;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)start;
- (id)delegate;
- (id)workQueue;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setProtocol:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;

@end
