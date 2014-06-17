/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString, NSArray, NSURL, UIImage;

@interface UIPasteboard : NSObject  {
    NSString *_name;
}

@property(copy) NSString * string;
@property(copy) NSArray * strings;
@property(copy) NSURL * URL;
@property(copy) NSArray * URLs;
@property(copy) UIImage * image;
@property(copy) NSArray * images;
@property(copy) UIColor * color;
@property(copy) NSArray * colors;
@property(readonly) NSString * name;
@property(getter=isPersistent) bool persistent;
@property(readonly) long long changeCount;
@property(readonly) long long numberOfItems;
@property(copy) NSArray * items;

+ (id)generalPasteboard;
+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)_printPasteboard;
+ (id)_findPasteboard;

- (id)items;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (long long)numberOfItems;
- (void)setItems:(id)arg1;
- (void)addItems:(id)arg1;
- (long long)changeCount;
- (id)colors;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (void)setString:(id)arg1;
- (id)name;
- (id)string;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (id)strings;
- (void)setStrings:(id)arg1;
- (void)setPersistent:(bool)arg1;
- (bool)isPersistent;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
- (void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2;
- (void)_pasteboardChanged:(id)arg1;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (id)_initWithName:(id)arg1 system:(bool)arg2 create:(bool)arg3;
- (void)setImages:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)images;
- (void)setColors:(id)arg1;
- (void)mf_addPasteboardRepresentationsForAttachments:(id)arg1;
- (id)mf_getAttachmentsPasteboardRepresentations;
- (void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg1;
- (bool)pl_containsAssets;
- (id)pl_assetsInPhotoLibrary:(id)arg1;
- (void)pl_setAsset:(id)arg1;
- (void)pl_setAssets:(id)arg1;

@end
