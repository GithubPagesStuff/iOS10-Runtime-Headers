/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UILabel, NSArray, PSSpecifier;

@interface PSLargeTextController : PSListController  {
    UILabel *_bodyExampleLabel;
    UILabel *_headlineExampleLabel;
    long long _selectedCategoryIndex;
    NSArray *_contentSizeCategories;
    PSSpecifier *_sliderGroupSpecifier;
    bool_usesExtendedRange;
    bool_showsExtendedRangeSwitch;
}

@property bool showsExtendedRangeSwitch;


- (bool)showsExtendedRangeSwitch;
- (void)setShowsExtendedRangeSwitch:(bool)arg1;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;
- (id)usesExtendedRangeForSpecifier:(id)arg1;
- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
