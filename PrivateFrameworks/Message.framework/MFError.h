/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary;

@interface MFError : NSError  {
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithException:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;

- (void)useGenericDescription:(id)arg1;
- (id)mf_moreInfo;
- (void)setMoreInfo:(id)arg1;
- (id)mf_shortDescription;
- (void)setShortDescription:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfo;
- (id)localizedDescription;
- (void)dealloc;
- (void)setLocalizedDescription:(id)arg1;
- (id)recoveryAttempter;

@end
