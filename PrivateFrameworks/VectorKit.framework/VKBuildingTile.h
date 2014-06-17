/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VK3DObjectSubTile, NSMutableArray, VKAnimation;

@interface VKBuildingTile : VKVectorTile  {
    struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { 
        struct shared_ptr<ggl::Texture2D> {} *__begin_; 
        struct shared_ptr<ggl::Texture2D> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::Texture2D> *, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { 
            struct shared_ptr<ggl::Texture2D> {} *__first_; 
        } __end_cap_; 
    } _facadeTextures;
    NSMutableArray *_polygonGroups[3];
    VK3DObjectSubTile *_objectSubTile;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { 
        struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { 
            struct Texture2D {} *__first_; 
        } __ptr_; 
    } _shadowTexture;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _shadowModelMatrix;
    struct shared_ptr<ggl::Tile::ViewUniformData> { 
        struct ViewUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _shadowViewUniformData;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    double _maxHeight;
    struct CullingGridWithHeight { 
        float _heights[16]; 
    } _cullingGrid;
    VKAnimation *_animation;
    VKAnimation *_animationForPitch;
}

@property(readonly) VK3DObjectSubTile * objectSubTile;
@property(readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; boolx12; boolx13; boolx14; unsigned int x15; unsigned int x16; int x17; int x18; }* shadowTexture;
@property(readonly) struct shared_ptr<ggl::Tile::ViewUniformData> { struct ViewUniformData {} *x1; struct __shared_weak_count {} *x2; } shadowViewUniformData;
@property float alpha;
@property float scale;
@property(readonly) float minLayeringHeight;
@property(readonly) float maxLayeringHeight;
@property(readonly) double maxHeight;
@property(retain) VKAnimation * animation;
@property(retain) VKAnimation * animationForPitch;
@property(readonly) struct CullingGridWithHeight { float x1[16]; } cullingGrid;


- (void)_blurTexture:(char *)arg1;
- (void)_fillShadowAreasInContext:(struct CGContext { }*)arg1 data:(char *)arg2;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })_shadowBounds;
- (void)_buildShadowTexture;
- (void)buildMeshesWithTriangulator:(id)arg1 device:(struct Device { int (**x1)(); int x2; }*)arg2 prepareExtrusion:(bool)arg3;
- (id)objectSubTile;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(bool)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); int x2; }*)arg7;
- (void)setAnimationForPitch:(id)arg1;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; boolx12; boolx13; boolx14; unsigned int x15; unsigned int x16; int x17; int x18; }*)shadowTexture;
- (struct shared_ptr<ggl::Tile::ViewUniformData> { struct ViewUniformData {} *x1; struct __shared_weak_count {} *x2; })shadowViewUniformData;
- (const struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { struct shared_ptr<ggl::Texture2D> {} *x1; struct shared_ptr<ggl::Texture2D> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::Texture2D> *, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { struct shared_ptr<ggl::Texture2D> {} *x_3_1_1; } x3; }*)facadeTextures;
- (struct CullingGridWithHeight { float x1[16]; })cullingGrid;
- (id)polygonGroupsForTextureAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFacadeTextures;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (id)animationForPitch;
- (bool)heightAtPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 outZ:(float*)arg2;
- (void)updateWithStyleResolutionSession:(struct StyleResolutionSession { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; struct _retain_objc { } x_1_1_3; struct _release_objc { } x_1_1_4; } x1; struct unordered_map<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<md::StyleQuery> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::shared_ptr<md::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<md::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<md::StyleQuery> >, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; boolx3; long long x4; unsigned long long x5; }*)arg1;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (double)maxHeight;
- (void)setScale:(float)arg1;
- (void)setAnimation:(id)arg1;
- (id)animation;
- (float)alpha;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)scale;
- (void)setAlpha:(float)arg1;

@end
