/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSMutableAttributedString, NSMutableArray;

@interface SKUIViewElementText : NSObject  {
    NSMutableAttributedString *_attributedString;
    NSArray *_badges;
    NSMutableArray *_styledRanges;
}

@property(readonly) NSString * string;
@property(readonly) NSArray * badges;
@property(readonly) bool containsInlineStyles;


- (id)badges;
- (id)_stringFromNumberElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (bool)containsInlineStyles;
- (void)enumerateTextStylesUsingBlock:(id)arg1;
- (id)initWithXMLNodes:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithXMLNodes:(id)arg1;
- (id)attributedStringWithDefaultFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithDefaultFont:(id)arg1 foregroundColor:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)string;
- (void).cxx_destruct;

@end
