/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView  {
    WLEasyToHitCustomButton *_flipButton;
    WLEasyToHitCustomButton *_shareButton;
    UILabel *_logoLabel;
    bool_showsInfo;
    bool_showsShare;
}

@property bool showsShare;
@property bool showsInfo;


- (void)updateValidity;
- (void)setShowsShare:(bool)arg1;
- (void)setShowsInfo:(bool)arg1;
- (void)_shareButtonPressed;
- (bool)showsShare;
- (void)_flipButtonPressed;
- (bool)showsInfo;
- (void)prepareForFlip;
- (void)setClipsContent:(bool)arg1;
- (void)createHeaderContentViews;
- (id)_relevantBuckets;
- (bool)isFrontFace;
- (id)passFaceTemplate;
- (id)tallFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (void)createBodyContentViews;
- (id)shortFaceTemplate;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)layoutSubviews;

@end
