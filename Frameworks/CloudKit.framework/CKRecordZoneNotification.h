/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {
    CKRecordZoneID *_recordZoneID;
}

@property(copy) CKRecordZoneID * recordZoneID;

+ (bool)supportsSecureCoding;

- (id)recordZoneID;
- (void)setRecordZoneID:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
