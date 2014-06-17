/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKLeaderboardSetInternal, NSString, NSArray;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {
    GKLeaderboardSetInternal *_internal;
}

@property(copy) NSString * title;
@property(retain,readonly) NSString * groupIdentifier;
@property(copy) NSString * identifier;
@property(retain,readonly) NSArray * leaderboardIdentifiers;
@property(retain) GKLeaderboardSetInternal * internal;

+ (void)loadLeaderboardSetsWithCompletionHandler:(id)arg1;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)imageURL;
- (id)miniImageURL;
- (void)loadImageWithCompletionHandler:(id)arg1;

@end
