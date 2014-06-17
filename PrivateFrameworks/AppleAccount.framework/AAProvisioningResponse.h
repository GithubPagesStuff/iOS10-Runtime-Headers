/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSDictionary, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse  {
    NSDictionary *_icloud;
}

@property(readonly) NSArray * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(readonly) NSString * appleID;
@property(readonly) NSArray * appleIDAliases;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * primaryEmail;
@property(readonly) NSNumber * primaryEmailVerified;
@property(readonly) NSString * iCloudAuthToken;
@property(readonly) NSString * fmipAuthToken;


- (id)fmipAuthToken;
- (id)iCloudAuthToken;
- (id)primaryEmailVerified;
- (id)primaryEmail;
- (id)appleIDAliases;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)appleID;
- (id)lastName;
- (id)firstName;
- (id)provisionedDataclasses;
- (id)dataclassProperties;
- (id)initWithDictionary:(id)arg1;
- (void).cxx_destruct;

@end
