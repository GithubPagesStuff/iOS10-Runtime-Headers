/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable, GEOPhoneNumberMUIDMapper, NSMutableSet, GEOPlaceDataCache, NSLock;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    GEOPlaceDataCache *_cache;
    GEOPhoneNumberMUIDMapper *_phoneNumberMapper;
    NSMutableSet *_requestsInProgress;
}


- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id)arg3 networkActivity:(id)arg4 error:(id)arg5;
- (void)cancelRequest:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 traits:(id)arg2 networkActivity:(id)arg3 requesterHandler:(id)arg4;
- (void)requestMUIDs:(id)arg1 traits:(id)arg2 networkActivity:(id)arg3 requesterHandler:(id)arg4;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 traits:(id)arg2 requesterHandler:(id)arg3;
- (void)requestMUIDs:(id)arg1 traits:(id)arg2 requesterHandler:(id)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (id)init;
- (void)dealloc;

@end
