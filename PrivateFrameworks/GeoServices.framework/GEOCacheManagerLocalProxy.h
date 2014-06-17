/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> *_queue;
}


- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id)arg2;
- (bool)_invalidationDataHasExpiredByVersion:(id)arg1;
- (long long)_invalidationDataHasExpired:(id)arg1;
- (id)init;
- (void)dealloc;

@end
