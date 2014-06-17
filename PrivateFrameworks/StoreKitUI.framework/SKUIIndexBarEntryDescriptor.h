/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, SKUIArtwork, NSAttributedString;

@interface SKUIIndexBarEntryDescriptor : NSObject  {
    long long _entryDescriptorType;
    SKUIArtwork *_artwork;
    NSAttributedString *_attributedString;
    UIImage *_image;
    long long _visibilityPriority;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentEdgeInsets;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property long long entryDescriptorType;
@property(retain) SKUIArtwork * artwork;
@property(copy) NSAttributedString * attributedString;
@property(retain) UIImage * image;
@property struct CGSize { double x1; double x2; } size;
@property long long visibilityPriority;

+ (id)placeholderEntryDescriptorWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)entryDescriptorWithImage:(id)arg1;
+ (id)entryDescriptorWithAttributedString:(id)arg1;
+ (id)entryDescriptorWithArtwork:(id)arg1;

- (void)setEntryDescriptorType:(long long)arg1;
- (void)setVisibilityPriority:(long long)arg1;
- (long long)visibilityPriority;
- (long long)entryDescriptorType;
- (void)setArtwork:(id)arg1;
- (id)artwork;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAttributedString:(id)arg1;
- (id)attributedString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })size;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
