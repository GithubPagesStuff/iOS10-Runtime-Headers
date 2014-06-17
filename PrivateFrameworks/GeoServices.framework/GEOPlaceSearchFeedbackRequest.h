/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property bool hasTimestamp;
@property double timestamp;
@property bool hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property bool hasBusinessID;
@property long long businessID;
@property bool hasFeedbackType;
@property int feedbackType;
@property bool hasNumberOfResults;
@property int numberOfResults;
@property bool hasPositionInResults;
@property int positionInResults;
@property bool hasSequenceNumber;
@property int sequenceNumber;
@property bool hasLocalSearchProviderID;
@property int localSearchProviderID;


- (int)numberOfResults;
- (bool)hasSessionGUID;
- (int)positionInResults;
- (int)feedbackType;
- (long long)businessID;
- (bool)hasPositionInResults;
- (void)setHasPositionInResults:(bool)arg1;
- (void)setPositionInResults:(int)arg1;
- (bool)hasNumberOfResults;
- (void)setHasNumberOfResults:(bool)arg1;
- (void)setNumberOfResults:(int)arg1;
- (bool)hasFeedbackType;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setFeedbackType:(int)arg1;
- (bool)hasBusinessID;
- (void)setHasBusinessID:(bool)arg1;
- (void)setBusinessID:(long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setHasSessionGUID:(bool)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (int)localSearchProviderID;
- (bool)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (bool)hasSequenceNumber;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(int)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (int)sequenceNumber;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
