/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUICountdown, NSString, SKUIEditorialComponent, SKUIArtwork, SKUILink;

@interface SKUIBrickItem : NSObject  {
    NSString *_accessibilityLabel;
    SKUIArtwork *_artwork;
    long long _brickIdentifier;
    SKUICountdown *_countdown;
    SKUIEditorialComponent *_editorial;
    SKUILink *_link;
}

@property(readonly) NSString * accessibilityLabel;
@property(readonly) SKUIArtwork * artwork;
@property(readonly) long long brickIdentifier;
@property(readonly) SKUICountdown * countdown;
@property(readonly) SKUIEditorialComponent * editorial;
@property(readonly) SKUILink * link;


- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;
- (long long)brickIdentifier;
- (id)initWithComponentContext:(id)arg1;
- (void)_setLinkItem:(id)arg1;
- (id)editorial;
- (id)initWithBannerRoomContext:(id)arg1;
- (id)countdown;
- (id)initWithCustomPageContext:(id)arg1;
- (id)artwork;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (id)link;

@end
