/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {
    NSData *_messageData;
    NSDictionary *_options;
    long long _format;
    NSString *_altText;
}

@property(copy) NSData * messageData;
@property(copy) NSDictionary * options;
@property(copy) NSString * altText;
@property long long format;
@property(readonly) bool isTall;

+ (bool)supportsSecureCoding;

- (bool)isTall;
- (id)initWithBarcodeDictionary:(id)arg1;
- (void)setAltText:(id)arg1;
- (void)setMessageData:(id)arg1;
- (id)altText;
- (void)setFormat:(long long)arg1;
- (long long)format;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)messageData;
- (id)_imageFromTextMessage;
- (id)_imageFromBarcodeMessage;
- (id)image;

@end
