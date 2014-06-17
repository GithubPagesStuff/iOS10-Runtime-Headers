/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOTilePool, GEOTileLoaderConfiguration, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, <GEOTileLoaderInternalDelegate>, GEOTileServerProxy;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver> {
    struct list<LoadItem, std::__1::allocator<LoadItem> > { 
        struct __list_node_base<LoadItem, void *> { 
            struct __list_node<LoadItem, void *> {} *__prev_; 
            struct __list_node<LoadItem, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<LoadItem, void *> > > { 
            unsigned long long __first_; 
        } __size_alloc_; 
    } _loadItems;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    } _lock;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { 
        struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { 
            struct DispatchTimer {} *__first_; 
        } __ptr_; 
    } _timer;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    struct { 
        double x; 
        double y; 
    } _sortPoint;
    GEOTileServerProxy *_proxy;
    int _memoryHits;
    int _diskHits;
    int _networkHits;

  /* Unexpected information at end of encoded ivar type: "__next_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}}"__size_alloc_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> > >="__first_"Q}} */
  /* Error parsing encoded ivar type info: {list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}"__next_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}}"__size_alloc_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> > >="__first_"Q}} */
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> {} _shrinkCacheRequesters;


  /* Unexpected information at end of encoded ivar type: "__next_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}}"__size_alloc_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> > >="__first_"Q}} */
  /* Error parsing encoded ivar type info: {list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}"__next_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>}}"__size_alloc_"{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> > >="__first_"Q}} */
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> {} _freeableSizeRequesters;

    NSMutableArray *_tileDecoders;
    bool_networkActive;
    <GEOTileLoaderInternalDelegate> *_internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    } _usageLock;
    struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > > { 
        struct __hash_table<std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::hash<GEOTileKey>, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::equal_to<GEOTileKey>, true>, std::__1::allocator<std::__1::__hash_value_type<_GEOTileKey, UsageData> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::hash<GEOTileKey>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::equal_to<GEOTileKey>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _usageData;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { 
        struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { 
            struct DispatchTimer {} *__first_; 
        } __ptr_; 
    } _usageTimer;
    bool_isUsageTimerScheduled;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo> > { 
        struct __split_buffer<ErrorInfo *, std::__1::allocator<ErrorInfo *> > { 
            struct ErrorInfo {} **__first_; 
            struct ErrorInfo {} **__begin_; 
            struct ErrorInfo {} **__end_; 
            struct __compressed_pair<ErrorInfo **, std::__1::allocator<ErrorInfo *> > { 
                struct ErrorInfo {} **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<ErrorInfo> > { 
            unsigned long long __first_; 
        } __size_; 
    } _recentErrors;
}


- (bool)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)registerTileLoader:(Class)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 fromOfflinePack:(id)arg3;
- (void)_activeTileGroupChanged:(id)arg1;
- (void)_timerFired;
- (void)_usageTimerFired;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3 info:(id)arg4;
- (id)_findInCache:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 info:(id)arg3;
- (void)_requestOnlineTiles;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(id)arg7 callback:(id)arg8;
- (void)_updateNetworkActive;
- (bool)_cancelIfNeeded:(struct __list_iterator<LoadItem, void *> { struct __list_node<LoadItem, void *> {} *x1; }*)arg1;
- (void)_cancel:(struct __list_iterator<LoadItem, void *> { struct __list_node<LoadItem, void *> {} *x1; }*)arg1 err:(id)arg2;
- (void)_localeChanged:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id)arg3;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(id)arg2;
- (int)networkHits;
- (int)diskHits;
- (int)memoryHits;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)expireTilesWithPredicate:(id)arg1;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(bool)arg3;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(id)arg6 callback:(id)arg7;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)clearAllCaches;
- (id)proxy;

@end
