/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration  {
    struct opaqueCMFormatDescription { } *_formatDescription;
    struct OpaqueCMClock { } *_clock;
}

@property(retain) struct opaqueCMFormatDescription { }* formatDescription;
@property(retain) struct OpaqueCMClock { }* clock;


- (void)setClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
