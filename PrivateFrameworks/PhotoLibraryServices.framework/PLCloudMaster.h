/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSSet, NSManagedObject, NSDate;

@interface PLCloudMaster : PLManagedObject  {
}

@property short cloudLocalState;
@property(retain) NSString * cloudMasterGUID;
@property short cloudServerState;
@property(retain) NSDate * creationDate;
@property(retain) NSString * filename;
@property(retain) NSDate * importDate;
@property(retain) NSString * uniformTypeIdentifier;
@property(retain) NSSet * assetAttributes;
@property(retain) NSSet * resources;
@property(retain) NSString * mediaMetadataType;
@property(retain) NSManagedObject * mediaMetadata;

+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2;
+ (id)allCloudMastersInManagedObjectContext:(id)arg1;
+ (id)cloudMasterWithGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersWithGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (id)cloudResourceForResourceType:(unsigned long long)arg1;
- (id)cplResourceForResourceType:(unsigned long long)arg1;
- (id)description;

@end
