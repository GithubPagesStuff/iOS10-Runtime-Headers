/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AAAvailabilityResponse : AAResponse  {
    NSString *_status;
    NSString *_eta;
    NSString *_feature;
}

@property(readonly) NSString * status;
@property(readonly) NSString * eta;
@property(readonly) NSString * feature;


- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)feature;
- (id)eta;
- (id)status;
- (void).cxx_destruct;

@end
