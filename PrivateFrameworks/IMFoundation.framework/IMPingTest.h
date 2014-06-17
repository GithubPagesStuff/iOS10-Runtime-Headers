/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSObject<OS_dispatch_source>;

@interface IMPingTest : NSObject  {
    NSString *_address;
    bool_usesWifi;
    id _collector;
    bool_isRunning;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
    double _secondsToRun;
}

@property(readonly) double secondsToRun;


- (double)secondsToRun;
- (double)longTimeInterval;
- (id)pingStats:(double)arg1;
- (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(id)arg5;
- (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(id)arg6;
- (int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (id)pingStats;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (bool)writeResultsToFile:(id)arg1 error:(id*)arg2;
- (id)initWithAddress:(id)arg1 wifi:(bool)arg2;
- (void)dealloc;
- (void)stop;

@end
