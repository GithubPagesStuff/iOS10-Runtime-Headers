/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort  {
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

@property(readonly) unsigned int machPort;

+ (id)port;
+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
+ (void)resetAllPorts;
+ (void)parseMachMessage:(void*)arg1 localPort:(id*)arg2 remotePort:(id*)arg3 msgid:(unsigned int*)arg4 components:(id*)arg5;
+ (bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
+ (id)portWithMachPort:(unsigned int)arg1;

- (id)init;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned long long)_cfTypeID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isValid;
- (unsigned int)machPort;
- (void)invalidate;
- (bool)isKindOfClass:(Class)arg1;
- (id)delegate;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (bool)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)handlePortMessage:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (id)initWithMachPort:(unsigned int)arg1;

@end
