/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UITableViewCellDeleteConfirmationControl_Legacy : UIControl  {
    NSString *_title;
}

@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) NSString * title;

+ (struct CGSize { double x1; double x2; })defaultSizeForTitle:(id)arg1;
+ (id)_highlightedBackgroundImage;
+ (id)_backgroundImage;

- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)title;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1;

@end
