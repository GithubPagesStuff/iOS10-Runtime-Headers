/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameInternal, NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface GKPlayerInternal : GKInternalRepresentation  {
    NSString *_playerID;
    NSString *_alias;
    NSDictionary *_photos;
    unsigned short _numberOfFriends;
    unsigned short _numberOfGames;
    unsigned short _numberOfFriendsInCommon;
    unsigned short _numberOfGamesInCommon;
    unsigned int _numberOfAchievements;
    unsigned int _numberOfAchievementPoints;
    union { 
        struct { 
            unsigned int _unused : 8; 
            unsigned int _purpleBuddyAccount : 1; 
            unsigned int _underage : 1; 
            unsigned int _photoPending : 1; 
            unsigned int _findable : 1; 
            unsigned int _reserved : 18; 
        } ; 
        unsigned int _value; 
    } _flags;
}

@property(retain) NSString * playerID;
@property(retain) NSString * alias;
@property(retain) NSDictionary * photos;
@property(readonly) bool isFriend;
@property(readonly) bool isLocalPlayer;
@property(readonly) bool isAnonymousPlayer;
@property(readonly) bool isUnknownPlayer;
@property(readonly) bool isAutomatchPlayer;
@property(readonly) bool isLoaded;
@property unsigned short numberOfFriendsInCommon;
@property unsigned short numberOfGamesInCommon;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * compositeName;
@property(retain) NSString * status;
@property(retain) NSDate * lastPlayedDate;
@property(retain) GKGameInternal * lastPlayedGame;
@property unsigned short numberOfFriends;
@property unsigned short numberOfGames;
@property unsigned int numberOfAchievements;
@property unsigned int numberOfAchievementPoints;
@property(retain) NSString * accountName;
@property(retain) NSArray * emailAddresses;
@property(retain) NSArray * friends;
@property(getter=isPurpleBuddyAccount) bool purpleBuddyAccount;
@property(getter=isUnderage) bool underage;
@property(getter=isFindable) bool findable;
@property(getter=isPhotoPending) bool photoPending;
@property unsigned short numberOfRequests;
@property unsigned short numberOfTurns;
@property unsigned short numberOfChallenges;
@property(retain) NSString * facebookUserID;
@property(retain) NSNumber * iCloudUserID;
@property unsigned int flags;

+ (Class)classForFamiliarity:(int)arg1;
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;
+ (id)secureCodedPropertyKeys;

- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)setNumberOfAchievementPoints:(unsigned int)arg1;
- (void)setNumberOfGamesInCommon:(unsigned short)arg1;
- (void)setNumberOfGames:(unsigned short)arg1;
- (void)setNumberOfFriendsInCommon:(unsigned short)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setAllowNearbyMultiplayer:(bool)arg1;
- (bool)allowNearbyMultiplayer;
- (void)setPhotoPending:(bool)arg1;
- (bool)isPhotoPending;
- (void)setFindable:(bool)arg1;
- (bool)isFindable;
- (void)setUnderage:(bool)arg1;
- (void)setPurpleBuddyAccount:(bool)arg1;
- (bool)isPurpleBuddyAccount;
- (void)setICloudUserID:(id)arg1;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (void)setLastPlayedGame:(id)arg1;
- (bool)isAnonymousPlayer;
- (bool)isUnknownPlayer;
- (bool)isAutomatchPlayer;
- (void)setCompositeName:(id)arg1;
- (id)compositeName;
- (void)setNumberOfAchievements:(unsigned int)arg1;
- (bool)isFriend;
- (int)defaultFamiliarity;
- (id)photos;
- (unsigned short)numberOfTurns;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned int)numberOfAchievementPoints;
- (unsigned short)numberOfGamesInCommon;
- (unsigned short)numberOfGames;
- (unsigned short)numberOfFriendsInCommon;
- (id)lastPlayedGame;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)setNumberOfFriends:(unsigned short)arg1;
- (unsigned short)numberOfFriends;
- (bool)isUnderage;
- (void)setFriends:(id)arg1;
- (id)friends;
- (bool)isLocalPlayer;
- (id)minimalInternal;
- (id)conciseDescription;
- (id)lastPlayedDate;
- (unsigned int)numberOfAchievements;
- (id)serverRepresentation;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setPhotos:(id)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (void)setLastPlayedDate:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)alias;
- (id)lastName;
- (id)firstName;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setFlags:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (bool)isLoaded;
- (unsigned int)flags;
- (id)cacheKey;

@end
