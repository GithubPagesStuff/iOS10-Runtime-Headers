/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPMatchingTree, VKPGlobalProperties, NSMutableArray;

@interface VKPSheet : PBCodable <NSCopying> {
    VKPGlobalProperties *_globalProperties;
    NSMutableArray *_matchingGraphNodes;
    VKPMatchingTree *_matchingTree;
    unsigned int _matchingTreeVersion;
    NSMutableArray *_styles;
    unsigned int _version;
    struct { 
        unsigned int matchingTreeVersion : 1; 
        unsigned int version : 1; 
    } _has;
}

@property(retain) NSMutableArray * styles;
@property bool hasVersion;
@property unsigned int version;
@property(readonly) bool hasGlobalProperties;
@property(retain) VKPGlobalProperties * globalProperties;
@property(readonly) bool hasMatchingTree;
@property(retain) VKPMatchingTree * matchingTree;
@property bool hasMatchingTreeVersion;
@property unsigned int matchingTreeVersion;
@property(retain) NSMutableArray * matchingGraphNodes;


- (id)matchingGraphNodes;
- (unsigned int)matchingTreeVersion;
- (id)matchingTree;
- (id)globalProperties;
- (id)styles;
- (bool)hasMatchingTreeVersion;
- (void)setHasMatchingTreeVersion:(bool)arg1;
- (void)setMatchingTreeVersion:(unsigned int)arg1;
- (bool)hasMatchingTree;
- (bool)hasGlobalProperties;
- (id)matchingGraphNodesAtIndex:(unsigned long long)arg1;
- (void)clearMatchingGraphNodes;
- (unsigned long long)matchingGraphNodesCount;
- (id)styleAtIndex:(unsigned long long)arg1;
- (void)clearStyles;
- (unsigned long long)stylesCount;
- (void)addMatchingGraphNodes:(id)arg1;
- (void)addStyle:(id)arg1;
- (void)setMatchingGraphNodes:(id)arg1;
- (void)setMatchingTree:(id)arg1;
- (void)setGlobalProperties:(id)arg1;
- (void)setStyles:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (bool)hasVersion;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)version;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;

@end
