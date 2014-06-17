/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {
    NSString *_streamID;
    NSString *_ctag;
}

@property(retain) NSString * streamID;
@property(retain) NSString * ctag;

+ (id)subscribedStreamWithStreamID:(id)arg1;

- (void)setStreamID:(id)arg1;
- (id)initWithStreamID:(id)arg1;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (id)streamID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
