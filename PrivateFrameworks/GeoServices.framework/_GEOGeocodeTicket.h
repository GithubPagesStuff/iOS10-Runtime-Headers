/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchResponse, GEOMapServiceTraits, GEOMapRegion, GEOGeocodeRequest;

@interface _GEOGeocodeTicket : NSObject <GEOMapServiceTicket, _GEOLegacyMapServiceTicket> {
    GEOGeocodeRequest *_geocodeRequest;
    GEOPlaceSearchResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    bool_isForwardGeocode;
}

@property(retain) GEOPlaceSearchResponse * response;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;


- (id)resultBoundingRegion;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (id)initWithReverseGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)_initWithGeocodeRequest:(id)arg1 traits:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (id)traits;
- (id)request;
- (void)setResponse:(id)arg1;
- (id)response;
- (void)cancel;
- (void)dealloc;
- (id)description;

@end
