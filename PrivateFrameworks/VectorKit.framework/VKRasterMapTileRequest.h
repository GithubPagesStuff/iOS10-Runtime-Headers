/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLocale;

@interface VKRasterMapTileRequest : NSObject <NSCopying> {
    unsigned int _scale;
    unsigned int _tileGroupID;
    long long _mapType;
    NSLocale *_locale;
    struct VKRasterTileKey { 
        unsigned int x; 
        unsigned int y; 
        unsigned int z; 
        unsigned int pointSize; 
    } _tileKey;
}

@property struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } tileKey;
@property long long mapType;
@property unsigned int scale;
@property(retain) NSLocale * locale;
@property unsigned int tileGroupID;
@property(readonly) const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* tileKeyPtr;
@property(readonly) bool isInvalid;
@property(readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } tk;
@property(readonly) struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } cacheKey;


- (void)setTileGroupID:(unsigned int)arg1;
- (unsigned int)tileGroupID;
- (void)isReallyInvalid:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })tk;
- (const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)tileKeyPtr;
- (bool)isInvalid;
- (void)setTileKey:(struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })tileKey;
- (long long)mapType;
- (void)setMapType:(long long)arg1;
- (void)setScale:(unsigned int)arg1;
- (id)init;
- (id)locale;
- (void)setLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)scale;
- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cacheKey;

@end
