/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject  {
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    boolmCategoryAxesReversed;
    boolmCategoryAxesReversedOverridden;
    boolmContainsVolumeStockType;
}


- (void)setContainsVolumeStockType:(bool)arg1;
- (bool)isCategoryAxesReversed:(bool)arg1;
- (bool)containsVolumeStockType;
- (void)markSecondaryAxes;
- (bool)hasSecondaryYAxisDeleted;
- (bool)hasSecondaryAxis;
- (id)chartTypes;
- (void)setGraphicProperties:(id)arg1;
- (id)initWithChart:(id)arg1;
- (id)axes;
- (id)graphicProperties;
- (void)dealloc;

@end
