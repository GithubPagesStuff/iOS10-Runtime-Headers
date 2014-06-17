/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {
    NSString *_statusText;
    NSArray *_imageData;
    NSArray *_imageAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_inReplyToStatusID;
}

@property(retain) NSString * statusText;
@property(retain) NSArray * imageData;
@property(retain) NSArray * imageAssetURLs;
@property(retain) NSString * maskedApplicationID;
@property(retain) NSString * inReplyToStatusID;

+ (bool)supportsSecureCoding;

- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(id)arg2;
- (void)setInReplyToStatusID:(id)arg1;
- (void)setStatusText:(id)arg1;
- (id)inReplyToStatusID;
- (id)statusText;
- (id)maskedApplicationID;
- (id)imageAssetURLs;
- (void)setMaskedApplicationID:(id)arg1;
- (void)setImageAssetURLs:(id)arg1;
- (void)setImageData:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
