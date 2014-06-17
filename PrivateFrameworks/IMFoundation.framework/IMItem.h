/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSDictionary, NSDate;

@interface IMItem : NSObject <NSCoding, NSCopying, IMRemoteObjectCoding> {
    NSString *_handle;
    NSString *_service;
    NSString *_account;
    NSString *_unformattedID;
    NSString *_accountID;
    NSString *_roomName;
    NSDictionary *_senderInfo;
    NSString *_guid;
    NSDate *_time;
    NSString *_countryCode;
    long long _messageID;
    id _context;
    long long _type;
}

@property long long type;
@property(retain) NSString * guid;
@property long long messageID;
@property(retain) NSString * account;
@property(retain) NSString * roomName;
@property(retain) NSString * service;
@property(retain) NSString * accountID;
@property(retain) NSDate * time;
@property(retain) NSString * handle;
@property(retain) NSString * unformattedID;
@property(retain) NSString * countryCode;
@property(retain) NSString * sender;
@property(retain) NSDictionary * senderInfo;
@property(retain) id context;
@property(readonly) bool isFromMe;

+ (Class)classForIMItemType:(long long)arg1;

- (id)context;
- (void)setContext:(id)arg1;
- (id)account;
- (void)setMessageID:(long long)arg1;
- (void)setTime:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setAccountID:(id)arg1;
- (id)accountID;
- (void)setGuid:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)guid;
- (long long)messageID;
- (id)roomName;
- (id)countryCode;
- (id)unformattedID;
- (id)senderInfo;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;
- (id)time;
- (bool)isFromMe;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)copyDictionaryRepresentation;
- (void)setSender:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setHandle:(id)arg1;
- (id)handle;
- (id)service;
- (void)setService:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)sender;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (id)_senderHandle;
- (id)_otherHandle;
- (id)message;
- (id)_serviceHandle;
- (bool)_hasMessageChatItem;
- (id)_newChatItems;
- (id)_service;

@end
