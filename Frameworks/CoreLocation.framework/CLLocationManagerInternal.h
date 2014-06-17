/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>, NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject  {
    struct __CLClient { } *fClient;
    <CLLocationManagerDelegate> *fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    boolfUpdatingLocation;
    struct { 
        int padding1; 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double padding2; 
        double padding3; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
    } fLocation;
    NSString *fLocationEventType;
    boolfCapabilitiesValid;
    struct { 
        double bestAccuracy; 
    } fCapabilities;
    boolfUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    boolfPersistentMonitoringEnabled;
    boolfAllowsLocationPrompts;
    boolfPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
    long long fActivityType;
    int fPausesLocationUpdatesAutomatically;
    boolfPaused;
    boolfAllowsMapCorrection;
    boolfBatchingLocation;
    boolfUpdatingVehicleSpeed;
    boolfUpdatingVehicleHeading;
    boolfMatchInfoEnabled;
    boolfCourtesyPromptNeeded;
    NSMutableSet *fRangedRegions;
}

@property(readonly) NSMutableSet * rangedRegions;


- (id)rangedRegions;
- (void)performCourtesyPromptIfNeeded;
- (void)stopUpdatingLocationAutoPaused;
- (int)PausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;
- (void)dealloc;

@end
