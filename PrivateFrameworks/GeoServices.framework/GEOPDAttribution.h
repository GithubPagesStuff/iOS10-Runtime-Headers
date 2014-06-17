/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
}

@property(readonly) bool hasVendorId;
@property(retain) NSString * vendorId;
@property(readonly) bool hasExternalItemId;
@property(retain) NSString * externalItemId;
@property(readonly) bool hasExternalComponentId;
@property(retain) NSString * externalComponentId;
@property(retain) NSMutableArray * attributionUrls;

+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;

- (id)externalComponentId;
- (bool)hasExternalComponentId;
- (bool)hasExternalItemId;
- (bool)hasVendorId;
- (id)attributionUrlAtIndex:(unsigned long long)arg1;
- (void)clearAttributionUrls;
- (void)addAttributionUrl:(id)arg1;
- (void)setAttributionUrls:(id)arg1;
- (void)setExternalComponentId:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)externalItemId;
- (id)attributionUrls;
- (unsigned long long)attributionUrlsCount;
- (id)_attributionKey;
- (id)vendorId;
- (bool)_isYelp;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
