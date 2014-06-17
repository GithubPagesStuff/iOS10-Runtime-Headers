/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIRedeemConfiguration, NSString, SKUIClientContext, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController  {
    bool_attempsAutomaticRedeem;
    BOOL _cameraRedeemEnabled;
    long long _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    NSOperationQueue *_operationQueue;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemConfiguration *_redeemConfiguration;
    SKUIRedeemStepViewController *_rootViewController;
}

@property(readonly) long long category;
@property bool attempsAutomaticRedeem;
@property(copy) NSString * initialCode;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;


- (void)setInitialCode:(id)arg1;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)setAttempsAutomaticRedeem:(bool)arg1;
- (void)redeemAgainAnimated:(bool)arg1;
- (void)_showRootViewController;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)_loadRootViewController;
- (id)_newRootViewController;
- (void)_finishPreflightWithResult:(id)arg1;
- (bool)attempsAutomaticRedeem;
- (id)initialCode;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)_cancelButtonAction:(id)arg1;
- (long long)category;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)viewWillAppear:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
