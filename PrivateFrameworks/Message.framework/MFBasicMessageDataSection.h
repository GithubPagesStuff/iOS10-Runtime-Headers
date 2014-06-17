/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    NSData *_data;
    bool_complete;
    bool_partial;
    NSString *_partName;
}

@property(getter=isPartial) bool partial;
@property(getter=isComplete) bool complete;
@property(retain) NSData * data;
@property(retain) NSString * partName;


- (void)setPartName:(id)arg1;
- (void)setPartial:(bool)arg1;
- (id)partName;
- (bool)isPartial;
- (bool)isComplete;
- (id)data;
- (void)dealloc;
- (void)setComplete:(bool)arg1;
- (void)setData:(id)arg1;

@end
