/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKRWLock : NSObject  {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } _rwLock;
}


- (int)tryrdlock;
- (void)rdlock;
- (void)wrlock;
- (id)init;
- (void)unlock;
- (void)dealloc;

@end
