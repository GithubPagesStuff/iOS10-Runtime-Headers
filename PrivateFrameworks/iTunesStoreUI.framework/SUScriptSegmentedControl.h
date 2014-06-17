/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, SUSegmentedControl, NSNumber, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject  {
    NSArray *_segments;
    long long _style;
}

@property(retain) SUSegmentedControl * nativeSegmentedControl;
@property(readonly) long long nativeSelectedIndex;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * moreListTitle;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property(retain) id segments;
@property(retain) NSNumber * selectedIndex;
@property(readonly) NSNumber * selectedSegmentIndex;
@property(copy) id showsMoreListAutomatically;
@property(retain) NSString * style;
@property(copy) id tintColor;
@property long long tintStyle;
@property(readonly) unsigned long long controlStateDisabled;
@property(readonly) unsigned long long controlStateHighlighted;
@property(readonly) unsigned long long controlStateNormal;
@property(readonly) unsigned long long controlStateSelected;
@property(readonly) NSNumber * noSegmentIndex;
@property(readonly) long long tintStyleDark;
@property(readonly) long long tintStyleDefault;
@property(readonly) SUSegmentedControl * activeSegmentedControl;
@property(readonly) NSArray * rawSegments;
@property(readonly) SUStorePageViewController * storePageViewController;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)rawSegments;
- (long long)tintStyleDefault;
- (long long)tintStyleDark;
- (id)noSegmentIndex;
- (unsigned long long)controlStateSelected;
- (unsigned long long)controlStateNormal;
- (unsigned long long)controlStateHighlighted;
- (unsigned long long)controlStateDisabled;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(bool)arg3;
- (void)showMoreListAnimated:(bool)arg1;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)hideMoreListAnimated:(bool)arg1;
- (id)showsMoreListAutomatically;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)setShowsMoreListAutomatically:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (void)_setRawSegments:(id)arg1;
- (long long)maximumNumberOfItems;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)_newNativeSegmentedControl;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)setNativeSegmentedControl:(id)arg1;
- (id)cancelButtonTitle;
- (long long)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)nativeSegmentedControl;
- (id)initWithPageSectionGroup:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (long long)tintStyle;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (id)storePageViewController;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setSegments:(id)arg1;
- (id)segments;
- (id)attributeKeys;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)selectedSegmentIndex;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
