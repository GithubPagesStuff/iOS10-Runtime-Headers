/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADProperties;

@interface OADProperties : NSObject  {
    OADProperties *mParent;
    unsigned int mIsMerged : 1;
    unsigned int mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (void)flatten;
- (bool)isMergedPropertyForSelector:(SEL)arg1;
- (id)overrideForSelector:(SEL)arg1;
- (id)initWithDefaults;
- (void)setParent:(id)arg1 myRestrictedClass:(Class)arg2;
- (void)p_setParent:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setMergedWithParent:(bool)arg1;
- (void)setMerged:(bool)arg1;
- (bool)isMergedWithParent;
- (bool)isMerged;
- (void)setParent:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)parent;

@end
