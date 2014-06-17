/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPolyline, NSString, GEOStep, MKRouteStepPolyline;

@interface MKRouteStep : NSObject  {
    GEOStep *_geoStep;
    NSString *_instructions;
    unsigned long long _transportType;
    MKRouteStepPolyline *_polyline;
}

@property(readonly) NSString * instructions;
@property(readonly) NSString * notice;
@property(readonly) MKPolyline * polyline;
@property(readonly) double distance;
@property(readonly) unsigned long long transportType;
@property(getter=_geoStep,readonly) GEOStep * geoStep;


- (id)polyline;
- (id)_geoStep;
- (id)notice;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;
- (unsigned long long)transportType;
- (id)instructions;
- (double)distance;
- (void).cxx_destruct;

@end
