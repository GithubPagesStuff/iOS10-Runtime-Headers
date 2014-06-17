/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    unsigned long long _animationID;
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    int _localSearchProviderID;
    int _resultIndex;
    int _sequenceNumber;
    struct { 
        unsigned int animationID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property bool hasBusinessID;
@property unsigned long long businessID;
@property bool hasPlaceID;
@property long long placeID;
@property bool hasLocalSearchProviderID;
@property int localSearchProviderID;
@property bool hasSequenceNumber;
@property int sequenceNumber;
@property bool hasSearchResponseRelativeTimestamp;
@property double searchResponseRelativeTimestamp;
@property bool hasResultIndex;
@property int resultIndex;
@property bool hasAnimationID;
@property unsigned long long animationID;

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;

- (unsigned long long)animationID;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (bool)hasAnimationID;
- (void)setHasAnimationID:(bool)arg1;
- (bool)hasResultIndex;
- (void)setHasResultIndex:(bool)arg1;
- (bool)hasSearchResponseRelativeTimestamp;
- (void)setHasSearchResponseRelativeTimestamp:(bool)arg1;
- (void)setAnimationID:(unsigned long long)arg1;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (long long)placeID;
- (bool)hasPlaceID;
- (void)setHasPlaceID:(bool)arg1;
- (void)setPlaceID:(long long)arg1;
- (unsigned long long)businessID;
- (bool)hasBusinessID;
- (void)setHasBusinessID:(bool)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (int)localSearchProviderID;
- (bool)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (bool)hasSequenceNumber;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)sequenceNumber;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
