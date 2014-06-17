/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString, IKOrdinalElement, IKTextElement, NSArray, IKTextBadgeAttachment, IKImageElement, IKVideoElement, IKButtonElement;

@interface IKColumnItemLockupElement : IKViewElement  {
}

@property(copy,readonly) NSString * columnItemType;
@property(retain,readonly) IKTextElement * title;
@property(retain,readonly) IKTextElement * subtitle;
@property(retain,readonly) IKTextElement * secondarySubtitle;
@property(retain,readonly) IKTextElement * descriptionText;
@property(retain,readonly) IKOrdinalElement * ordinal;
@property(readonly) IKImageElement * image;
@property(readonly) NSArray * images;
@property(readonly) IKTextBadgeAttachment * titleBadge;
@property(readonly) IKTextBadgeAttachment * subtitleBadge;
@property(retain,readonly) IKButtonElement * button;
@property(retain,readonly) IKVideoElement * video;
@property(retain,readonly) NSArray * textElements;
@property(readonly) bool hasSeparator;
@property(readonly) bool isWatchlisted;
@property(readonly) bool onlyVisibleOnColumnHighlight;


- (bool)onlyVisibleOnColumnHighlight;
- (bool)isWatchlisted;
- (id)textElements;
- (id)subtitleBadge;
- (id)titleBadge;
- (id)ordinal;
- (id)secondarySubtitle;
- (void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4;
- (id)columnItemType;
- (id)video;
- (bool)hasSeparator;
- (id)descriptionText;
- (id)title;
- (id)image;
- (id)subtitle;
- (id)images;
- (id)button;

@end
