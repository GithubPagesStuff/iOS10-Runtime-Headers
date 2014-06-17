/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@class NSString, NSDictionary, NSArray, NSDate, NSMutableArray, NSNumber;

@interface CRRecentContact : NSObject <NSSecureCoding> {
    NSMutableArray *_recentDates;
    long long _contactID;
    NSString *_recentsDomain;
    NSString *_displayName;
    NSString *_kind;
    NSString *_address;
    NSString *_lastSendingAddress;
    NSString *_originalSource;
    NSDictionary *_metadata;
    NSNumber *_weight;
    NSNumber *_decayedWeight;
    NSArray *_members;
    unsigned long long _groupKind;
    long long _recentID;
    NSString *_groupName;
    NSString *_rawAddress;
}

@property long long contactID;
@property(copy) NSString * recentsDomain;
@property(copy) NSString * displayName;
@property(copy) NSString * kind;
@property(copy) NSString * address;
@property(copy) NSString * lastSendingAddress;
@property(copy) NSString * originalSource;
@property(copy) NSArray * recentDates;
@property(copy) NSDictionary * metadata;
@property(retain) NSNumber * weight;
@property(retain) NSNumber * decayedWeight;
@property(copy) NSArray * members;
@property(readonly) unsigned long long countOfRecents;
@property(copy,readonly) NSDate * mostRecentDate;
@property(copy,readonly) NSDate * leastRecentDate;
@property(getter=isGroup,readonly) bool group;
@property unsigned long long groupKind;
@property long long recentID;
@property(copy) NSString * groupName;
@property(copy) NSString * rawAddress;

+ (bool)supportsSecureCoding;

- (void)setRawAddress:(id)arg1;
- (id)rawAddress;
- (void)setGroupKind:(unsigned long long)arg1;
- (unsigned long long)groupKind;
- (void)setDecayedWeight:(id)arg1;
- (void)setOriginalSource:(id)arg1;
- (void)setLastSendingAddress:(id)arg1;
- (id)recentsDomain;
- (void)setContactID:(long long)arg1;
- (id)archivableGroupKind;
- (void)setArchivableGroupKind:(id)arg1;
- (id)archivableMetadata;
- (void)setArchivableMetadata:(id)arg1;
- (id)archivableGroupMembers;
- (void)setArchivableGroupMembers:(id)arg1;
- (id)archivableContactID;
- (void)setArchivableContactID:(id)arg1;
- (id)archivableRecentID;
- (void)setArchivableRecentID:(id)arg1;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(bool)arg2;
- (id)recentDates;
- (void)applyWeight:(id)arg1;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (long long)contactID;
- (void)enumerateArchivablePropertiesWithBlock:(id)arg1;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(bool)arg3;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(bool*)arg2;
- (void)lazilyCreateRecentDates;
- (long long)recentID;
- (id)members;
- (void)setMembers:(id)arg1;
- (void)setRecentDates:(id)arg1;
- (void)setRecentsDomain:(id)arg1;
- (void)setRecentID:(long long)arg1;
- (id)initWithContactID:(long long)arg1;
- (id)leastRecentDate;
- (id)lastSendingAddress;
- (bool)hasFullTextMatch:(id)arg1;
- (unsigned long long)countOfRecents;
- (id)mostRecentDate;
- (id)originalSource;
- (id)decayedWeight;
- (void)setAddress:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setDisplayName:(id)arg1;
- (id)kind;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)address;
- (void)setWeight:(id)arg1;
- (id)weight;
- (bool)isGroup;
- (void)_setAddressBookContext:(id)arg1;
- (id)_addressBookContext;
- (void*)existingPerson;
- (int)matchedIdentifier;
- (int)property;
- (void*)person;

@end
