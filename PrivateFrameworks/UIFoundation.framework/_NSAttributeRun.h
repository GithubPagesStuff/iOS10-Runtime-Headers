/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSMutableArray, NSTextStorage;

@interface _NSAttributeRun : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSTextStorage *_textStorage;
    NSMutableArray *_attributesArray;
}


- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)restoreAttributesOfTextStorage:(id)arg1;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
