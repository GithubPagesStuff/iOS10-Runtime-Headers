/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter  {
    bool_recordIsGroup;
    bool_importingToExistingGroup;
}

@property bool recordIsGroup;

+ (int)groupPropertyForPersonProperty:(int)arg1;
+ (struct __CFDictionary { }*)_personToGroupPropertyMap;

- (bool)recordIsGroup;
- (void)_drainExistingProperties;
- (void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned int*)arg2;
- (id)initWithGroup:(void*)arg1 removeExistingProperties:(bool)arg2;
- (id)initWithPerson:(void*)arg1 removeExistingProperties:(bool)arg2;
- (void)setRecordIsGroup:(bool)arg1;
- (bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (bool)propertyIsValidForPerson:(unsigned int)arg1;
- (id)imageData;
- (bool)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;

@end
