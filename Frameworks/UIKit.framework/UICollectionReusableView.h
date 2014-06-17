/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView  {
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSString *_reuseIdentifier;
    UICollectionView *_collectionView;
    long long _updateAnimationCount;
    struct { 
        unsigned int wasDequeued : 1; 
    } _reusableViewFlags;
}

@property(copy) NSString * reuseIdentifier;
@property(getter=_layoutAttributes,setter=_setLayoutAttributes:,copy) UICollectionViewLayoutAttributes * layoutAttributes;
@property(getter=_collectionView,setter=_setCollectionView:) UICollectionView * collectionView;
@property(getter=_isInUpdateAnimation,readonly) bool inUpdateAnimation;


- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setReuseIdentifier:(id)arg1;
- (void)_clearUpdateAnimation;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_addUpdateAnimation;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_markAsDequeued;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (bool)_wasDequeued;
- (id)_layoutAttributes;
- (bool)_isInUpdateAnimation;
- (void)_setCollectionView:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (bool)_disableRasterizeInAnimations;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (id)_collectionView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;

@end
