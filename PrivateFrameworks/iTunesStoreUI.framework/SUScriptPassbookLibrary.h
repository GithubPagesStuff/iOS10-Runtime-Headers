/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class PKPassLibrary, NSArray;

@interface SUScriptPassbookLibrary : SUScriptObject  {
    PKPassLibrary *_passLibrary;
}

@property(readonly) NSArray * passes;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)initWithPassLibrary:(id)arg1;
- (id)passes;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;

@end
