/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, <ABPropertyActionDelegate>;

@interface ABPropertyAction : ABContactAction  {
    NSArray *_propertyItems;
}

@property <ABPropertyActionDelegate> * delegate;
@property(copy) NSArray * propertyItems;
@property(readonly) bool canPerformAction;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;

- (void)setPropertyItems:(id)arg1;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (bool)canPerformAction;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (id)propertyItems;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;

@end
