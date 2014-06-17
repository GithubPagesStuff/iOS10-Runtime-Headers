/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property(retain) NSMutableArray * requestElements;


- (id)requestElements;
- (id)requestElementsAtIndex:(unsigned long long)arg1;
- (void)clearRequestElements;
- (unsigned long long)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)setRequestElements:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
