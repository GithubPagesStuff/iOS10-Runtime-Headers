/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation  {
    struct CGColor { } *_highLightColor;
}


- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;
- (bool)recognizeGestures;
- (int)annotationType;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (Class)viewClass;

@end
