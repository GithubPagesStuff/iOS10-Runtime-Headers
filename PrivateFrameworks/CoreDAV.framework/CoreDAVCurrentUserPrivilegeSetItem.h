/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem  {
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet * privileges;

+ (id)copyParseRules;

- (bool)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addPrivilege:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (id)privileges;
- (id)init;
- (void)dealloc;
- (id)description;

@end
