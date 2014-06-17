/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOAttributionApp : PBCodable <NSCopying> {
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
}

@property(retain) NSString * appBundleIdentifier;
@property(retain) NSMutableArray * handledSchemes;


- (id)appBundleIdentifier;
- (id)handledSchemes;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (void)clearHandledSchemes;
- (unsigned long long)handledSchemesCount;
- (void)addHandledSchemes:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
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
