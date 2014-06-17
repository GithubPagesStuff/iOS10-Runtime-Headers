/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSMutableArray;

@interface PSIGroupAggregate : NSObject  {
    NSArray *_searchTokens;
    NSMutableArray *_rangesMatchingTokens;
    NSMutableArray *_groups;
    NSMutableArray *_assetIdArrays;
}


- (bool)_isResult:(id)arg1 duplicatedInResults:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3;
- (bool)pushGroup:(id)arg1;
- (id)newGroupUniqueFromGroups:(id)arg1;
- (id)initWithSearchTokens:(id)arg1;
- (void)dealloc;
- (void)pop;

@end
