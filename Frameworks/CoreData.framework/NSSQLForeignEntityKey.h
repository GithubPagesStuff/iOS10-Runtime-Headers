/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn  {
    NSSQLForeignKey *_foreignKey;
}


- (void)setFKForReadOnlyFetch:(id)arg1;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)toOneRelationship;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)foreignKey;
- (void)dealloc;

@end
