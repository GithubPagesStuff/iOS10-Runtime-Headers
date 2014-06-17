/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSAccountController, NSSet;

@interface IDSAccountController : NSObject  {
    _IDSAccountController *_internal;
}

@property(retain,readonly) NSSet * accounts;


- (id)_initWithService:(id)arg1;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(id)arg3;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(id)arg6;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(id)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(id)arg4;
- (id)accountWithUniqueID:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)enabledAccounts;
- (id)_initWithService:(id)arg1 onIDSQueue:(bool)arg2;
- (id)initWithService:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (id)_internal;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addAccount:(id)arg1;
- (id)accounts;
- (void)removeDelegate:(id)arg1;
- (void)dealloc;
- (id)serviceName;

@end
