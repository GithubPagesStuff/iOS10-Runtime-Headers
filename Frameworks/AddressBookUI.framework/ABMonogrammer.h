/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, NSString, UIFont, UIImage;

@interface ABMonogrammer : NSObject  {
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    double _innerBorderWidth;
    NSString *_silhouetteImageName;
    long long _monogrammerStyle;
    UIColor *_tintColor;
    bool_textKnockout;
    double _diameter;
    UIColor *_backgroundColor;
    UIFont *_font;
    UIColor *_textColor;
}

@property double diameter;
@property(retain) UIColor * backgroundColor;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property bool textKnockout;


- (bool)textKnockout;
- (double)diameter;
- (id)defaultMonogram;
- (id)maskForMonogram;
- (id)monogramForPerson:(void*)arg1;
- (bool)hasMonogramForPerson:(void*)arg1;
- (id)silhouetteImageName;
- (double)innerBorderWidth;
- (void)setTextKnockout:(bool)arg1;
- (void)setDiameter:(double)arg1;
- (void)monogramsWithTint:(id)arg1;
- (void)monogramsAsFlatImages;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (id)questionMarkMonogram;
- (id)knockoutMaskMonogram;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)monogramForPerson:(void*)arg1 isPersonImage:(bool*)arg2;
- (id)silhouetteMonogram;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithImageData:(struct __CFData { }*)arg1;
- (bool)hasImageOrInitialsForPerson:(void*)arg1;
- (id)_initialsForPerson:(void*)arg1;
- (void)_clearMonogramCache;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)font;
- (id)backgroundColor;
- (id)init;
- (void)dealloc;
- (id)textColor;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;

@end
