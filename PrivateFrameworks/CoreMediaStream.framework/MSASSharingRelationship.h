/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying> {
    bool_isMine;
    int _state;
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSArray *_phones;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    NSDate *_subscriptionDate;
}

@property(retain) NSString * GUID;
@property(retain) NSString * albumGUID;
@property(retain) NSString * email;
@property(retain) NSArray * emails;
@property(retain) NSArray * phones;
@property(retain) NSString * fullName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * personID;
@property(retain) NSDate * subscriptionDate;
@property int state;
@property bool isMine;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)isEqualToSharingRelationship:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setIsMine:(bool)arg1;
- (bool)isMine;
- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setSubscriptionDate:(id)arg1;
- (id)subscriptionDate;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)phones;
- (void)setEmails:(id)arg1;
- (id)personID;
- (void)setEmail:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)fullName;
- (id)_fullName;
- (id)email;
- (id)GUID;
- (id)emails;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setState:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
