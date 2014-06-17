/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject  {
    NSMutableDictionary *_savedRecords;
    long long _activityIndicatorViewStyle;
}

@property long long activityIndicatorViewStyle;

+ (id)sharedSpinnerManager;

- (void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(bool)arg4;
- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (long long)activityIndicatorViewStyle;

@end
