/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinkReference : NSObject  {
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;

- (bool)isWorkbookLevelReference;
- (void)setLinkIndex:(unsigned long long)arg1;
- (unsigned long long)linkIndex;
- (void)setLastSheetIndex:(unsigned long long)arg1;
- (unsigned long long)lastSheetIndex;
- (void)setFirstSheetIndex:(unsigned long long)arg1;
- (unsigned long long)firstSheetIndex;
- (bool)isEqualToLinkReference:(id)arg1;
- (id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
