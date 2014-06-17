/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class PBRequest, GEOLocationShiftRequest, GEOPolyLocationShiftRequest;

@interface GEOLocationShiftFunctionRequest : NSObject  {
    unsigned short _providerID;
    GEOLocationShiftRequest *_locationShiftRequest;
    GEOPolyLocationShiftRequest *_polyLocationShiftRequest;
}

@property unsigned short providerID;
@property struct { double x1; double x2; } coordinate;
@property(readonly) PBRequest * shiftRequest;


- (unsigned short)providerID;
- (id)shiftRequest;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setProviderID:(unsigned short)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;

@end
