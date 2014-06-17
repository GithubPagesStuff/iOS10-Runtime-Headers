/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_source>;

@interface VKTimer : NSObject  {
    NSObject<OS_dispatch_source> *_source;
    double _nextFireDate;
}

@property(readonly) double nextFireDate;


- (void)fireAfter:(double)arg1;
- (double)nextFireDate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)dealloc;

@end
