/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer, NSDictionary;

@interface CAContext : NSObject  {
}

@property(readonly) unsigned int contextId;
@property(retain) CALayer * layer;
@property struct CGColorSpace { }* colorSpace;
@property(readonly) NSDictionary * options;
@property float level;
@property(getter=isSecure) bool secure;
@property(readonly) bool valid;

+ (id)currentContext;
+ (id)remoteContext;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)localContext;
+ (id)allContexts;
+ (id)remoteContextWithOptions:(id)arg1;
+ (id)localContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;

- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)invalidate;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2;
- (unsigned int)createFencePort;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)orderAbove:(unsigned int)arg1;
- (id)_associatedScreen;
- (void)_setAssociatedScreen:(id)arg1;

@end
