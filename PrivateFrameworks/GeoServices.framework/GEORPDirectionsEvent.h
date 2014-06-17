/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteId;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int occurrenceResponseIndex : 1; 
        unsigned int occurrenceStepIndex : 1; 
        unsigned int switchedToResponseIndex : 1; 
        unsigned int synthesizedStepManeuverType : 1; 
        unsigned int type : 1; 
    } _has;
}

@property bool hasType;
@property int type;
@property bool hasOccurrenceResponseIndex;
@property unsigned int occurrenceResponseIndex;
@property(readonly) bool hasOccurrenceRouteId;
@property(retain) NSData * occurrenceRouteId;
@property bool hasOccurrenceStepIndex;
@property unsigned int occurrenceStepIndex;
@property(readonly) bool hasOccurrenceLatLng;
@property(retain) GEOLatLng * occurrenceLatLng;
@property bool hasSwitchedToResponseIndex;
@property unsigned int switchedToResponseIndex;
@property(readonly) bool hasSwitchedToRouteId;
@property(retain) NSData * switchedToRouteId;
@property bool hasSynthesizedStepManeuverType;
@property int synthesizedStepManeuverType;
@property(readonly) bool hasSynthesizedStepInstructions;
@property(retain) NSString * synthesizedStepInstructions;
@property(readonly) bool hasErrorDomain;
@property(retain) NSString * errorDomain;
@property bool hasErrorCode;
@property long long errorCode;


- (id)synthesizedStepInstructions;
- (int)synthesizedStepManeuverType;
- (id)switchedToRouteId;
- (unsigned int)switchedToResponseIndex;
- (id)occurrenceLatLng;
- (unsigned int)occurrenceStepIndex;
- (id)occurrenceRouteId;
- (unsigned int)occurrenceResponseIndex;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (bool)hasErrorDomain;
- (bool)hasSynthesizedStepInstructions;
- (bool)hasSynthesizedStepManeuverType;
- (void)setHasSynthesizedStepManeuverType:(bool)arg1;
- (void)setSynthesizedStepManeuverType:(int)arg1;
- (bool)hasSwitchedToRouteId;
- (bool)hasSwitchedToResponseIndex;
- (void)setHasSwitchedToResponseIndex:(bool)arg1;
- (void)setSwitchedToResponseIndex:(unsigned int)arg1;
- (bool)hasOccurrenceLatLng;
- (bool)hasOccurrenceStepIndex;
- (void)setHasOccurrenceStepIndex:(bool)arg1;
- (void)setOccurrenceStepIndex:(unsigned int)arg1;
- (bool)hasOccurrenceRouteId;
- (bool)hasOccurrenceResponseIndex;
- (void)setHasOccurrenceResponseIndex:(bool)arg1;
- (void)setOccurrenceResponseIndex:(unsigned int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setSynthesizedStepInstructions:(id)arg1;
- (void)setSwitchedToRouteId:(id)arg1;
- (void)setOccurrenceLatLng:(id)arg1;
- (void)setOccurrenceRouteId:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)hasType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (long long)errorCode;
- (id)errorDomain;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
