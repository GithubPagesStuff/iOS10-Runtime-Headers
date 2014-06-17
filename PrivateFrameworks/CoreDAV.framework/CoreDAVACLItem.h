/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem  {
    NSMutableSet *_accessControlEntities;
}

@property(retain) NSMutableSet * accessControlEntities;

+ (id)copyParseRules;

- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)arg1;
- (void)setAccessControlEntities:(id)arg1;
- (void)addACE:(id)arg1;
- (id)accessControlEntities;
- (id)init;
- (void)dealloc;
- (id)description;

@end
