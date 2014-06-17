/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

@property(copy,readonly) NSString * string;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)_documentTypeForFileType:(id)arg1;
+ (id)attributedStringWithAttachment:(id)arg1;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;

- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (unsigned long long)length;
- (unsigned long long)_cfTypeID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)string;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (bool)isEqualToAttributedString:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (Class)classForCoder;
- (bool)attribute:(id)arg1 existsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)trimmedString;
- (id)_UIKBStringWideAttributeValueForKey:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (bool)containsAttachments;
- (id)_documentFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)fontAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_initWithDOMRange:(id)arg1;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (void)_readDocumentFragment:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(bool)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1;
- (id)defaultLanguage;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usesAlternativeBreaker:(bool)arg3;
- (bool)_isStringDrawingTextStorage;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(bool*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })size;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scaledByScaleFactor:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTrackingAdjustment:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (id)_ui_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)_ui_fontsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultFont:(id)arg2;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (long long)_ui_resolvedTextAlignment;
- (id)_ui_secureStringWithPointSize:(double)arg1;
- (id)MP_attributedStringByAddingAttributes:(id)arg1 toOccurrencesOfSubstring:(id)arg2 options:(unsigned long long)arg3;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;
- (id)dd_attributedStringByAppendingAttributedString:(id)arg1;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
