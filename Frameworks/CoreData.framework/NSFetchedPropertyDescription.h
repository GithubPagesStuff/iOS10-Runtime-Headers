/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription  {
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}

@property(retain) NSFetchRequest * fetchRequest;


- (void)setFetchRequest:(id)arg1;
- (id)fetchRequest;
- (bool)isReadOnly;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_createCachesAndOptimizeState;
- (unsigned long long)_propertyType;
- (bool)isTransient;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
