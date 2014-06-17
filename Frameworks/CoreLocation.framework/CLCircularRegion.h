/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion  {
}

@property(readonly) struct { double x1; double x2; } center;
@property(readonly) double radius;

+ (bool)supportsSecureCoding;

- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (double)radius;
- (struct { double x1; double x2; })center;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
