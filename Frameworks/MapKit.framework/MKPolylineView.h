/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView  {
}

@property(readonly) MKPolyline * polyline;


- (id)polyline;
- (id)initWithPolyline:(id)arg1;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)createPath;

@end
