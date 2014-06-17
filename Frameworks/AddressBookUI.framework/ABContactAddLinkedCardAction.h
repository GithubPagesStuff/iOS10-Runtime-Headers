/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPeoplePickerNavigationController, NSObject<ABContactAddLinkedCardActionDelegate>, CNContact;

@interface ABContactAddLinkedCardAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate> {
    CNContact *_chosenContact;
    NSObject<ABContactAddLinkedCardActionDelegate> *_linkedCardActionDelegate;
    ABPeoplePickerNavigationController *_peoplePicker;
    CNContact *_selectedContact;
}

@property(retain) CNContact * chosenContact;
@property NSObject<ABContactAddLinkedCardActionDelegate> * linkedCardActionDelegate;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property(retain) CNContact * selectedContact;


- (void)setLinkedCardActionDelegate:(id)arg1;
- (id)chosenContact;
- (bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)linkedCardActionDelegate;
- (void)peoplePickerLinkButtonTapped;
- (void)setSelectedContact:(id)arg1;
- (id)selectedContact;
- (void)setChosenContact:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;

@end
