/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSLock, NSMutableDictionary, CBXpcConnection, NSMutableArray, <CBPeripheralManagerDelegate>, NSMapTable, CBPairingAgent;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    <CBPeripheralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
    } _delegateFlags;
    CBXpcConnection *_connection;
    bool_connectionIsFinalized;
    CBPairingAgent *_pairingAgent;
    long long _state;
    bool_isAdvertising;
    NSMapTable *_centrals;
    NSMutableArray *_services;
    NSMutableDictionary *_characteristicIDs;
    NSLock *_updateLock;
    bool_readyForUpdates;
    bool_waitingForReady;
}

@property <CBPeripheralManagerDelegate> * delegate;
@property long long state;
@property bool isAdvertising;
@property(readonly) CBPairingAgent * sharedPairingAgent;

+ (long long)authorizationStatus;

- (bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)startAdvertising:(id)arg1;
- (void)addService:(id)arg1;
- (void)removeAllServices;
- (void)stopAdvertising;
- (bool)isAdvertising;
- (void)removeService:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)handleCentralMsg:(int)arg1 args:(id)arg2;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)setIsAdvertising:(bool)arg1;
- (void)forEachCentral:(id)arg1;
- (id)centralWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)handleMTUChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)sharedPairingAgent;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (id)peerWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (bool)sendMsg:(int)arg1 args:(id)arg2;
- (bool)isMsgAllowedAlways:(int)arg1;
- (bool)isMsgAllowedWhenOff:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (oneway void)release;

@end
