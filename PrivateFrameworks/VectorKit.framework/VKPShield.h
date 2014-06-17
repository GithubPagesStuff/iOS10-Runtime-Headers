/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPGenericShieldStyleInfo, NSString, NSMutableArray;

@interface VKPShield : PBCodable <NSCopying> {
    VKPGenericShieldStyleInfo *_genericShieldStyleInfo;
    NSString *_identifier;
    NSMutableArray *_variants;
}

@property(retain) NSString * identifier;
@property(retain) NSMutableArray * variants;
@property(readonly) bool hasGenericShieldStyleInfo;
@property(retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;


- (id)variantsAtIndex:(unsigned long long)arg1;
- (void)clearVariants;
- (unsigned long long)variantsCount;
- (void)addVariants:(id)arg1;
- (void)setGenericShieldStyleInfo:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)genericShieldStyleInfo;
- (bool)hasGenericShieldStyleInfo;
- (id)variants;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
