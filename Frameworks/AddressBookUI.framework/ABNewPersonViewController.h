/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonViewControllerHelper, ABPersonTableViewDataSource, <ABPresenterDelegate>, CNContact, _UIAccessDeniedView, ABContactViewController, <ABNewPersonViewControllerDelegate>, <ABStyleProvider>, ABContactsFilter;

@interface ABNewPersonViewController : UIViewController  {
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
    bool_isRealViewLoaded;
    ABPersonTableViewDataSource *_dataSource;
    _UIAccessDeniedView *_accessDeniedView;
    void *_parentSource;
    CNContact *_mergeContact;
    ABContactViewController *_contactViewController;
    <ABPresenterDelegate> *_presentingDelegate;
}

@property <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property void* parentGroup;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property void* parentSource;
@property(retain) CNContact * mergeContact;
@property bool savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(retain) ABContactsFilter * parentContactsFilter;
@property(readonly) ABContactViewController * contactViewController;
@property <ABPresenterDelegate> * presentingDelegate;
@property bool showsCancelButton;
@property(readonly) _UIAccessDeniedView * accessDeniedView;
@property bool isRealViewLoaded;


- (void)setDisplayedUIPerson:(id)arg1;
- (void)attemptSaveAndTellDelegate:(bool)arg1;
- (id)displayedUIPerson;
- (void*)recordForNewPerson;
- (void)saveAndTellDelegate:(bool)arg1;
- (void)savePerson:(id)arg1;
- (void)setParentContactsFilter:(id)arg1;
- (id)parentContactsFilter;
- (id)helper;
- (bool)savesNewContactOnSuspend;
- (id)newPersonViewDelegate;
- (id)mergeContact;
- (void*)parentSource;
- (void)setIsRealViewLoaded:(bool)arg1;
- (bool)isRealViewLoaded;
- (void*)parentGroup;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)accessChanged;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setParentSource:(void*)arg1;
- (void)setParentGroup:(void*)arg1;
- (id)accessDeniedView;
- (void*)displayedPerson;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setPresentingDelegate:(id)arg1;
- (id)presentingDelegate;
- (void)setMergeContact:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (id)contactViewController;
- (void)setDisplayedPerson:(void*)arg1;
- (int)abViewControllerType;
- (bool)supportedInterfaceOrientation:(long long)arg1;
- (void)updateNavigationButtons;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)save:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)cancel:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (bool)showsCancelButton;
- (void)setShowsCancelButton:(bool)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (bool)_allowsAutorotation;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;

@end
