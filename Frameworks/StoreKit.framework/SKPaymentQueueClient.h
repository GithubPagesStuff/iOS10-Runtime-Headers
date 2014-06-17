/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
    bool_allowsBootstrapCellularData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    bool_hidesConfirmationDialogs;
    bool_ignoresInAppPurchaseRestriction;
    NSString *_receiptDirectoryPath;
    bool_requiresAuthenticationForPayment;
    NSNumber *_storeExternalVersion;
    NSNumber *_storeItemIdentifier;
    NSString *_vendorIdentifier;
}

@property bool allowsBootstrapCellularData;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleVersion;
@property bool hidesConfirmationDialogs;
@property bool ignoresInAppPurchaseRestriction;
@property(copy) NSString * receiptDirectoryPath;
@property bool requiresAuthenticationForPayment;
@property(copy) NSNumber * storeExternalVersion;
@property(copy) NSNumber * storeItemIdentifier;
@property(copy) NSString * vendorIdentifier;


- (id)vendorIdentifier;
- (id)storeExternalVersion;
- (bool)requiresAuthenticationForPayment;
- (id)receiptDirectoryPath;
- (bool)ignoresInAppPurchaseRestriction;
- (bool)hidesConfirmationDialogs;
- (void)setVendorIdentifier:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setRequiresAuthenticationForPayment:(bool)arg1;
- (void)setReceiptDirectoryPath:(id)arg1;
- (void)setIgnoresInAppPurchaseRestriction:(bool)arg1;
- (void)setHidesConfirmationDialogs:(bool)arg1;
- (id)storeItemIdentifier;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (bool)allowsBootstrapCellularData;
- (void)setBundleIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
