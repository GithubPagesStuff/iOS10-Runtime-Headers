/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class _MFSocket, NSArray, NSMutableString, NSData, <MFSASLSecurityLayer>, NSString;

@interface MFConnection : NSObject  {
    <MFSASLSecurityLayer> *_securityLayer;
    _MFSocket *_socket;
    double _lastUsedTime;
    char *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    unsigned long long _desiredBufferLength;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_deflater;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_inflater;
    char *_zbuffer;
    NSData *_logData;
    unsigned int _dontLogReads;
    unsigned int _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
    unsigned int _compressionEnabled : 1;
}

@property bool isFetching;
@property(readonly) double lastUsedTime;
@property(readonly) NSArray * capabilities;
@property(readonly) NSArray * authenticationMechanisms;
@property(readonly) NSString * securityProtocol;
@property(readonly) bool isValid;
@property(readonly) bool hasBytesAvailable;
@property(readonly) bool isCellularConnection;
@property(readonly) bool loginDisabled;
@property(readonly) bool usesOpportunisticSockets;

+ (void)setLogActivityOnHosts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogAllSocketActivity:(bool)arg1;
+ (bool)logAllSocketActivity;
+ (void)setLogClasses:(id)arg1;
+ (id)logClasses;
+ (void)logBytes:(const char *)arg1 length:(int)arg2;
+ (void)readLoggingDefaults;
+ (bool)shouldTryFallbacksAfterError:(id)arg1;
+ (void)initialize;
+ (void)flushLog;

- (id)capabilities;
- (void)logReadChars:(const char *)arg1 length:(unsigned long long)arg2;
- (double)lastUsedTime;
- (void)setIsFetching:(bool)arg1;
- (void)enableReadLogging:(bool)arg1;
- (bool)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2;
- (bool)startTLSForAccount:(id)arg1;
- (bool)startCompression;
- (void)setDesiredReadBufferLength:(unsigned long long)arg1;
- (bool)connectUsingSettings:(id)arg1;
- (void)_setupNetworkLogging;
- (bool)usesOpportunisticSockets;
- (bool)isCellularConnection;
- (void)enableExcessiveKeepaliveDetection:(bool)arg1;
- (void)setAllowsFallbacks:(bool)arg1;
- (bool)loginDisabled;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (bool)connectUsingAccount:(id)arg1;
- (bool)readLineIntoData:(id)arg1;
- (bool)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)securityProtocol;
- (void)enableThroughputMonitoring:(bool)arg1;
- (bool)authenticateUsingAccount:(id)arg1;
- (bool)connectUsingFallbacksForAccount:(id)arg1;
- (bool)isFetching;
- (bool)writeData:(id)arg1;
- (bool)hasBytesAvailable;
- (bool)isValid;
- (void)dealloc;
- (id)description;
- (void)disconnect;

@end
