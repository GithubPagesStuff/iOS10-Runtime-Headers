/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSURL, NSString, NSData;

@interface MCWebClipPayload : MCPayload  {
    NSURL *_URL;
    NSString *_label;
    NSData *_iconData;
    bool_isRemovable;
    bool_precomposed;
    bool_fullScreen;
    NSString *_savedIdentifier;
}

@property(retain,readonly) NSURL * URL;
@property(retain,readonly) NSString * label;
@property(retain,readonly) NSData * iconData;
@property(readonly) bool isRemovable;
@property(readonly) bool precomposed;
@property(readonly) bool fullScreen;
@property(retain) NSString * savedIdentifier;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setSavedIdentifier:(id)arg1;
- (bool)precomposed;
- (bool)isRemovable;
- (id)savedIdentifier;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValuePairs;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)title;
- (id)label;
- (id)iconData;
- (id)URL;
- (void).cxx_destruct;
- (id)description;
- (bool)fullScreen;

@end
