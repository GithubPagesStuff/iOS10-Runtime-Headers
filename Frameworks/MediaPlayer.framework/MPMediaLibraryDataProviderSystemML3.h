/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3  {
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedCloudGeniusErrorForError:(id)arg1;
+ (id)_localizedGeniusErrorForError:(id)arg1;
+ (bool)_isGeniusEnabled;

- (long long)_currentRevision;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(id)arg3;
- (void)_initInstanceVariableOnce;
- (bool)supportsEntityChangeTrackingForMediaEntityType:(unsigned long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
- (void)updateEntitesToCurrentRevision;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (id)errorResolverForMediaItem:(id)arg1;
- (bool)isGeniusEnabled;
- (id)initWithLibrary:(id)arg1;
- (void).cxx_destruct;

@end
