/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, EDResources, NSMutableArray;

@interface EDConditionalFormattingRule : NSObject  {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    boolmStopIfTrue;
    boolmAppliesToDateOnly;
    long long mPriority;
    boolmAboveAverage;
    boolmBottom;
    boolmEqualAverage;
    boolmPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (void)setDifferentialStyleIndex:(unsigned long long)arg1;
- (unsigned long long)differentialStyleIndex;
- (void)setAppliesToDateOnly:(bool)arg1;
- (bool)appliesToDateOnly;
- (void)setTimePeriod:(int)arg1;
- (int)timePeriod;
- (void)setStdDev:(long long)arg1;
- (long long)stdDev;
- (void)setPercent:(bool)arg1;
- (void)setEqualAverage:(bool)arg1;
- (bool)equalAverage;
- (void)setAboveAverage:(bool)arg1;
- (bool)aboveAverage;
- (void)setStopIfTrue:(bool)arg1;
- (bool)stopIfTrue;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (void)setOperatorEnum:(int)arg1;
- (int)operatorEnum;
- (long long)compareToOtherRuleUsingPriority:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (unsigned long long)formulaCount;
- (bool)percent;
- (void)setRank:(unsigned long long)arg1;
- (unsigned long long)rank;
- (void)setBottom:(bool)arg1;
- (id)text;
- (bool)bottom;
- (void)setType:(int)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (int)type;
- (void)dealloc;
- (void)setText:(id)arg1;

@end
