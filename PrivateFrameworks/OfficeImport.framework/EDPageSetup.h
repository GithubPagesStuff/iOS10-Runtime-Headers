/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject  {
    int mOrientation;
    int mPageOrder;
    boolmCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (float)footerMargin;
- (unsigned long long)fitToWidth;
- (unsigned long long)fitToHeight;
- (unsigned long long)firstPageNumber;
- (bool)customFirstPageNumber;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setFitToWidth:(unsigned long long)arg1;
- (void)setFitToHeight:(unsigned long long)arg1;
- (void)setCustomFirstPageNumber:(bool)arg1;
- (void)setFirstPageNumber:(unsigned long long)arg1;
- (float)headerMargin;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (float)rightMargin;
- (float)leftMargin;
- (float)bottomMargin;
- (float)topMargin;
- (void)setScale:(unsigned long long)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (id)init;
- (unsigned long long)scale;
- (int)order;
- (void)setOrder:(int)arg1;

@end
