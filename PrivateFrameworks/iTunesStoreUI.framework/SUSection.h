/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUClientInterface, NSString, UIImage, NSURL, SUPageSectionGroup, NSMutableDictionary, SUSearchFieldConfiguration, NSArray, SUGradient, UIColor;

@interface SUSection : NSObject  {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_dictionary;
    UIImage *_image;
    UIImage *_moreListImage;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    NSMutableDictionary *_sectionButtonImages;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
}

@property(retain) SUSearchFieldConfiguration * searchFieldConfiguration;
@property(readonly) SUGradient * backgroundGradient;
@property(readonly) long long defaultPNGStyle;
@property(readonly) UIColor * loadingIndicatorColor;
@property(readonly) UIColor * loadingTextColor;
@property(readonly) UIColor * loadingTextShadowColor;
@property(getter=isDefaultSection,readonly) bool defaultSection;
@property(getter=isTransient,readonly) bool transient;
@property(getter=isUsingLocalArtwork,readonly) bool usingLocalArtwork;
@property(readonly) NSString * identifier;
@property(readonly) long long minimumNetworkType;
@property(readonly) SUPageSectionGroup * pageSectionGroup;
@property(readonly) NSString * partnerHeader;
@property(readonly) NSString * title;
@property(readonly) long long type;
@property(readonly) NSURL * url;
@property(readonly) NSString * urlBagKey;
@property(readonly) NSArray * itemImages;
@property(readonly) NSArray * leftSectionButtons;
@property(readonly) NSArray * rightSectionButtons;
@property(retain) UIImage * image;
@property(retain) UIImage * moreListImage;
@property(retain) UIImage * selectedImage;
@property(retain) UIImage * selectedMoreListImage;


- (void)setSelectedMoreListImage:(id)arg1;
- (id)searchFieldConfiguration;
- (void)setMoreListImage:(id)arg1;
- (void)setSectionButtonImage:(id)arg1 forTag:(long long)arg2;
- (id)selectedMoreListImage;
- (id)rightSectionButtons;
- (id)pageSectionGroup;
- (long long)minimumNetworkType;
- (id)loadingTextShadowColor;
- (id)loadingTextColor;
- (id)loadingIndicatorColor;
- (bool)loadFromDictionary:(id)arg1 searchField:(id)arg2;
- (id)leftSectionButtons;
- (bool)isUsingLocalArtwork;
- (id)imageForSectionButtonWithTag:(long long)arg1;
- (long long)defaultPNGStyle;
- (long long)_typeForString:(id)arg1;
- (long long)_minimumNetworkTypeFromDictionary:(id)arg1;
- (id)_colorForKey:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (id)_sectionButtonsForKey:(id)arg1;
- (id)_imageBaseName;
- (id)urlBagKey;
- (bool)isDefaultSection;
- (id)initWithClientInterface:(id)arg1;
- (id)initWithClientInterface:(id)arg1 sectionType:(long long)arg2 defaultPNGStyle:(long long)arg3;
- (id)itemImages;
- (id)partnerHeader;
- (bool)isTransient;
- (id)url;
- (id)identifier;
- (id)title;
- (void)setImage:(id)arg1;
- (id)image;
- (id)valueForProperty:(id)arg1;
- (long long)type;
- (void)dealloc;
- (id)description;
- (id)backgroundGradient;
- (void)setSelectedImage:(id)arg1;
- (id)selectedImage;
- (id)moreListImage;

@end
