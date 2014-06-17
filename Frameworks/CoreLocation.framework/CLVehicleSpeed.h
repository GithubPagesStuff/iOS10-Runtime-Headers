/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate;

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property(readonly) double speed;
@property(readonly) NSDate * timestamp;

+ (bool)supportsSecureCoding;

- (id)initWithClientVehicleSpeed:(struct { double x1; double x2; })arg1;
- (id)timestamp;
- (double)speed;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)shortDescription;

@end
