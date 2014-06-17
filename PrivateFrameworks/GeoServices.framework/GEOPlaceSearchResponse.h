/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    double _turnaroundTime;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    struct { 
        unsigned int turnaroundTime : 1; 
        unsigned int statusCodeInfo : 1; 
    } _has;
}

@property int status;
@property(retain) NSMutableArray * placeResults;
@property(readonly) bool hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * suggestionEntryLists;
@property(readonly) bool hasSuggestionMetadata;
@property(retain) NSData * suggestionMetadata;
@property(retain) NSMutableArray * namedFeatures;
@property bool hasStatusCodeInfo;
@property int statusCodeInfo;
@property bool hasTurnaroundTime;
@property double turnaroundTime;


- (void)_geoMapItemsWithTraits:(id)arg1 handler:(id)arg2;
- (double)turnaroundTime;
- (int)statusCodeInfo;
- (id)suggestionMetadata;
- (id)suggestionEntryLists;
- (id)placeResults;
- (bool)hasTurnaroundTime;
- (void)setHasTurnaroundTime:(bool)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (bool)hasStatusCodeInfo;
- (void)setHasStatusCodeInfo:(bool)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (bool)hasSuggestionMetadata;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (void)clearSuggestionEntryLists;
- (unsigned long long)suggestionEntryListsCount;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (void)clearPlaceResults;
- (unsigned long long)placeResultsCount;
- (void)addNamedFeatures:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (id)namedFeatures;
- (void)clearNamedFeatures;
- (unsigned long long)namedFeaturesCount;
- (void)setNamedFeatures:(id)arg1;
- (id)mapRegion;
- (bool)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
