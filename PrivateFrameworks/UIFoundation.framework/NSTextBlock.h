/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextBlock : NSObject <NSCoding, NSCopying> {
    void *_propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}

+ (void)initialize;

- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (id)_attributeDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForLayoutAtPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setBorderColor:(id)arg1;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3;
- (unsigned long long)contentWidthValueType;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1 type:(unsigned long long)arg2;
- (id)borderColorForEdge:(unsigned long long)arg1;
- (unsigned long long)verticalAlignment;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4;
- (void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)arg1;
- (double)_valueForParameter:(unsigned long long)arg1;
- (void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (unsigned long long)valueTypeForDimension:(unsigned long long)arg1;
- (unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (double)valueForDimension:(unsigned long long)arg1;
- (double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 layoutManager:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
