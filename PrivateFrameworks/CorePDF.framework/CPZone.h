/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CPZoneProfile, NSMutableArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {
    NSMutableArray *zoneBorders;
    struct CGPoint { double x1; double x2; } *outerVertices;
    struct CGPoint { double x1; double x2; } *swollenOuterVertices;
    double area;
    boolisStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
    NSMutableArray *backgroundGraphics;
    unsigned int usedGraphicCount;
}


- (id)spacers;
- (void)setSpacers:(id)arg1;
- (id)gutters;
- (void)setGutters:(id)arg1;
- (id)rightGuides;
- (void)setRightGuides:(id)arg1;
- (id)leftGuides;
- (void)setLeftGuides:(id)arg1;
- (void)setZoneProfile:(id)arg1;
- (id)zoneProfile;
- (void)setIsStraddleZone:(bool)arg1;
- (bool)isStraddleZone;
- (long long)compareArea:(id)arg1;
- (void)addContentFrom:(id)arg1;
- (id)charactersInZone;
- (void)setCharactersInZone:(id)arg1;
- (void)addPDFChar:(void*)arg1;
- (bool)canContain:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swollenZoneBounds;
- (void)removeUnfilledNeighborShapes;
- (void)setZoneBorders:(id)arg1;
- (id)graphicsInZone;
- (id)zoneBorders;
- (bool)hasBorders;
- (struct CGPoint { double x1; double x2; }*)swollenOuterVertices;
- (long long)neighborZOrder;
- (long long)borderZOrder;
- (bool)isRectangular;
- (bool)hasNeighborShape:(id)arg1;
- (bool)bordersWindClockwise;
- (bool)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (id)backgroundGraphics;
- (struct CGColor { }*)newBackgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoneBounds;
- (unsigned int)usedGraphicCount;
- (unsigned int)wordCount;
- (bool)isZone;
- (void)incrementUsedGraphicCount;
- (struct CGPoint { double x1; double x2; }*)outerVertices;
- (void)accept:(id)arg1;
- (id)textLinesInZone;
- (double)area;
- (bool)contains:(id)arg1;
- (unsigned int)vertexCount;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
