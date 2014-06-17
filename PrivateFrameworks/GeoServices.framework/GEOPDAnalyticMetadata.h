/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_osVersion;
    int _requestSource;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    bool_isFromApi;
    bool_isInternalInstall;
    bool_isInternalTool;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int requestSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int isFromApi : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int isInternalTool : 1; 
    } _has;
}

@property(readonly) bool hasAppIdentifier;
@property(retain) NSString * appIdentifier;
@property(readonly) bool hasAppMajorVersion;
@property(retain) NSString * appMajorVersion;
@property(readonly) bool hasAppMinorVersion;
@property(retain) NSString * appMinorVersion;
@property(readonly) bool hasHardwareModel;
@property(retain) NSString * hardwareModel;
@property(readonly) bool hasOsVersion;
@property(retain) NSString * osVersion;
@property bool hasIsInternalTool;
@property bool isInternalTool;
@property bool hasIsInternalInstall;
@property bool isInternalInstall;
@property bool hasSessionId;
@property struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property bool hasSequenceNumber;
@property unsigned int sequenceNumber;
@property bool hasRequestSource;
@property int requestSource;
@property bool hasIsFromApi;
@property bool isFromApi;
@property(retain) NSMutableArray * serviceTags;


- (bool)isFromApi;
- (int)requestSource;
- (bool)isInternalTool;
- (bool)hasIsFromApi;
- (void)setHasIsFromApi:(bool)arg1;
- (void)setIsFromApi:(bool)arg1;
- (bool)hasRequestSource;
- (void)setHasRequestSource:(bool)arg1;
- (void)setRequestSource:(int)arg1;
- (bool)hasIsInternalInstall;
- (void)setHasIsInternalInstall:(bool)arg1;
- (bool)hasIsInternalTool;
- (void)setHasIsInternalTool:(bool)arg1;
- (void)setIsInternalTool:(bool)arg1;
- (bool)hasOsVersion;
- (bool)hasAppIdentifier;
- (id)hardwareModel;
- (id)appMinorVersion;
- (id)appMajorVersion;
- (bool)hasHardwareModel;
- (bool)hasAppMinorVersion;
- (bool)hasAppMajorVersion;
- (void)setHardwareModel:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (id)osVersion;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)appIdentifier;
- (bool)hasSessionId;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAppIdentifier:(id)arg1;
- (id)serviceTags;
- (bool)hasSequenceNumber;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (void)clearServiceTags;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)sequenceNumber;
- (bool)isInternalInstall;
- (void)setIsInternalInstall:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithTraits:(id)arg1;

@end
