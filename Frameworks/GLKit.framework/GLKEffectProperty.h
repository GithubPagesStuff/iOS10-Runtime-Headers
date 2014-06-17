/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffect;

@interface GLKEffectProperty : NSObject  {
    int _location;
    char *_nameString;
    struct GLKEffectPropertyPrv { struct GLKBigInt_s {} *x1; struct GLKBigInt_s {} *x2; struct GLKBigInt_s {} *x3; struct GLKBigInt_s {} *x4; id x5; } *_prv;
    unsigned char _masksInitialized;
    char *_vshSource;
    char *_fshSource;
    unsigned long long _dirtyUniforms;
    GLKEffect *_effect;
}

@property int location;
@property char * nameString;
@property char * vshSource;
@property char * fshSource;
@property unsigned long long dirtyUniforms;
@property unsigned char masksInitialized;
@property GLKEffect * effect;

+ (void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)setFshSource:(char *)arg1;
- (char *)fshSource;
- (void)setVshSource:(char *)arg1;
- (char *)vshSource;
- (char *)nameString;
- (void)setMasks;
- (void)setFSHSource:(char *)arg1;
- (void)setVSHSource:(char *)arg1;
- (void)setNameString:(char *)arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMask;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMask;
- (unsigned char)masksInitialized;
- (void)setMasksInitialized:(unsigned char)arg1;
- (void)setShaderBindings;
- (void)initializeMasks;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (unsigned long long)dirtyUniforms;
- (void)setDirtyUniforms:(unsigned long long)arg1;
- (void)dirtyAllUniforms;
- (int)location;
- (void)bind;
- (void)setLocation:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setEffect:(id)arg1;
- (id)effect;

@end
