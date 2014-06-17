/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSNumber, NSMutableArray;

@interface WFLSMResult : NSObject  {
    NSMutableArray *categoryJudgements;
    NSNumber *threshold;
}

@property(copy) NSNumber * threshold;

+ (id)extractScoresFromLSMResults:(struct __LSMResult { }*)arg1;
+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;

- (void)setScore:(float)arg1 forCategory:(long long)arg2;
- (float)scoreForCategory:(long long)arg1;
- (long long)bestMatchingCategory;
- (id)initWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;
- (id)threshold;
- (void)setThreshold:(id)arg1;
- (bool)isRestricted;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (long long)numberOfCategories;

@end
