/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, VKRasterMapTileCache, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface VKRasterMapTileServer : NSObject  {
    VKRasterMapTileCache *_superTileCache;
    NSMutableDictionary *_activeTileCreators;
    NSMutableDictionary *_pendingRequests;
    NSMutableSet *_tileCreators;
    unsigned int _superTileSize;
    bool_softwareRendering;
    NSObject<OS_dispatch_queue> *_homeQueue;
}

@property(readonly) unsigned int superTileSize;


- (id)initWithSuperTileSize:(unsigned int)arg1 cache:(id)arg2 softwareRendering:(bool)arg3 homeQueue:(id)arg4;
- (void)_renderRequest:(id)arg1 completion:(id)arg2;
- (void)renderRequest:(id)arg1 completion:(id)arg2;
- (unsigned int)superTileSize;
- (id)detailedDescription;
- (id)init;
- (void)dealloc;

@end
