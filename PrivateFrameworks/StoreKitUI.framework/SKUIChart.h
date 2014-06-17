/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSURL, NSSet;

@interface SKUIChart : NSObject  {
    NSArray *_items;
    bool_newsstand;
    NSURL *_seeAllURL;
    bool_showsIndexNumbers;
    NSString *_title;
    NSSet *_unavailableItemIdentifiers;
}

@property(readonly) NSArray * items;
@property(readonly) NSURL * seeAllURL;
@property(readonly) bool showsIndexNumbers;
@property(readonly) NSString * title;
@property(getter=isNewsstand,readonly) bool newsstand;
@property(copy) NSSet * unavailableItemIdentifiers;


- (id)seeAllURL;
- (id)unavailableItemIdentifiers;
- (bool)isNewsstand;
- (bool)showsIndexNumbers;
- (id)initWithChartPageContext:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)items;
- (id)title;
- (void).cxx_destruct;
- (id)description;

@end
