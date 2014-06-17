/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMapTable;

@interface GEOGeocodeRequester : NSObject  {
    NSMapTable *_pendingGeocodes;
    NSMapTable *_pendingBatchGeocodes;
    NSLock *_pendingGeocodesLock;
}

+ (id)sharedGeocodeRequester;
+ (void)_countryProvidersDidChange:(id)arg1;

- (void)batchReverseGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)cancelBatchReverseGeocode:(id)arg1;
- (void)cancelGeocode:(id)arg1;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (id)init;
- (void)dealloc;

@end
