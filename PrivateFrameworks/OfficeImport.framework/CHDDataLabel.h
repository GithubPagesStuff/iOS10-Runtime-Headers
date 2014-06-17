/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources, OADGraphicProperties;

@interface CHDDataLabel : NSObject  {
    EDResources *mResources;
    unsigned long long mStringIndex;
    unsigned long long mContentFormatId;
    int mPosition;
    boolmShowLeaderLines;
    boolmShowCategoryName;
    boolmShowSeriesName;
    boolmShowPercent;
    boolmShowBubbleSize;
    boolmShowValue;
    boolmShowLegendKey;
    boolmIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;

- (void)setStringIndex:(unsigned long long)arg1;
- (unsigned long long)stringIndex;
- (bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (bool)isShowLegendKey;
- (void)setShowBubbleSize:(bool)arg1;
- (bool)isShowBubbleSize;
- (void)setShowPercent:(bool)arg1;
- (bool)isShowPercent;
- (void)setShowSeriesName:(bool)arg1;
- (bool)isShowSeriesName;
- (void)setShowCategoryName:(bool)arg1;
- (bool)isShowCategoryName;
- (void)setShowLeaderLines:(bool)arg1;
- (bool)isShowLeaderLines;
- (void)setContentFormat:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (bool)isShowValue;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (id)graphicProperties;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (void)setPosition:(int)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)dealloc;
- (int)position;
- (void)setShowValue:(bool)arg1;

@end
