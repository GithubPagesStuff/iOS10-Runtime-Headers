/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _days;
    NSMutableArray *_timeRanges;
}

@property(readonly) unsigned long long daysCount;
@property(readonly) int* days;
@property(retain) NSMutableArray * timeRanges;


- (void)setTimeRanges:(id)arg1;
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (void)addDay:(int)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (id)initWithPlaceDataHours:(id)arg1;
- (void)addTimeRange:(id)arg1;
- (unsigned long long)timeRangesCount;
- (id)timeRanges;
- (void)setDays:(int*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)daysCount;
- (int*)days;
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
