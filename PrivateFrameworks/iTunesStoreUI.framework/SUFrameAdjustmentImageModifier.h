/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUFrameAdjustmentImageModifier : SUImageModifier  {
    bool_shouldSizeDownToFit;
    unsigned long long _sizingMask;
}

@property bool shouldSizeDownToFit;
@property unsigned long long sizingMask;


- (void)setShouldSizeDownToFit:(bool)arg1;
- (bool)shouldSizeDownToFit;
- (void)setSizingMask:(unsigned long long)arg1;
- (unsigned long long)sizingMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)scalesImage;
- (bool)isEqual:(id)arg1;

@end
