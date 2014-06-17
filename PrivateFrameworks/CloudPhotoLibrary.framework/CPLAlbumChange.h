/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {
    bool_albumSortAscending;
    unsigned long long _albumType;
    NSString *_name;
    long long _position;
    NSString *_parentIdentifier;
    unsigned long long _albumSortType;
}

@property unsigned long long albumType;
@property(copy) NSString * name;
@property long long position;
@property(copy) NSString * parentIdentifier;
@property unsigned long long albumSortType;
@property bool albumSortAscending;


- (bool)albumSortAscending;
- (unsigned long long)albumSortType;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setParentIdentifier:(id)arg1;
- (id)parentIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)identifiersForMapping;
- (id)propertiesDescription;
- (void)setAlbumSortAscending:(bool)arg1;
- (void)setAlbumSortType:(unsigned long long)arg1;
- (void)setAlbumType:(unsigned long long)arg1;
- (unsigned long long)albumType;
- (void)setPosition:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
- (long long)position;

@end
