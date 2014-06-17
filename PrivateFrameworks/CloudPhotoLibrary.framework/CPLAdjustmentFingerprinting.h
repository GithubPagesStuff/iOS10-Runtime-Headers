/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLAdjustments, CPLResource;

@interface CPLAdjustmentFingerprinting : NSObject  {
    bool_hasRedEye;
    bool_hasAutoEnhance;
    bool_hasSimpleLightenDarken;
    bool_hasOtherAdjustments;
    CPLAdjustments *_otherAdjustments;
    CPLResource *_baseImage;
    CPLResource *_largeAdjustmentData;
    CPLResource *_secondaryAdjustmentData;
}

@property bool hasRedEye;
@property bool hasAutoEnhance;
@property bool hasSimpleLightenDarken;
@property bool hasOtherAdjustments;
@property(retain) CPLAdjustments * otherAdjustments;
@property(retain) CPLResource * baseImage;
@property(retain) CPLResource * largeAdjustmentData;
@property(retain) CPLResource * secondaryAdjustmentData;


- (void)setSecondaryAdjustmentData:(id)arg1;
- (void)setLargeAdjustmentData:(id)arg1;
- (void)setBaseImage:(id)arg1;
- (void)setOtherAdjustments:(id)arg1;
- (void)setHasOtherAdjustments:(bool)arg1;
- (void)setHasSimpleLightenDarken:(bool)arg1;
- (void)setHasAutoEnhance:(bool)arg1;
- (void)setHasRedEye:(bool)arg1;
- (id)secondaryAdjustmentData;
- (id)largeAdjustmentData;
- (id)baseImage;
- (bool)hasOtherAdjustments;
- (id)otherAdjustments;
- (bool)hasSimpleLightenDarken;
- (bool)hasAutoEnhance;
- (bool)hasRedEye;
- (id)otherAdjustmentsFingerprint;
- (id)similarToOriginalAdjustmentsFingerprint;
- (void).cxx_destruct;

@end
