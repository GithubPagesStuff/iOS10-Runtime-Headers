/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class NSMutableData, UIImage, BLImagePatchList;

@interface BLRetouchRepairLayer : BLRetouchEffectLayer  {
    struct CGContext { } *_repairAnalysisImageContextRef;
    NSMutableData *_repairAnalysisImageRasterData;
    int _repairAnalysisBufferWidth;
    int _repairAnalysisBufferHeight;
    int _repairAnalysisBufferRowBytes;
    bool_isNotFinalStroke;
    int _totalStrokeArea;
    UIImage *_repairAnalysisImage;
    UIImage *_repairSourceImage;
    BLImagePatchList *_repairPatchList;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _brushStrokeRect;
}

@property(retain) UIImage * repairAnalysisImage;
@property(retain) UIImage * repairSourceImage;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } brushStrokeRect;
@property(retain) BLImagePatchList * repairPatchList;
@property int totalStrokeArea;


- (void)setTotalStrokeArea:(int)arg1;
- (int)totalStrokeArea;
- (void)setRepairPatchList:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })brushStrokeRect;
- (void)setBrushStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)repairPatchList;
- (void)setRepairSourceImage:(id)arg1;
- (id)repairSourceImage;
- (void)setRepairAnalysisImage:(id)arg1;
- (id)repairAnalysisImage;
- (bool)solidBrush;
- (void)strokeDidFinish;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawBrushAtLocation:(struct CGPoint { double x1; double x2; })arg1 opacity:(float)arg2 erase:(bool)arg3 magicEdges:(bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;
- (void)setBrushStrokes:(id)arg1;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (id)init;
- (void)dealloc;

@end
