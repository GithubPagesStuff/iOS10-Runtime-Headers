/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelTile : VKTile  {
    struct shared_ptr<vk::LabelTile> { 
        struct LabelTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _labelTile;
}

@property(readonly) struct shared_ptr<vk::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; } labelTile;


- (struct shared_ptr<vk::LabelTile> { struct LabelTile {} *x1; struct __shared_weak_count {} *x2; })labelTile;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 tileType:(unsigned char)arg3 labelManager:(const struct shared_ptr<vk::LabelManager> { }*)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;

@end
