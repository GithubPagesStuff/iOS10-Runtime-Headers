/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject  {
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *key;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } stackKey[16];
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } *keyFormat;
    NSData *assetData;
    TDRenditionSpec *renditionSpec;
}

@property(retain,readonly) TDRenditionSpec * renditionSpec;
@property(retain,readonly) NSData * assetData;


- (id)assetData;
- (id)renditionSpec;
- (id)initWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 keyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4;
- (long long)compare:(id)arg1;
- (void)dealloc;

@end
