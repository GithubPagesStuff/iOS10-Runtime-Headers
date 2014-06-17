/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class NSObject<OS_dispatch_queue>, NSSet, NSHashTable;

@interface CUTNetworkInterfaceListener : NSObject  {
    void *_dynamicStore;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _wifiState;
    int _cellState;
    NSSet *_IPv6Addresses;
    NSSet *_IPv4Addresses;
}

@property(readonly) int wifiState;
@property(readonly) int cellState;
@property(retain,readonly) NSSet * IPv6Addresses;
@property(retain,readonly) NSSet * IPv4Addresses;

+ (id)sharedInstance;

- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (int)cellState;
- (int)wifiState;
- (void)_handleNetworkChange:(id)arg1;
- (void)_notifyDelegatesOfWifiChange:(int)arg1;
- (void)_notifyDelegatesOfCellChange:(int)arg1;
- (void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(bool)arg2;
- (id)init;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
