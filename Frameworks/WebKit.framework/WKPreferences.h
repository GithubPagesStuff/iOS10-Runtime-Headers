/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString;

@interface WKPreferences : NSObject  {
    struct RefPtr<WebKit::WebPreferences> { 
        struct WebPreferences {} *m_ptr; 
    } _preferences;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _userDefaultsKeyPrefix;
}

@property(setter=_setTelephoneNumberDetectionIsEnabled:) bool _telephoneNumberDetectionIsEnabled;
@property(readonly) NSString * userDefaultsKeyPrefix;
@property double minimumFontSize;
@property(getter=isJavaScriptEnabled) bool javaScriptEnabled;
@property bool javaScriptCanOpenWindowsAutomatically;
@property bool suppressesIncrementalRendering;
@property bool allowsInlineMediaPlayback;
@property bool mediaPlaybackRequiresUserAction;
@property bool mediaPlaybackAllowsAirPlay;


- (void)_setTelephoneNumberDetectionIsEnabled:(bool)arg1;
- (bool)_telephoneNumberDetectionIsEnabled;
- (id)userDefaultsKeyPrefix;
- (id)initWithUserDefaultsKeyPrefix:(id)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)suppressesIncrementalRendering;
- (bool)javaScriptCanOpenWindowsAutomatically;
- (bool)isJavaScriptEnabled;
- (double)minimumFontSize;
- (void)setJavaScriptCanOpenWindowsAutomatically:(bool)arg1;
- (void)setJavaScriptEnabled:(bool)arg1;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (bool)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMinimumFontSize:(double)arg1;

@end
