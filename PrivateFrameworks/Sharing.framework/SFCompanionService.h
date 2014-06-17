/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying> {
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_serviceType;
    NSString *_managerID;
    NSString *_ipAddress;
    NSString *_identifier;
    NSNumber *_nsxpcVersion;
}

@property(copy) NSString * deviceName;
@property(copy) NSString * deviceID;
@property(copy) NSString * serviceType;
@property(copy) NSString * managerID;
@property(copy) NSString * ipAddress;
@property(copy) NSString * identifier;
@property(copy) NSNumber * nsxpcVersion;

+ (id)serviceFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setNsxpcVersion:(id)arg1;
- (id)nsxpcVersion;
- (bool)isEqualToService:(id)arg1;
- (id)ipAddress;
- (id)managerID;
- (void)setManagerID:(id)arg1;
- (id)captureWriteHandle:(id)arg1;
- (id)captureReadHandle:(id)arg1;
- (void)setIpAddress:(id)arg1;
- (void)serviceStreamsWithCompletionHandler:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (void)setIdentifier:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)identifier;
- (id)deviceName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
