/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIColorScheme, SKUIProductImageDataConsumer, SKUINewsstandImageDataConsumer, NSMutableDictionary, SKUIIconDataConsumer;

@interface SKUIItemArtworkContext : NSObject  {
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    SKUIProductImageDataConsumer *_generalImageConsumer;
    SKUIIconDataConsumer *_iconConsumer;
    SKUIProductImageDataConsumer *_letterboxConsumer;
    SKUINewsstandImageDataConsumer *_newsstandConsumer;
    NSMutableDictionary *_placeholders;
    SKUIProductImageDataConsumer *_posterConsumer;
}

@property(retain) SKUIProductImageDataConsumer * generalConsumer;
@property(retain) SKUIIconDataConsumer * iconConsumer;
@property(retain) SKUIProductImageDataConsumer * letterboxConsumer;
@property(retain) SKUINewsstandImageDataConsumer * newsstandConsumer;
@property(retain) SKUIProductImageDataConsumer * posterConsumer;
@property(retain) SKUIColorScheme * colorScheme;
@property(retain) UIColor * backgroundColor;

+ (id)roomContext;
+ (id)lockupContextWithSize:(long long)arg1;
+ (id)wishlistContext;

- (id)posterConsumer;
- (id)newsstandConsumer;
- (id)letterboxConsumer;
- (id)generalConsumer;
- (struct CGSize { double x1; double x2; })largestImageSizeForItems:(id)arg1;
- (id)artworkForItem:(id)arg1;
- (id)iconConsumer;
- (struct CGSize { double x1; double x2; })largestImageSizeForLockups:(id)arg1;
- (id)URLForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSizeForItem:(id)arg1;
- (void)setLetterboxConsumer:(id)arg1;
- (void)setPosterConsumer:(id)arg1;
- (void)setNewsstandConsumer:(id)arg1;
- (void)setGeneralConsumer:(id)arg1;
- (void)setIconConsumer:(id)arg1;
- (id)dataConsumerForItem:(id)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void).cxx_destruct;

@end
