/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureDataInternal : NSObject  {
    struct { 
        float pressure; 
        float temperature; 
    } fPressure;
}


- (id)initWithPressure:(struct { float x1; float x2; })arg1;
- (void)setAmbientPressure:(struct { float x1; float x2; })arg1;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
