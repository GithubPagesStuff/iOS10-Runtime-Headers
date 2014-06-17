/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSUUID, NSNumber;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    long long _proximity;
    double _accuracy;
    long long _rssi;
}

@property(readonly) NSUUID * proximityUUID;
@property(readonly) NSNumber * major;
@property(readonly) NSNumber * minor;
@property(readonly) long long proximity;
@property(readonly) double accuracy;
@property(readonly) long long rssi;

+ (bool)supportsSecureCoding;

- (double)accuracy;
- (long long)rssi;
- (long long)proximity;
- (id)minor;
- (id)major;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;
- (id)proximityUUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
