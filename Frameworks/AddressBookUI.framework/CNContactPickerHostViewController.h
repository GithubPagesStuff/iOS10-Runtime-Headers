/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <NSCopying>, NSExtension, <CNContactPickerContentDelegate>;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {
    void *_addressBook;
    <CNContactPickerContentDelegate> *_delegate;
    <NSCopying> *_currentRequestIdentifier;
    NSExtension *_extension;
}

@property(retain) <NSCopying> * currentRequestIdentifier;
@property(retain) NSExtension * extension;
@property <CNContactPickerContentDelegate> * delegate;
@property void* addressBook;

+ (id)contextForIdentifier:(id)arg1;
+ (id)contactPickerExtension;
+ (bool)getViewController:(id)arg1;

- (id)currentRequestIdentifier;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)pickerDidSelectContactWithRecordID:(int)arg1 vCardData:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4;
- (void)pickerDidCancel;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)extension;
- (void)setExtension:(id)arg1;

@end
