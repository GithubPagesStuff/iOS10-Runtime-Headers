/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelLookupManager : NSObject  {
}

+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(id)arg2;
+ (void)geocodeAddress:(id)arg1 withCompletionBlock:(id)arg2;
+ (id)defaultManager;

- (void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(id)arg4;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(id)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(id)arg5;
- (void)findCoordinatesForLocation:(id)arg1 completionBlock:(id)arg2;
- (void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(id)arg5;

@end
