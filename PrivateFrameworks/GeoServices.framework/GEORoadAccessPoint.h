/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    int _drivingDirection;
    GEOLatLng *_location;
    int _walkingDirection;
    bool_isApproximate;
    struct { 
        unsigned int drivingDirection : 1; 
        unsigned int walkingDirection : 1; 
        unsigned int isApproximate : 1; 
    } _has;
}

@property(readonly) bool hasLocation;
@property(retain) GEOLatLng * location;
@property bool hasIsApproximate;
@property bool isApproximate;
@property bool hasWalkingDirection;
@property int walkingDirection;
@property bool hasDrivingDirection;
@property int drivingDirection;


- (int)drivingDirection;
- (int)walkingDirection;
- (bool)isApproximate;
- (bool)hasDrivingDirection;
- (void)setHasDrivingDirection:(bool)arg1;
- (bool)hasWalkingDirection;
- (void)setHasWalkingDirection:(bool)arg1;
- (bool)hasIsApproximate;
- (void)setHasIsApproximate:(bool)arg1;
- (void)setIsApproximate:(bool)arg1;
- (void)setWalkingDirection:(int)arg1;
- (void)setDrivingDirection:(int)arg1;
- (bool)hasLocation;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
