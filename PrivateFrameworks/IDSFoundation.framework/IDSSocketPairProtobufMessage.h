/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSString;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage  {
    unsigned long long _offset;
    unsigned short _isResponse;
    unsigned short _type;
    NSData *_data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    bool_expectsPeerResponse;
    bool_wantsAppAck;
    bool_compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property(readonly) unsigned short isResponse;
@property(readonly) unsigned short type;
@property(readonly) NSData * data;
@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(readonly) bool expectsPeerResponse;
@property(readonly) bool wantsAppAck;
@property bool compressed;
@property(retain,readonly) NSString * peerResponseIdentifier;
@property(retain,readonly) NSString * messageUUID;


- (bool)wantsAppAck;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(bool)arg3 wantsAppAck:(bool)arg4 compressed:(bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 protobuf:(id)arg8;
- (unsigned short)isResponse;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (void)setCompressed:(bool)arg1;
- (bool)compressed;
- (unsigned short)streamID;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (bool)expectsPeerResponse;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (id)data;
- (unsigned short)type;
- (void)dealloc;

@end
