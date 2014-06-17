/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding> {
    NSString *_uploadID;
    long long _uploadType;
    unsigned long long _totalBytes;
    unsigned long long _transferredBytes;
}

@property(retain) NSString * uploadID;
@property long long uploadType;
@property unsigned long long totalBytes;
@property unsigned long long transferredBytes;

+ (bool)supportsSecureCoding;

- (void)setTransferredBytes:(unsigned long long)arg1;
- (unsigned long long)transferredBytes;
- (void)setUploadType:(long long)arg1;
- (long long)uploadType;
- (void)setUploadID:(id)arg1;
- (id)uploadID;
- (unsigned long long)totalBytes;
- (void)setTotalBytes:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
