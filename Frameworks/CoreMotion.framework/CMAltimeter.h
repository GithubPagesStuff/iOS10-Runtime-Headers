/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeter : NSObject  {
    id _internal;
}

+ (bool)isRelativeAltitudeAvailable;
+ (void)dummySelector:(id)arg1;
+ (void)initialize;

- (void)stopRelativeAltitudeUpdates;
- (void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)onFilteredPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)deallocPrivate;
- (id)initPrivate;
- (id)init;
- (void)dealloc;

@end
