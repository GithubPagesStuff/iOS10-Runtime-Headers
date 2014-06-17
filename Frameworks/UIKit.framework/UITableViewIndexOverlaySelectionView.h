/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout, UICollectionView;

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}


- (void)_setIndexColor:(id)arg1;
- (void)_doneTapped;
- (void)_cellTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)canBecomeFirstResponder;
- (void)_invalidateTable;
- (id)initWithTable:(id)arg1;
- (void)layoutSubviews;

@end
