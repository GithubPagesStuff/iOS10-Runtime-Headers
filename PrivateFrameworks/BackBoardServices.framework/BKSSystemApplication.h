/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSObject<OS_dispatch_queue>, BKSSystemApplicationClient, <BKSSystemApplicationDelegate>;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
    <BKSSystemApplicationDelegate> *_delegate;
}

@property <BKSSystemApplicationDelegate> * delegate;


- (bool)clientIsAliveForWatchdog:(id)arg1;
- (void)restart;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
