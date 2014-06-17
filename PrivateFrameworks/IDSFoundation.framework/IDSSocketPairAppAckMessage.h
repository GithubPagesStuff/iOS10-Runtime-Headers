/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage  {
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(retain,readonly) NSString * peerResponseIdentifier;


- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)peerResponseIdentifier;
- (unsigned short)streamID;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (void)dealloc;

@end
