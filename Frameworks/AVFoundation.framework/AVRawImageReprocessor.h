/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVRawImageReprocessorInternal;

@interface AVRawImageReprocessor : NSObject  {
    AVRawImageReprocessorInternal *_internal;
}

+ (void)initialize;

- (void)handlePhotoReady:(id)arg1;
- (void)reprocessRawImageSurface:(void*)arg1 andMetadata:(id)arg2 withOutputSettings:(id)arg3 completionHandler:(id)arg4;
- (id)init;
- (void)dealloc;

@end
