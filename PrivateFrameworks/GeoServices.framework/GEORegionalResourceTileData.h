/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    NSMutableArray *_attributions;
    NSMutableArray *_icons;
}

@property(retain) NSMutableArray * icons;
@property(retain) NSMutableArray * attributions;


- (id)iconAtIndex:(unsigned long long)arg1;
- (void)clearIcons;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (id)attributions;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (void)clearAttributions;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setIcons:(id)arg1;
- (id)icons;

@end
