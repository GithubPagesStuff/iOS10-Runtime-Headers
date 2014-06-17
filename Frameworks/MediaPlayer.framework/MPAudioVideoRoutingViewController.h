/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationController, MPAudioVideoRoutingTableViewController, <MPAudioVideoRoutingViewControllerDelegate>;

@interface MPAudioVideoRoutingViewController : UIViewController  {
    UINavigationController *_navigationController;
    MPAudioVideoRoutingTableViewController *_tableViewController;
    <MPAudioVideoRoutingViewControllerDelegate> *_delegate;
}

@property <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (bool)hasWirelessDisplayRoutes;

- (void)_doneAction:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
