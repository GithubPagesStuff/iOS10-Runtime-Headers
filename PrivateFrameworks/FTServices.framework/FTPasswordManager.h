/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSMutableSet, ACAccountStore;

@interface FTPasswordManager : NSObject  {
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(bool)arg3 showForgetPassword:(bool)arg4 shouldRememberPassword:(bool)arg5;
+ (id)sharedInstance;

- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (void)setAuthTokenForUsername:(id)arg1 service:(id)arg2 authToken:(id)arg3 profileID:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(bool)arg4 completionBlock:(id)arg5;
- (void)fetchPasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(bool)arg4 completionBlock:(id)arg5;
- (void)setPasswordForUsername:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id)arg5;
- (void)requestAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (bool)supportsAuthTokenRequests;
- (id)init;
- (void)dealloc;

@end
