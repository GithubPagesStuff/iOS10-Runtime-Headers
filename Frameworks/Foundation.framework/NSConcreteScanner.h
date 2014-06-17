/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner  {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { 
        unsigned int caseSensitive : 1; 
        unsigned int  : 31; 
    } flags;
}


- (id)locale;
- (void)setLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (void)finalize;
- (void)dealloc;
- (id)_invertedSkipSet;
- (bool)scanLongLong:(long long*)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (bool)scanInt:(int*)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setScanLocation:(unsigned long long)arg1;
- (unsigned long long)scanLocation;

@end
