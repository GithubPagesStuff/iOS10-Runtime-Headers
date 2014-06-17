/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, PLPhotoLibrary;

@interface PLManagedObject : NSManagedObject  {
}

@property(retain,readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) bool isRegisteredWithUserInterfaceContext;
@property(copy,readonly) NSString * shortObjectIDURI;
@property(copy,readonly) NSString * pl_shortDescription;


- (id)shortObjectIDURI;
- (id)pl_shortDescription;
- (bool)isRegisteredWithUserInterfaceContext;
- (id)photoLibrary;

@end
