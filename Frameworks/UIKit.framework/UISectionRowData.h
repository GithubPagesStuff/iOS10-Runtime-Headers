/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewRowData, NSMutableIndexSet;

@interface UISectionRowData : NSObject <NSCopying> {
    bool_valid;
    double _headerHeight;
    double _maxHeaderTitleWidth;
    double _footerHeight;
    double _maxFooterTitleWidth;
    double _headerOffset;
    double _footerOffset;
    unsigned long long _numRows;
    unsigned long long _arrayLength;
    float *_rowHeights;
    NSMutableIndexSet *_forcedNegativeRows;
    double *_rowOffsets;
    double _sectionHeight;
    long long _headerAlignment;
    long long _footerAlignment;
    UITableViewRowData *_rowData;
    bool_sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
}


- (void)invalidate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)rowForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)sectionLocationForReorderedRow:(long long)arg1;
- (int)sectionLocationForRow:(long long)arg1;
- (void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4;
- (void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(bool)arg3;
- (void)setHeight:(double)arg1 forRow:(long long)arg2;
- (id)initWithRowData:(id)arg1;
- (long long)_rowForPoint:(struct CGPoint { double x1; double x2; })arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3;
- (double)offsetForRow:(long long)arg1;
- (void)addOffset:(double)arg1 fromRow:(long long)arg2;
- (void)deleteRowAtIndex:(long long)arg1;
- (double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3;
- (double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(bool)arg4 stripPaddingForAbuttingView:(bool)arg5 isTopHeader:(bool)arg6;
- (void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(bool)arg3;
- (void)invalidateSectionOffset;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(bool)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(bool)arg2;

@end
