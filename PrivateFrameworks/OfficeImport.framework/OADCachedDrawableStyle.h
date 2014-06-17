/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedDrawableStyle : NSObject  {
    int mFillCategory;
    unsigned long long mFillIndex;
    unsigned long long mStrokeIndex;
    unsigned long long mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned long long mTextStyleIndex;
}

@property(readonly) int fillCategory;
@property(readonly) unsigned long long fillIndex;
@property(readonly) unsigned long long strokeIndex;
@property(readonly) unsigned long long shadowIndex;
@property(readonly) unsigned char reflectionOpacity;
@property(readonly) unsigned long long textStyleIndex;


- (unsigned long long)textStyleIndex;
- (unsigned char)reflectionOpacity;
- (unsigned long long)shadowIndex;
- (unsigned long long)strokeIndex;
- (unsigned long long)fillIndex;
- (int)fillCategory;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
