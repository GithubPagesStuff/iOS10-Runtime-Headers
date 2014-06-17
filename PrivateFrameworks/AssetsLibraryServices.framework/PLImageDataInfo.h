/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSURL, NSString;

@interface PLImageDataInfo : NSObject  {
    bool_deliveredPlaceholder;
    bool_canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long deliveredFormat;
@property bool deliveredPlaceholder;
@property bool canDownloadFromCloud;
@property(retain) NSURL * URL;
@property(retain) NSString * sandboxExtensionToken;
@property(retain) NSString * UTI;
@property long long EXIFOrientation;


- (id)UTI;
- (void)setEXIFOrientation:(long long)arg1;
- (long long)EXIFOrientation;
- (void)setUTI:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setCanDownloadFromCloud:(bool)arg1;
- (bool)canDownloadFromCloud;
- (void)setDeliveredPlaceholder:(bool)arg1;
- (bool)deliveredPlaceholder;
- (void)setDeliveredFormat:(long long)arg1;
- (long long)deliveredFormat;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;

@end
