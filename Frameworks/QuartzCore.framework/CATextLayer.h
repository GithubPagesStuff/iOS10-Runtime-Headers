/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CATextLayer : CALayer  {
    struct CATextLayerPrivate { } *_state;
}

@property(copy) id truncationString;
@property bool allowsFontSubpixelQuantization;
@property(copy) id string;
@property void* font;
@property double fontSize;
@property struct CGColor { }* foregroundColor;
@property(getter=isWrapped) bool wrapped;
@property(copy) NSString * truncationMode;
@property(copy) NSString * alignmentMode;

+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setAllowsFontSubpixelQuantization:(bool)arg1;
- (void)setTruncationString:(id)arg1;
- (bool)wrapped;
- (void)setTruncationMode:(id)arg1;
- (void)setWrapped:(bool)arg1;
- (void)_applyLinesToFunction:(int (*)())arg1 info:(void*)arg2;
- (struct __CTLine { }*)_createTruncationToken;
- (id)truncationMode;
- (id)alignmentMode;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (id)truncationString;
- (id)_createStringDict;
- (double)fontSize;
- (void*)font;
- (bool)isWrapped;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)allowsFontSubpixelQuantization;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (struct CGColor { }*)foregroundColor;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)didChangeValueForKey:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)dealloc;
- (void)setAlignmentMode:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFont:(void*)arg1;

@end
