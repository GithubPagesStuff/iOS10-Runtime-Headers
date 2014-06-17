/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableArray;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {
    double _overrideContentHeight;
    double _overrideContentWidth;
    long long _pinnedBackdropViewStyle;
    NSMutableArray *_pinnedSectionInfos;
    long long _pinningStyle;
    bool_rendersWithPerspective;
    bool_showsBackdropWhilePinning;
}

@property double overrideContentHeight;
@property double overrideContentWidth;
@property bool showsBackdropWhilePinning;
@property long long pinningStyle;
@property bool rendersWithPerspective;

+ (Class)layoutAttributesClass;

- (bool)showsBackdropWhilePinning;
- (double)overrideContentWidth;
- (void)setOverrideContentHeight:(double)arg1;
- (double)overrideContentHeight;
- (long long)pinningStyle;
- (void)setShowsBackdropWhilePinning:(bool)arg1;
- (void)setOverrideContentWidth:(double)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (void)invalidateStorePageSections;
- (void)setPinningStyle:(long long)arg1;
- (bool)rendersWithPerspective;
- (id)init;
- (void).cxx_destruct;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;

@end
