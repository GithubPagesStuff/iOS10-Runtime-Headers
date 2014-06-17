/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSDateComponents, NSArray;

@interface CNMutableContact : CNContact  {
}

@property(copy) NSString * namePrefix;
@property(copy) NSString * givenName;
@property(copy) NSString * middleName;
@property(copy) NSString * familyName;
@property(copy) NSString * nameSuffix;
@property(copy) NSString * previousFamilyName;
@property(copy) NSString * nickname;
@property(copy) NSString * phoneticGivenName;
@property(copy) NSString * phoneticMiddleName;
@property(copy) NSString * phoneticFamilyName;
@property(copy) NSString * organizationName;
@property(copy) NSString * departmentName;
@property(copy) NSString * jobTitle;
@property(copy) NSDateComponents * birthday;
@property(copy) NSString * note;
@property long long contactType;
@property(copy) NSArray * phoneNumbers;
@property(copy) NSArray * emailAddresses;
@property(copy) NSArray * urlAddresses;
@property(copy) NSArray * dates;
@property(copy) NSArray * instantMessageAddresses;
@property(copy) NSArray * relatedNames;
@property(copy) NSArray * socialProfiles;
@property(copy) NSArray * postalAddresses;
@property(copy) NSArray * ringtone;
@property(copy) NSArray * textTone;
@property(copy) NSArray * birthdays;

+ (id)contactWithRecord:(void*)arg1 unify:(bool)arg2;
+ (id)contactWithRecord:(void*)arg1;
+ (id)contact;

- (void)setOrganizationName:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setTextTone:(id)arg1;
- (void)setRingtone:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setDates:(id)arg1;
- (void)setUrlAddresses:(id)arg1;
- (void)setPreferredForPhoto;
- (void)setPreferredForName;
- (void)setNote:(id)arg1;
- (void)setBirthdays:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setDepartmentName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (struct __CFString { }*)_ABLabelFromCNLabel:(id)arg1;
- (void)_setStringMultiValueForProperty:(int)arg1 values:(id)arg2;
- (void)_setMultiValueForProperty:(int)arg1 values:(id)arg2 valueFromCNValue:(id)arg3;
- (void)setAlternateBirthday:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setContactType:(long long)arg1;
- (bool)isEqualToContact:(id)arg1;
- (bool)isEqualToContact:(id)arg1 includeIdentifiers:(bool)arg2;
- (id)initWithRecord:(void*)arg1 unify:(bool)arg2 originalRecord:(void*)arg3;
- (void)setPostalAddresses:(id)arg1;
- (bool)saveContact;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (bool)addToGroup:(void*)arg1;
- (bool)unlinkContact;
- (bool)linkToContact:(id)arg1;
- (bool)saveContactInAddressBook:(void*)arg1;
- (void)updateContactType:(bool)arg1;
- (void)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (bool)deleteContact;
- (void)setEmailAddresses:(id)arg1;
- (void)setNickname:(id)arg1;
- (bool)hasChanges;
- (id)initWithRecord:(void*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;

@end
