/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle, NSString, NSArray, IMPerson, NSMutableArray;

@interface IMMe : NSObject  {
    IMPerson *_person;
    NSString *_abNickname;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSArray *_abEmails;
    NSMutableArray *_abIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property(readonly) NSString * guid;
@property(readonly) IMPerson * person;
@property(readonly) NSString * nickname;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * fullName;
@property(readonly) NSString * email;
@property(readonly) NSArray * emails;
@property(readonly) IMHandle * bestIMHandle;
@property(readonly) NSArray * imHandles;

+ (id)imHandleForService:(id)arg1;
+ (id)fallbackUserName;
+ (id)me;

- (id)bestIMHandle;
- (bool)isIMHandleLoginIMHandle:(id)arg1;
- (id)loginIMHandles;
- (id)imHandles;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)rebuildIMHandles;
- (void)myPictureChanged;
- (bool)addIMHandle:(id)arg1;
- (bool)removeIMHandle:(id)arg1;
- (void)setIMPerson:(id)arg1;
- (bool)addLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (bool)removeLoginIMHandle:(id)arg1;
- (id)nickname;
- (id)lastName;
- (id)firstName;
- (id)guid;
- (id)fullName;
- (id)email;
- (id)emails;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)person;

@end
