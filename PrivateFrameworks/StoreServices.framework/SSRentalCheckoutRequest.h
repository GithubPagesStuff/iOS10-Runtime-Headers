/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
    bool_shouldValidateRentalInfo;
}

@property(readonly) NSArray * sinfs;
@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) long long downloadIdentifier;
@property bool shouldValidateRentalInfo;


- (void)setShouldValidateRentalInfo:(bool)arg1;
- (bool)shouldValidateRentalInfo;
- (id)rentalKeyIdentifier;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithSinfs:(id)arg1;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)sinfs;
- (id)accountIdentifier;
- (id)init;
- (void)dealloc;

@end
