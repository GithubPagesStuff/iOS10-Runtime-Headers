/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLIntermediate;

@interface NSSQLIntermediate : NSObject  {
    NSSQLIntermediate *_scope;
}

+ (bool)expressionIsBasicKeypath:(id)arg1;
+ (bool)isSimpleKeypath:(id)arg1;

- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (bool)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (void)_promoteJoinsForTernaryExpression:(id)arg1;
- (void)_promoteJoinsForAggregateExpression:(id)arg1;
- (void)_promoteJoinsForFunctionExpression:(id)arg1;
- (void)_promoteJoinsForKeypathExpression:(id)arg1;
- (void)promoteJoinsInKeypathsForExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (bool)expressionIsBasicKeypath:(id)arg1;
- (id)governingAlias;
- (bool)isHavingScoped;
- (bool)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (bool)isUpdateScoped;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (bool)isFunctionScoped;
- (bool)isVariableBasedKeypathScopedBySubquery:(id)arg1;
- (bool)isSimpleKeypath:(id)arg1;
- (id)_lastScopedItem;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (bool)isTargetColumnsScoped;
- (bool)isOrScoped;
- (id)scope;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithScope:(id)arg1;

@end
