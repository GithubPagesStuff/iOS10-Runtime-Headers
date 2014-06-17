/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libextension.dylib
 */

@class NSUUID;

@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading> {
    NSUUID *_identifier;
    NSUUID *_extensionContextIdentifier;
}

@property(copy) NSUUID * identifier;
@property(copy) NSUUID * extensionContextIdentifier;

+ (bool)supportsSecureCoding;

- (id)extensionContextIdentifier;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithExtensionContextIdentifier:(id)arg1;
- (void)loadPreviewImageWithCompletionHandler:(id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
