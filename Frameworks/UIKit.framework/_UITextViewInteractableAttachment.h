/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTextAttachment;

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem  {
    NSTextAttachment *_attachment;
}

@property(retain) NSTextAttachment * attachment;

+ (id)interactableLinkWithAttachment:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (id)actions;
- (id)_image;
- (void)dealloc;
- (void)_saveToCameraRoll;
- (void)_copyImage;
- (id)localizedTitle;
- (id)defaultAction;
- (bool)allowInteraction;
- (id)attachment;
- (void)setAttachment:(id)arg1;

@end
