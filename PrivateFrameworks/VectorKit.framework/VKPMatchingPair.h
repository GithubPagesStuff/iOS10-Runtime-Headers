/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPMatchingTree;

@interface VKPMatchingPair : PBCodable <NSCopying> {
    unsigned long long _attributeValue;
    VKPMatchingTree *_subTree;
}

@property unsigned long long attributeValue;
@property(retain) VKPMatchingTree * subTree;


- (void)setSubTree:(id)arg1;
- (id)subTree;
- (void)setAttributeValue:(unsigned long long)arg1;
- (unsigned long long)attributeValue;
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
