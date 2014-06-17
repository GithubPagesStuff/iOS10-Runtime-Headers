/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification  {
    UIImage *_image;
    NSString *_uuid;
}

@property(retain,readonly) UIImage * image;
@property(retain,readonly) NSString * assetUUID;

+ (id)notification;

- (id)assetUUID;
- (id)image;
- (id)init;
- (id)object;
- (id)name;
- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)_init;

@end
