/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage  {
    NSData *_data;
}

@property(retain,readonly) NSData * data;


- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (unsigned char)command;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
