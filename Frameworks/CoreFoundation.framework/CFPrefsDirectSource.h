/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class CFPDSource;

@interface CFPrefsDirectSource : CFPrefsPlistSource  {
    CFPDSource *_underlyingSource;
    bool_managed;
}


- (void*)copyReplyForDirectMessage:(id)arg1 error:(bool*)arg2;
- (void)setManaged:(bool)arg1;
- (void)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)managed;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (unsigned char)alreadylocked_requestNewData;
- (void)dealloc;

@end
