/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class SSAccount, ACAccount;

@interface AAUIMyPhotoRequest : AARequest  {
    ACAccount *_account;
    SSAccount *_iTunesAccount;
}

@property(setter=setiTunesAccount:,retain) SSAccount * iTunesAccount;

+ (Class)responseClass;

- (void)setiTunesAccount:(id)arg1;
- (id)iTunesAccount;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1;
- (void).cxx_destruct;

@end
