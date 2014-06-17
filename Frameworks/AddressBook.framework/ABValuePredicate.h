/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSArray, NSObject, <NSObject>;

@interface ABValuePredicate : ABPredicate  {
    int _property;
    long long _comparison;
    <NSObject> *_value;
    NSArray *_orderedKeys;
    bool_dictionaryValue;
}

@property int property;
@property long long comparison;
@property(copy) NSObject * value;

+ (id)stringForComparison:(id)arg1 withComparision:(long long)arg2;

- (void)setProperty:(int)arg1;
- (int)property;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (id)_ftsAllQueryStrings;
- (id)stringForComparison:(id)arg1;
- (id)_ftsTermStringForString:(id)arg1;
- (long long)comparison;
- (bool)_allowsLaxCheckingForFTS;
- (bool)_supportsFTSSearch;
- (bool)_shouldConsultIndexForKey:(id)arg1;
- (id)querySelectProperties;
- (void)setComparison:(long long)arg1;
- (id)queryJoinsInCompound:(bool)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (id)value;
- (void)setValue:(id)arg1;
- (id)init;
- (bool)isValid;
- (void)dealloc;
- (id)predicateFormat;

@end
