/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate  {
    ML3Predicate *_conditionPredicate;
    ML3Predicate *_thenPredicate;
    ML3Predicate *_elsePredicate;
}

@property(copy,readonly) ML3Predicate * conditionPredicate;
@property(copy,readonly) ML3Predicate * thenPredicate;
@property(copy,readonly) ML3Predicate * elsePredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (id)elsePredicate;
- (id)thenPredicate;
- (id)conditionPredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)spotlightPredicate;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (id)predicateOptimizedForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
