/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSString, NSMutableDictionary;

@interface MecabraCoreDataProperties : NSObject  {
    NSMutableDictionary *_descriptionDictionary;
    NSString *_identifier;
    NSString *_type;
}

@property(retain,readonly) NSString * type;
@property(readonly) NSString * ubiquityContainerIdentifier;
@property(retain) NSMutableDictionary * descriptionDictionary;
@property(retain) NSString * identifier;

+ (id)ubiquityContainerURL;
+ (id)defaultDescriptionPath;
+ (void)setDefaultDescriptionPath:(id)arg1;
+ (id)sharedInstanceForType:(id)arg1;

- (void)setDescriptionDictionary:(id)arg1;
- (id)ubiquitousTransactionURLForIdentifier:(id)arg1;
- (id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1;
- (id)ubiquitousURLWithSuffix:(id)arg1;
- (id)descriptionDictionary;
- (id)ubiquityContainerIdentifier;
- (id)entityDescriptionURL;
- (bool)databaseSyncs;
- (id)entityModelName;
- (void)forceNoSync;
- (id)uniqueKeys;
- (id)requiredKeys;
- (id)sortDescriptors;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)valueForKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)type;
- (void)dealloc;

@end
