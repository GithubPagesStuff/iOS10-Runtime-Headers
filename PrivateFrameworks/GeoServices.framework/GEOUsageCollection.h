/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    double _timestamp;
    int _cellWifi;
    NSString *_countryCode;
    int _geoService;
    NSString *_hwMachine;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    bool_sessionIDIsPersistent;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int timestamp : 1; 
        unsigned int cellWifi : 1; 
        unsigned int geoService : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
        unsigned int sessionIDIsPersistent : 1; 
    } _has;
}

@property bool hasGeoService;
@property int geoService;
@property bool hasRequestDataSize;
@property int requestDataSize;
@property bool hasResponseDataSize;
@property int responseDataSize;
@property bool hasResponseTime;
@property int responseTime;
@property bool hasCellWifi;
@property int cellWifi;
@property(readonly) bool hasCountryCode;
@property(retain) NSString * countryCode;
@property bool hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property bool hasTimestamp;
@property double timestamp;
@property(readonly) unsigned long long tileUsagesCount;
@property(readonly) struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* tileUsages;
@property(readonly) bool hasHwMachine;
@property(retain) NSString * hwMachine;
@property bool hasSessionIDIsPersistent;
@property bool sessionIDIsPersistent;


- (id)hwMachine;
- (int)cellWifi;
- (int)responseTime;
- (int)responseDataSize;
- (int)requestDataSize;
- (int)geoService;
- (bool)hasSessionIDIsPersistent;
- (void)setHasSessionIDIsPersistent:(bool)arg1;
- (bool)sessionIDIsPersistent;
- (bool)hasHwMachine;
- (void)setTileUsages:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)tileUsages;
- (bool)hasCellWifi;
- (void)setHasCellWifi:(bool)arg1;
- (bool)hasResponseTime;
- (void)setHasResponseTime:(bool)arg1;
- (bool)hasResponseDataSize;
- (void)setHasResponseDataSize:(bool)arg1;
- (bool)hasRequestDataSize;
- (void)setHasRequestDataSize:(bool)arg1;
- (bool)hasGeoService;
- (void)setHasGeoService:(bool)arg1;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })tileUsageAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileUsagesCount;
- (void)clearTileUsages;
- (void)addTileUsage:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setSessionIDIsPersistent:(bool)arg1;
- (void)setCellWifi:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setGeoService:(int)arg1;
- (void)setHwMachine:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasCountryCode;
- (bool)hasSessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
