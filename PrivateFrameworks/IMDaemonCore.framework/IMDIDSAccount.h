/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount  {
    IDSAccount *_idsAccount;
}

@property(retain,readonly) IDSAccount * idsAccount;


- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;
- (id)idsAccount;
- (id)accountDefaults;
- (void)writeAccountDefaults:(id)arg1;
- (void)dealloc;

@end
