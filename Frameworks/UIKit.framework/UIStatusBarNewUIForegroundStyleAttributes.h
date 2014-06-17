/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes  {
    NSString *_uniqueIdentifier;
    bool_isTintColorBlack;
    bool_hasBusyBackground;
    UIColor *_tintColor;
}

@property(retain,readonly) UIColor * tintColor;


- (id)uniqueIdentifier;
- (void)dealloc;
- (id)proportionalFontForFont:(id)arg1;
- (bool)_shouldUseBoldFontForStyle:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBluetoothBatteryInsides;
- (id)_batteryColorForCapacity:(double)arg1 lowCapacity:(double)arg2 charging:(bool)arg3;
- (double)_roundDimension:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBatteryInsides;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2;
- (id)makeTextFontForStyle:(long long)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (struct CGPoint { double x1; double x2; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)sizeForMoonMaskVisible:(bool)arg1;
- (long long)activityIndicatorStyleWithSyncActivity:(bool)arg1;
- (double)bluetoothBatteryExtraPadding;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(double)arg2;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (void)drawBatteryInsidesWithSize:(struct CGSize { double x1; double x2; })arg1 capacity:(double)arg2 charging:(bool)arg3;
- (double)batteryAccessoryMargin;
- (id)batteryImageNameWithCapacity:(double)arg1;
- (id)textForNetworkType:(int)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (double)edgePadding;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(bool)arg4;
- (id)textColorForStyle:(long long)arg1;
- (id)tintColor;

@end
