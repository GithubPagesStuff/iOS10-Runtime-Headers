/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIVisualEffectLayerConfig, NSMutableArray, NSArray;

@interface _UIVisualEffectConfig : NSObject  {
    NSMutableArray *_layerConfigs;
    _UIVisualEffectLayerConfig *_contentConfig;
}

@property(readonly) _UIVisualEffectLayerConfig * contentConfig;
@property(readonly) NSArray * layerConfigs;

+ (id)configWithLayerConfigs:(id)arg1;
+ (id)configWithContentConfig:(id)arg1;

- (void)dealloc;
- (id)contentConfig;
- (id)layerConfigs;
- (void)enumerateLayerConfigs:(id)arg1;
- (void)addLayerConfig:(id)arg1;

@end
