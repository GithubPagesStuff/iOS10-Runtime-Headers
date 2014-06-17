/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject  {
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(bool)arg2;
+ (bool)isLinkDataValidForAddressBook:(void*)arg1;

- (void)linkNewlyAddedPerson:(void*)arg1;
- (id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(bool)arg2;
- (bool)linkRecentlyAddedPeopleWithLimit:(long long)arg1;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2;
- (void)makeInitialLinksCountingOuterIterations:(unsigned long long*)arg1;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(bool)arg2 countingOuterIterations:(unsigned long long*)arg3;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2;
- (void)presortPeople:(id)arg1;
- (void)removeAllLinks;
- (void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;
- (bool)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(bool)arg4;
- (id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2;
- (void)linkRecentlyAddedPeople;
- (void)makeInitialLinks;
- (id)initWithAddressBook:(void*)arg1;
- (id)init;
- (void)dealloc;

@end
