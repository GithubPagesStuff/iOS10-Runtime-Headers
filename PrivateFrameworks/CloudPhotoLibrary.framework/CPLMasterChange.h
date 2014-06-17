/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSString, NSData, NSDate;

@interface CPLMasterChange : CPLItemChange  {
    NSArray *_resources;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    long long _originalOrientation;
}

@property(copy) NSArray * resources;
@property(copy) NSDate * creationDate;
@property(copy) NSString * itemType;
@property(readonly) bool isImage;
@property(readonly) bool isVideo;
@property(copy) NSDate * importDate;
@property(copy) NSString * filename;
@property(copy) NSString * importGroupIdentifier;
@property(copy) NSString * mediaMetaDataType;
@property(retain) NSData * mediaMetaData;
@property long long originalOrientation;


- (bool)isImage;
- (void)setMediaMetaData:(id)arg1;
- (id)mediaMetaData;
- (void)setMediaMetaDataType:(id)arg1;
- (id)mediaMetaDataType;
- (void)setImportGroupIdentifier:(id)arg1;
- (id)importGroupIdentifier;
- (bool)supportsResources;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (void)setItemType:(id)arg1;
- (void)setImportDate:(id)arg1;
- (void)setOriginalOrientation:(long long)arg1;
- (long long)originalOrientation;
- (id)importDate;
- (id)itemType;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (bool)isVideo;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
- (void)setFilename:(id)arg1;
- (id)filename;

@end
