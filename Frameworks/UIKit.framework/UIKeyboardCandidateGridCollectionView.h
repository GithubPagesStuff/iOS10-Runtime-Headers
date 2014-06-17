/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateGridCollectionViewController, UITableViewIndex, NSArray, UIView;

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView  {
    double _indexMaximumHeight;
    UIKeyboardCandidateGridCollectionViewController *_parentViewController;
    double _previousGroupBarStartingY;
    UITableViewIndex *_index;
    UIView *_headerView;
}

@property UIKeyboardCandidateGridCollectionViewController * parentViewController;
@property(retain) UIView * headerView;
@property double previousGroupBarStartingY;
@property(retain) NSArray * indexTitles;
@property(readonly) UITableViewIndex * index;


- (id)index;
- (id)parentViewController;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexTitles:(id)arg1;
- (id)indexTitles;
- (void)dealloc;
- (bool)isCellVisible:(id)arg1;
- (void)delayUpdateIndex;
- (void)showIndex:(bool)arg1;
- (double)previousGroupBarStartingY;
- (void)updateIndex;
- (void)updateIndex:(bool)arg1;
- (bool)shouldShowIndex;
- (void)setPreviousGroupBarStartingY:(double)arg1;
- (double)groupBarStartingY;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)scrollToBottomWithAnimation:(bool)arg1;
- (void)scrollToTopWithAnimation:(bool)arg1;
- (void)scrollToOffsetFromTop:(double)arg1 withAnimation:(bool)arg2;
- (id)headerView;
- (void)setParentViewController:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
