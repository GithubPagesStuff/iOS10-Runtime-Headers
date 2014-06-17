/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    int _comparisonType;
    NSString *_property;
    MPPMediaPredicateValue *_value;
    struct { 
        unsigned int comparisonType : 1; 
    } _has;
}

@property(readonly) bool hasProperty;
@property(retain) NSString * property;
@property(readonly) bool hasValue;
@property(retain) MPPMediaPredicateValue * value;
@property bool hasComparisonType;
@property int comparisonType;


- (void)copyTo:(id)arg1;
- (int)comparisonType;
- (void)setHasComparisonType:(bool)arg1;
- (bool)hasComparisonType;
- (bool)hasValue;
- (bool)hasProperty;
- (void)setComparisonType:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setProperty:(id)arg1;
- (id)property;
- (id)value;
- (void)setValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
