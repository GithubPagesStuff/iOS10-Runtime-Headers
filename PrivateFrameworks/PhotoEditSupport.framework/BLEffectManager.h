/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLEffectManager : NSObject  {
}

+ (id)effectManager;
+ (void)invertContext:(struct CGContext { }*)arg1;
+ (void)fillContext:(struct CGContext { }*)arg1 withColor:(id)arg2;
+ (struct CGContext { }*)newContextFromContext:(struct CGContext { }*)arg1;
+ (struct CGContext { }*)newContext:(struct CGContext { }*)arg1 withSaturation:(float)arg2;
+ (struct CGContext { }*)newContext:(struct CGContext { }*)arg1 pixelOperation:(id)arg2;
+ (void)performLineBlock:(id)arg1 onContext:(struct CGContext { }*)arg2;
+ (struct CGImage { }*)newBrushImageRefWithSize:(float)arg1 softness:(float)arg2 brightness:(float)arg3;
+ (void)performBlock:(id)arg1 onContext:(struct CGContext { }*)arg2;
+ (struct CGContext { }*)newContext:(struct CGContext { }*)arg1 lineOperation:(id)arg2;
+ (void)performLineBlock:(id)arg1 fromContext:(struct CGContext { }*)arg2 toContext:(struct CGContext { }*)arg3;
+ (void)performBlock:(id)arg1 fromContext:(struct CGContext { }*)arg2 toContext:(struct CGContext { }*)arg3;
+ (struct CGContext { }*)newGrayscaleContextWithSize:(struct CGSize { double x1; double x2; })arg1 clear:(bool)arg2;
+ (struct CGContext { }*)newContextWithSize:(struct CGSize { double x1; double x2; })arg1 clear:(bool)arg2 alpha:(bool)arg3;
+ (struct CGContext { }*)newContextWithSize:(struct CGSize { double x1; double x2; })arg1 clear:(bool)arg2;


@end
