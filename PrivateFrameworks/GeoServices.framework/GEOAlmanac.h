/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject  {
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}

@property(readonly) bool isDayLight;
@property(readonly) NSDate * previousSunrise;
@property(readonly) NSDate * previousSunset;
@property(readonly) NSDate * sunrise;
@property(readonly) NSDate * sunset;
@property(readonly) NSDate * nextSunrise;
@property(readonly) NSDate * nextSunset;


- (void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3;
- (bool)isDayLightForTime:(double)arg1;
- (bool)isDayLight;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1;
- (id)previousSunset;
- (id)previousSunrise;
- (id)sortedTimesForDate:(id)arg1;
- (bool)isDayLightForDate:(id)arg1;
- (id)nextSunset;
- (id)nextSunrise;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 altitudeInDegrees:(double)arg2;
- (id)sunset;
- (id)sunrise;
- (void)dealloc;

@end
