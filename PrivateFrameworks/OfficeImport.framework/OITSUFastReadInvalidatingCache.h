/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mGenerator;

    id mValue;
    long long mReaderCount;
    NSArray *mToDispose;
    boolmReentrant;
    NSCondition *mCondition;
    boolmIsGenerating;
}


- (id)initForReentrant:(bool)arg1 withGenerator:(id)arg2;
- (void)p_setValue:(id)arg1;
- (id)value;
- (void)invalidate;
- (void)dealloc;

@end
