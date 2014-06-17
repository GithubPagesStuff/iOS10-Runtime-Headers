/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKTextElement, UIColor, IKBackgroundElement, NSArray, IKLockupElement;

@interface IKDocumentBannerElement : IKViewElement  {
    bool_fixed;
}

@property(retain,readonly) IKTextElement * title;
@property(retain,readonly) IKTextElement * subtitle;
@property(retain,readonly) IKBackgroundElement * background;
@property(readonly) UIColor * backgroundColor;
@property(getter=isFixed,readonly) bool fixed;
@property(retain,readonly) NSArray * buttons;
@property(retain,readonly) IKLockupElement * lockup;


- (bool)isFixed;
- (id)lockup;
- (bool)fixed;
- (id)title;
- (id)backgroundColor;
- (id)buttons;
- (id)background;
- (id)subtitle;

@end
