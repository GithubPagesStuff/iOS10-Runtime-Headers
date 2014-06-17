/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {
}

@property(retain) NSString * title;
@property(retain) CLLocation * geoLocation;
@property double radius;
@property(copy) NSString * addressBookEntityID;
@property(readonly) bool isStructured;
@property(retain) NSString * address;
@property(retain) NSString * routing;

+ (id)locationWithTitle:(id)arg1;

- (bool)isEqualToLocation:(id)arg1;
- (id)_asCalLocation;
- (void)setGeoLocation:(id)arg1;
- (id)_persistentLocation;
- (void)setRouting:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (id)geoLocation;
- (id)routing;
- (void)updatePersistentObject;
- (void)setAddress:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)radius;
- (bool)isStructured;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;
- (id)cacheKey;

@end
