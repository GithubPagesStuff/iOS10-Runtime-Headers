/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFLock : NSObject <NSLocking> {
    int _cd_rc;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } *_owner;
    unsigned long long _count;
}

+ (void)initialize;

- (bool)tryLock;
- (id)init;
- (void)unlock;
- (void)lock;
- (void)finalize;
- (void)dealloc;

@end
