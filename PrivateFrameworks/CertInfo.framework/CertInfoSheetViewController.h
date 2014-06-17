/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSString, NSArray, NSDate, <CertInfoSheetViewControllerDelegate>;

@interface CertInfoSheetViewController : UIViewController  {
    NSString *_serviceName;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_trustPurpose;
    NSDate *_trustExpiration;
    NSArray *_trustProperties;
    <CertInfoSheetViewControllerDelegate> *_delegate;
}

@property(retain) NSString * serviceName;
@property(retain) NSString * trustTitle;
@property(retain) NSString * trustSubtitle;
@property(retain) NSString * trustPurpose;
@property(retain) NSDate * trustExpiration;
@property(retain) NSArray * trustProperties;
@property <CertInfoSheetViewControllerDelegate> * delegate;


- (void)setTrustExpiration:(id)arg1;
- (void)setTrustPurpose:(id)arg1;
- (void)_pushDetailsView;
- (id)trustExpiration;
- (id)trustPurpose;
- (void)setTrustSubtitle:(id)arg1;
- (id)trustSubtitle;
- (void)setTrustTitle:(id)arg1;
- (id)trustTitle;
- (void)_accept;
- (void)_dismissWithResult:(int)arg1;
- (void)setTrustProperties:(id)arg1;
- (void)_setupNavItem;
- (id)trustProperties;
- (void)setServiceName:(id)arg1;
- (void)_cancel;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)serviceName;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;

@end
