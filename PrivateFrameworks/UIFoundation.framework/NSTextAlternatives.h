/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString, NSArray;

@interface NSTextAlternatives : NSObject  {
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id _internal;
}

@property(readonly) NSString * primaryString;
@property(readonly) NSArray * alternativeStrings;


- (id)identifier;
- (id)alternativeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAlternatives;
- (void)noteSelectedAlternativeString:(id)arg1;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)primaryString;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)alternativeStrings;
- (id)alternatives;
- (id)originalText;

@end
