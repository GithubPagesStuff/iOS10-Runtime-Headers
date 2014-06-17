/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIView<UIKeyboardEmojiPressIndicationDelegate>, UIKeyboardEmojiInputController;

@interface UIKeyboardEmojiSplitCharacterCell : UITableViewCell  {
    NSArray *_characters;
    NSString *_emojiString;
    UIKeyboardEmojiInputController *_inputController;
    UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;
}

@property(retain) NSArray * characters;
@property UIKeyboardEmojiInputController * inputController;
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> * delegate;

+ (id)emojiFontAttributes;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)characters;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setCharacters:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
