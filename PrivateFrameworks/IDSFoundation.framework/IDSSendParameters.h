/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSDate, NSData, NSArray, NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface IDSSendParameters : NSObject <NSCopying> {
    NSMutableDictionary *_params;
}

@property(retain) NSDictionary * message;
@property(retain) NSData * data;
@property(retain) NSDictionary * protobuf;
@property(retain) NSArray * destinations;
@property(retain) NSString * accountUUID;
@property bool wantsAppAck;
@property bool encryptPayload;
@property double timeout;
@property bool highPriority;
@property bool localDelivery;
@property(retain) NSString * identifier;
@property bool bypassDuet;
@property bool expectsPeerResponse;
@property(retain) NSString * peerResponseIdentifier;
@property bool compressed;
@property(retain) NSString * fromID;
@property bool useDictAsTopLevel;
@property bool wantsResponse;
@property(retain) NSData * dataToEncrypt;
@property(retain) NSData * messageUUID;
@property(retain) NSNumber * command;
@property bool wantsDeliveryStatus;
@property(retain) NSDictionary * deliveryStatusContext;
@property(retain) NSArray * bulkedPayload;
@property(retain,readonly) NSDate * expirationDate;
@property(retain,readonly) NSDictionary * dictionaryRepresentation;


- (bool)wantsAppAck;
- (void)setProtobuf:(id)arg1;
- (id)destinations;
- (void)setAccountUUID:(id)arg1;
- (void)setBypassDuet:(bool)arg1;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setUseDictAsTopLevel:(bool)arg1;
- (void)setLocalDelivery:(bool)arg1;
- (void)setEncryptPayload:(bool)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setCommand:(id)arg1;
- (void)setFromID:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (bool)bypassDuet;
- (bool)localDelivery;
- (bool)highPriority;
- (void)setHighPriority:(bool)arg1;
- (bool)wantsResponse;
- (void)setWantsResponse:(bool)arg1;
- (bool)encryptPayload;
- (bool)useDictAsTopLevel;
- (id)bulkedPayload;
- (void)setBulkedPayload:(id)arg1;
- (id)dataToEncrypt;
- (id)accountUUID;
- (id)fromID;
- (id)protobuf;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (void)setCompressed:(bool)arg1;
- (bool)compressed;
- (bool)expectsPeerResponse;
- (void)setDeliveryStatusContext:(id)arg1;
- (id)deliveryStatusContext;
- (void)setWantsDeliveryStatus:(bool)arg1;
- (bool)wantsDeliveryStatus;
- (void)setDestinations:(id)arg1;
- (id)expirationDate;
- (id)command;
- (void)setMessage:(id)arg1;
- (id)message;
- (double)timeout;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimeout:(double)arg1;
- (id)dictionaryRepresentation;
- (void)setData:(id)arg1;

@end
