/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOMapServiceTraits, GEOPlaceResult, NSData, NSArray, <GEOMapItem>;

@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint> {
    GEOPlaceResult *_placeResult;
    NSString *_query;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) NSArray * displayLines;
@property(readonly) <GEOMapItem> * geoMapItem;


- (void)applyToLegacySearch:(id)arg1;
- (void)sendFeedback;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)completionLocation;
- (id)geoMapItem;
- (id)queryLine;
- (id)calloutTitle;
- (id)displayLines;
- (id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3 traits:(id)arg4;
- (id)suggestionsOptions;
- (id)query;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
