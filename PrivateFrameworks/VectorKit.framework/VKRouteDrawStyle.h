/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKRouteDrawStyle : VKRenderStyle  {
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } _width;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } _fillColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } _travelledColor;
}

@property(readonly) bool hasTexture;
@property(readonly) bool hasObscuredTexture;
@property(readonly) bool hasTravelledTexture;
@property(readonly) NSString * texture;
@property(readonly) NSString * obscuredTexture;
@property(readonly) NSString * travelledTexture;
@property(readonly) float enlargementStartZoom;
@property(readonly) float enlargementScale;
@property(readonly) float enlargementMaxScale;
@property(readonly) float brightness;
@property(readonly) bool hasBrightness;
@property(readonly) float arrowMinZoom;
@property(readonly) float selectedArrowMinZoom;
@property(readonly) bool hasFillColor;

+ (int)renderStyleID;

- (float)selectedArrowMinZoom;
- (float)enlargementMaxScale;
- (float)enlargementScale;
- (float)enlargementStartZoom;
- (id)travelledTexture;
- (bool)hasTravelledTexture;
- (id)obscuredTexture;
- (bool)hasObscuredTexture;
- (bool)hasTexture;
- (unsigned long long)fillDashPatternAtZoom:(float)arg1;
- (bool)hasDashAtAnyZ;
- (id)texture;
- (float)strokeWidth;
- (bool)hasFillColor;
- (float)arrowMinZoom;
- (bool)hasBrightness;
- (struct Matrix<float, 4, 1> { float x1[4]; })glossColor;
- (struct Matrix<float, 4, 1> { float x1[4]; })travelledColor;
- (float)width;
- (struct Matrix<float, 4, 1> { float x1[4]; })strokeColor;
- (struct Matrix<float, 4, 1> { float x1[4]; })fillColor;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)brightness;

@end
