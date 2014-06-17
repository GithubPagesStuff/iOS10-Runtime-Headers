/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _muids;
    int _resultProviderId;
    struct { 
        unsigned int resultProviderId : 1; 
    } _has;
}

@property bool hasResultProviderId;
@property int resultProviderId;
@property(readonly) unsigned long long muidsCount;
@property(readonly) unsigned long long* muids;


- (id)initWithMUIDs:(id)arg1;
- (void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)muids;
- (void)addMuid:(unsigned long long)arg1;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (void)clearMuids;
- (unsigned long long)muidsCount;
- (int)resultProviderId;
- (bool)hasResultProviderId;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setResultProviderId:(int)arg1;
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
