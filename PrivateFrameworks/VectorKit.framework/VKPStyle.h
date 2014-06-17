/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, NSData, VKPStyleProperties, NSMutableArray;

@interface VKPStyle : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _inherits;
    NSMutableArray *_attributes;
    NSData *_contents;
    NSString *_name;
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(readonly) unsigned long long inheritsCount;
@property(readonly) unsigned int* inherits;
@property(retain) NSMutableArray * attributes;
@property(readonly) bool hasProperties;
@property(retain) VKPStyleProperties * properties;
@property(retain) NSMutableArray * zooms;
@property(readonly) bool hasContents;
@property(retain) NSData * contents;
@property(readonly) bool hasName;
@property(retain) NSString * name;


- (id)zooms;
- (bool)hasProperties;
- (void)setInherits:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)inherits;
- (id)zoomsAtIndex:(unsigned long long)arg1;
- (void)clearZooms;
- (unsigned long long)zoomsCount;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (void)addInherit:(unsigned int)arg1;
- (unsigned int)inheritAtIndex:(unsigned long long)arg1;
- (void)clearInherits;
- (unsigned long long)inheritsCount;
- (void)addZooms:(id)arg1;
- (void)addAttributes:(id)arg1;
- (void)setZooms:(id)arg1;
- (bool)hasContents;
- (void)clearAttributes;
- (unsigned long long)attributesCount;
- (bool)hasName;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)attributes;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)setAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)setName:(id)arg1;
- (id)properties;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
