/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject  {
    NSMutableArray *m_tokens;
    int m_format;
    unsigned int m_initNumber;
    void **m_numberFormatter;
}


- (id)token:(unsigned int)arg1;
- (unsigned long long)tokenCount;
- (id)listLevelTextforOutline:(id)arg1;
- (id)initWithText:(id)arg1 format:(int)arg2 language:(int)arg3;
- (id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3 language:(int)arg4;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end
