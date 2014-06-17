/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface HSFairPlayInfo : NSObject  {
    NSObject<OS_dispatch_queue> *_sapQueue;
    void *_hwInfo;
}

@property(readonly) NSString * deviceGUID;


- (id)_hexStringForData:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
- (void)endSecuritySession;
- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(bool*)arg3;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
- (id)deviceGUID;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
