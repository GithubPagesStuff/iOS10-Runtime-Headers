/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData *_smartCriteria;
    bool_dynamic;
    bool_enabledItemsOnly;
    bool_filtered;
    bool_limited;
    bool_reverseLimitOrder;
    struct { 
        unsigned int evaluationOrder : 1; 
        unsigned int limitKind : 1; 
        unsigned int limitOrder : 1; 
        unsigned int limitValue : 1; 
        unsigned int dynamic : 1; 
        unsigned int enabledItemsOnly : 1; 
        unsigned int filtered : 1; 
        unsigned int limited : 1; 
        unsigned int reverseLimitOrder : 1; 
    } _has;
}

@property bool hasDynamic;
@property bool dynamic;
@property bool hasFiltered;
@property bool filtered;
@property bool hasLimited;
@property bool limited;
@property bool hasLimitKind;
@property int limitKind;
@property bool hasEvaluationOrder;
@property unsigned int evaluationOrder;
@property bool hasLimitOrder;
@property unsigned int limitOrder;
@property bool hasLimitValue;
@property unsigned int limitValue;
@property bool hasEnabledItemsOnly;
@property bool enabledItemsOnly;
@property bool hasReverseLimitOrder;
@property bool reverseLimitOrder;
@property(readonly) bool hasSmartCriteria;
@property(retain) NSData * smartCriteria;


- (void)copyTo:(id)arg1;
- (id)smartCriteria;
- (bool)reverseLimitOrder;
- (bool)enabledItemsOnly;
- (unsigned int)limitOrder;
- (unsigned int)evaluationOrder;
- (int)limitKind;
- (bool)limited;
- (bool)filtered;
- (bool)dynamic;
- (bool)hasSmartCriteria;
- (bool)hasReverseLimitOrder;
- (void)setHasReverseLimitOrder:(bool)arg1;
- (void)setReverseLimitOrder:(bool)arg1;
- (bool)hasEnabledItemsOnly;
- (void)setHasEnabledItemsOnly:(bool)arg1;
- (void)setEnabledItemsOnly:(bool)arg1;
- (bool)hasLimitValue;
- (void)setHasLimitValue:(bool)arg1;
- (void)setLimitValue:(unsigned int)arg1;
- (bool)hasLimitOrder;
- (void)setHasLimitOrder:(bool)arg1;
- (void)setLimitOrder:(unsigned int)arg1;
- (bool)hasEvaluationOrder;
- (void)setHasEvaluationOrder:(bool)arg1;
- (void)setEvaluationOrder:(unsigned int)arg1;
- (bool)hasLimitKind;
- (void)setHasLimitKind:(bool)arg1;
- (void)setLimitKind:(int)arg1;
- (bool)hasLimited;
- (void)setHasLimited:(bool)arg1;
- (void)setLimited:(bool)arg1;
- (bool)hasFiltered;
- (void)setHasFiltered:(bool)arg1;
- (void)setFiltered:(bool)arg1;
- (bool)hasDynamic;
- (void)setHasDynamic:(bool)arg1;
- (void)setSmartCriteria:(id)arg1;
- (unsigned int)limitValue;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setDynamic:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
