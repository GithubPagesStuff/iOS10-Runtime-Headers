/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSSet, NSMutableSet, <CBScalablePipeManagerDelegate>, CBXpcConnection, NSHashTable;

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate> {
    <CBScalablePipeManagerDelegate> *_delegate;
    CBXpcConnection *_connection;
    bool_connectionIsFinalized;
    long long _state;
    NSMutableSet *_identifiers;
    NSHashTable *_pipes;
}

@property(readonly) long long state;
@property(readonly) NSSet * identifiers;


- (void)unregisterAllEndpoints;
- (void)unregisterEndpoint:(id)arg1;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleDataAvailable:(id)arg1;
- (void)handlePipeDisconnected:(id)arg1;
- (void)handlePipeConnected:(id)arg1;
- (void)handleEndpointRemoved:(id)arg1;
- (void)handleEndpointAdded:(id)arg1;
- (id)pipeForName:(id)arg1 identifier:(id)arg2;
- (void)orphanPipes;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (bool)sendMsg:(int)arg1 args:(id)arg2;
- (bool)isMsgAllowedWhenOff:(int)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1;
- (long long)state;
- (void)dealloc;
- (oneway void)release;

@end
