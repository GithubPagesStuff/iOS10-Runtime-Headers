/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, EDResources;

@interface EDTableColumn : NSObject  {
    EDResources *mResources;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;

- (void)setTotalsRowLabel:(id)arg1;
- (id)totalsRowLabel;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (unsigned long long)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)headerRowDxfIndex;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (id)initWithResources:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)uniqueName;

@end
