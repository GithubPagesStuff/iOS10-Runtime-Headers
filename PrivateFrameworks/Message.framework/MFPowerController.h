/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSObject<OS_dispatch_queue>, NSCountedSet;

@interface MFPowerController : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    int _pluggedIn;
    int _powerToken;
    unsigned int _appState;
    NSCountedSet *_identifiers;
}

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;

- (id)copyDiagnosticInformation;
- (void)recordDuetEventForAccount:(id)arg1 event:(id)arg2;
- (void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)_retainAssertion_nts;
- (void)_setupAssertionTimer:(double)arg1;
- (void)_releaseAssertion_nts;
- (void)_applicationStateChanged:(id)arg1;
- (void)_initDuet;
- (bool)isPluggedIn;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (id)duetIdentifier;
- (id)init;
- (void)dealloc;

@end
