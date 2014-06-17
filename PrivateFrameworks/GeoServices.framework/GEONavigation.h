/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, NSString, GEOLocation, GEONavigationDetails, NSObject<OS_xpc_object>, GEORouteMatch;

@interface GEONavigation : NSObject  {
    GEONavigationDetails *_details;
    NSObject<OS_xpc_object> *_connection;
}

@property(readonly) GEOComposedRoute * route;
@property(readonly) NSString * destinationName;
@property(readonly) GEOLocation * location;
@property(readonly) GEORouteMatch * routeMatch;
@property(readonly) double distanceToManeuverStart;
@property(readonly) double distanceToManeuverEnd;
@property(readonly) double distanceToRoute;
@property(readonly) double distanceRemainingOnRoute;
@property(readonly) double remainingTime;
@property(readonly) bool isNavigating;
@property(readonly) bool locationUnreliable;
@property int navigationTransportType;
@property int navigationState;
@property unsigned long long announcementStage;

+ (id)sharedInstance;

- (void)endNavigation;
- (void)startNavigationForTransportType:(int)arg1 state:(int)arg2;
- (void)setNavigationTransportType:(int)arg1;
- (bool)isNavigating;
- (void)clearRoute;
- (void)updatedETA:(id)arg1;
- (void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (unsigned long long)announcementStage;
- (int)navigationTransportType;
- (void)setNavigationState:(int)arg1;
- (bool)locationUnreliable;
- (int)navigationState;
- (double)remainingTime;
- (double)distanceRemainingOnRoute;
- (double)distanceToRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (id)routeMatch;
- (void)setRoute:(id)arg1 toDestinationName:(id)arg2;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(bool)arg4;
- (void)_sendMessage:(id)arg1 data:(id)arg2;
- (void)_createConnection;
- (id)destinationName;
- (void)_closeConnection;
- (id)route;
- (id)location;
- (void)dealloc;

@end
