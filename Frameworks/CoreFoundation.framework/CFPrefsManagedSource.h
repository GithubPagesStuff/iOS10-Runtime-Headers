/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsManagedSource : CFPrefsPlistSource  {
}

+ (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 perform:(id)arg3;

- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3;
- (void)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)managed;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;

@end
