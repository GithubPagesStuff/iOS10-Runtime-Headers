/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSCompoundPredicate : NSPredicate  {
    void *_reserved2;
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property(readonly) unsigned long long compoundPredicateType;
@property(copy,readonly) NSArray * subpredicates;

+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)_operatorForType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)orPredicateWithSubpredicates:(id)arg1;

- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)subpredicates;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)generateMetadataDescription;
- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2;
- (id)_subpredicateDescription:(id)arg1;
- (unsigned long long)compoundPredicateType;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)_predicateOperator;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)predicateOperator;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)minimalFormInContext:(id)arg1;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (bool)ab_hasCallback;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)validate;

@end
