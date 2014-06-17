/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSuggestionEntryList, NSArray, NSString;

@interface _GEOPlaceCompletionGroup : NSObject <GEOCompletionGroup> {
    GEOSuggestionEntryList *_entryList;
    NSArray *_items;
}

@property(readonly) NSArray * items;
@property(readonly) NSString * localizedSectionHeader;


- (id)localizedSectionHeader;
- (id)initWithCompletion:(id)arg1 query:(id)arg2 traits:(id)arg3;
- (id)initWithSuggestionEntryList:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 completion:(id)arg4 traits:(id)arg5;
- (id)items;
- (void)dealloc;
- (id)description;

@end
