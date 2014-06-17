/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSData, <MFDAStreamingContentConsumer>;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {
    <MFDAStreamingContentConsumer> *_streamConsumer;
    bool_succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain) <MFDAStreamingContentConsumer> * streamConsumer;
@property(readonly) bool succeeded;
@property(retain) MFError * error;
@property(retain) NSData * data;


- (bool)wantsData;
- (id)streamingContentConsumer;
- (id)streamConsumer;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)setStreamConsumer:(id)arg1;
- (bool)succeeded;
- (id)data;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (void)setData:(id)arg1;

@end
