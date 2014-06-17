/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush  {
    OITSUColor *m_colour;
    int m_style;
}

+ (id)hatchBrushWithColour:(id)arg1 :(int)arg2;
+ (id)patternNameForHatchStyle:(int)arg1;

- (id)initWithColour:(id)arg1 :(int)arg2;
- (void)fillPath:(id)arg1 :(id)arg2;
- (void)dealloc;

@end
