/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKCamera;

@interface VKMapSnapshot : NSObject  {
    struct CGImage { } *_image;
    unsigned long long _width;
    unsigned long long _height;
    double _scale;
    VKCamera *_camera;
}

@property(readonly) double scale;
@property(readonly) struct CGImage { }* image;


- (bool)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (id)_initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2 camera:(id)arg3;
- (struct { double x1; double x2; })coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (struct CGImage { }*)image;
- (void)dealloc;
- (id)description;
- (double)scale;

@end
