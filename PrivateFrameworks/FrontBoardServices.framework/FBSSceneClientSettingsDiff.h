/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMutableSettings;

@interface FBSSceneClientSettingsDiff : NSObject <BSXPCCoding> {
    BSMutableSettings *_changes;
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)inspectOtherChangesWithBlock:(id)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)inspectChangesWithBlock:(id)arg1;
- (id)_initWithChanges:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
