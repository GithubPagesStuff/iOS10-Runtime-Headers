/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface MPAudioDeviceController : NSObject  {
    NSString *_category;
    id _delegate;
    bool_determiningPickableRoutes;
    bool_fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSDictionary *_pickedRoute;
    bool_pickedRouteHasVolumeControl;
    bool_pickedRouteHasVolumeControlIsValid;
    NSMutableArray *_pickableRoutesCompletionHandlers;
    bool_scheduledSendAudioRoutesDidChange;
}

@property id delegate;
@property bool routeDiscoveryEnabled;

+ (void)restoreRouteDiscoveryMode;
+ (void)pushRouteDiscoveryMode:(long long)arg1;
+ (void)setRouteDiscoveryEnabled:(bool)arg1;
+ (bool)routeDiscoveryEnabled;
+ (void)_internalSetSystemRouteDiscoveryMode:(long long)arg1;
+ (long long)routeDiscoveryMode;
+ (void)_internalPushRouteDiscoveryMode:(long long)arg1;
+ (id)_routeDiscoveryModeStack;
+ (void)setRouteDiscoveryMode:(long long)arg1;

- (void)_sendFakeRouteChange;
- (bool)isPickedRouteDistinctFromRoute:(id)arg1;
- (bool)wirelessRouteIsPicked;
- (id)nameOfPickedRoute;
- (void)restorePickedRoute;
- (bool)pickRouteAtIndex:(unsigned long long)arg1;
- (long long)indexOfRouteWithName:(id)arg1;
- (id)routeTypeAtIndex:(unsigned long long)arg1;
- (bool)routeRequiresPasswordAtIndex:(unsigned long long)arg1;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (bool)routeOtherThanHandsetAndSpeakerIsAvailable;
- (bool)routeOtherThanHandsetIsAvailable;
- (unsigned long long)numberOfAudioRoutes;
- (void)_routeDiscoveryDidEndNotification:(id)arg1;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (void)determinePickableRoutesWithCompletionHandler:(id)arg1;
- (void)_scheduleSendDelegateAudioRoutesChanged;
- (id)pickedRouteDescription;
- (bool)_routeIsWireless:(id)arg1;
- (bool)_routeIsReceiver:(id)arg1;
- (id)routeNameAtIndex:(unsigned long long)arg1 isPicked:(bool*)arg2;
- (long long)indexOfPickedRoute;
- (bool)_routeIsHeadphones:(id)arg1;
- (bool)pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;
- (void)setRouteDiscoveryEnabled:(bool)arg1;
- (bool)routeDiscoveryEnabled;
- (bool)_routeIsDisplayPort:(id)arg1;
- (bool)_routeIsSpeaker:(id)arg1;
- (bool)_routeIsHandset:(id)arg1;
- (id)_pickableRoutes;
- (void)logCurrentRoutes;
- (bool)receiverRouteIsPicked;
- (bool)handsetRouteIsPicked;
- (bool)speakerRouteIsPicked;
- (bool)pickSpeakerRoute;
- (bool)pickHandsetRoute;
- (void)_mediaServerDiedNotification:(id)arg1;
- (bool)pickRoute:(id)arg1;
- (bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (bool)airtunesRouteIsPicked;
- (void)clearCachedRoutes;
- (id)_pickedRoute;
- (bool)volumeControlIsAvailable;
- (bool)pickBestDeviceRoute;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setCategory:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
