/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSTypesetter : NSObject  {
    void *_reserved;
}

+ (id)sharedSystemTypesetter;
+ (bool)_usesATSTypesetter;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;
+ (long long)defaultTypesetterBehavior;
+ (void)initialize;

- (void)setTightenThresholdForTruncation:(float)arg1;
- (void)setBidiProcessingEnabled:(bool)arg1;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 nextCharacterIndex:(unsigned long long*)arg6;
- (void)_setLineBreakModeOverridden:(bool)arg1;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 andParagraphSeparatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (void)_updateParagraphStyleCache:(id)arg1;
- (id)attributesForExtraLineFragment;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(bool*)arg5 bidiLevels:(char *)arg6;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setParagraphGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 separatorGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTypesetterBehavior:(long long)arg1;
- (void)_setForceOriginalFontBaseline:(bool)arg1;
- (void)setUsesFontLeading:(bool)arg1;
- (void)setHardInvalidation:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDrawsOutsideLineFragment:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttachmentSize:(struct CGSize { double x1; double x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGlyphs:(unsigned int*)arg2;
- (bool)usesFontLeading;
- (float)tightenThresholdForTruncation;
- (bool)_isLineBreakModeOverridden;
- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char *)arg5;
- (bool)_forceOriginalFontBaseline;
- (id)currentParagraphStyle;
- (id)textContainers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphSeparatorGlyphRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphGlyphRange;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; }*)_lineFragmentRectForProposedRectArgs;
- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); double x8; double x9; double x10; double x11; double x12; double x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; id x17; double x18; long long x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 10; } x20; void *x21[0]; }*)_allocateAuxData;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (float)hyphenationFactor;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 atProposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)endParagraph;
- (void)beginParagraph;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNotShownAttribute:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (id)currentTextContainer;
- (long long)typesetterBehavior;
- (long long)_baseWritingDirection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphSeparatorCharacterRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphCharacterRange;
- (bool)bidiProcessingEnabled;
- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); double x8; double x9; double x10; double x11; double x12; double x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; id x17; double x18; long long x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 10; } x20; void *x21[0]; }*)_getAuxData;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 baselineOffset:(double)arg4;
- (id)_ellipsisFontForFont:(id)arg1;
- (bool)_allowsEllipsisGlyphSubstitution;
- (id)layoutManager;
- (id)substituteFontForFont:(id)arg1;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })layoutCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (id)attributedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (double)lineFragmentPadding;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;

@end
