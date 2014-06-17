/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUIPerson, UIFont, ABPersonTableViewActionsDelegate, UIView, NSString, <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, ABPersonViewControllerHelper, ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, NSArray, UIImage;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
    id _helper;
    id _reserved;
    bool_allowsContactBlocking;
    bool_allowsOnlyPhoneActions;
    bool_allowsOnlyFaceTimeActions;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
}

@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property bool allowsActions;
@property bool allowsAddingToAddressBook;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property bool allowsConferencing;
@property bool allowsContactBlocking;
@property bool allowsOnlyPhoneActions;
@property bool allowsOnlyFaceTimeActions;
@property bool shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property bool allowsSharing;
@property(readonly) bool canShareContact;
@property bool isLocation;
@property bool badgeEmailPropertiesForMailVIP;
@property(retain) UIView * personHeaderView;
@property bool shouldAlignPersonHeaderViewToImage;
@property bool savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) ABUIPerson * displayedUIPerson;
@property(copy) NSArray * displayedProperties;
@property(copy) NSString * attribution;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)tellHelperToShow:(bool)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)_unselectTable;
- (void)_showCardViewerForIndex:(long long)arg1;
- (id)_viewControllerForCardAtIndex:(long long)arg1;
- (bool)isShowingMultipleVCards;
- (void)_addUnmergedRecords;
- (id)_unmergedAlertSheet;
- (void)_addToExistingContacts;
- (void)_createNewContacts;
- (id)_alertSheet;
- (void)_showUnmergedContactsAlert;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (id)_vCardProperties;
- (id)_forwarder;
- (id)_vCardTable;
- (void)tellHelperToShow:(bool)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
- (id)_unmergedRecords;
- (id)_vCards;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (id)initWithVCardData:(id)arg1;
- (void)setIsLocation:(bool)arg1;
- (bool)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
- (void)setActionShouldPickHighlightedItem:(bool)arg1;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(bool)arg1;
- (bool)shareMessageBodyIsHTML;
- (bool)canShareContact;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (bool)isLocation;
- (id)unknownPersonViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(bool)arg1;
- (bool)badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(bool)arg1;
- (bool)shouldAlignPersonHeaderViewToImage;
- (id)sharingDelegate;
- (void)setAllowsSendingTextMessage:(bool)arg1;
- (bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6;
- (bool)allowsSendingTextMessage;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageDetail;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)reloadImageData;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (id)helper;
- (bool)savesNewContactOnSuspend;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)accessChanged;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void*)displayedPerson;
- (id)actionsDelegate;
- (void)setCustomAppearanceProvider:(id)arg1;
- (id)newActionButton;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsSharing;
- (void)setPrimaryProperty:(int)arg1;
- (bool)allowsActions;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (bool)allowsAddingToAddressBook;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setAlternateName:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (bool)allowsOnlyFaceTimeActions;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (bool)allowsOnlyPhoneActions;
- (int)abViewControllerType;
- (bool)supportedInterfaceOrientation:(long long)arg1;
- (void)updateNavigationButtons;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)messageFont;
- (void)setAttribution:(id)arg1;
- (id)attribution;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)alternateName;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (bool)_allowsAutorotation;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applicationDidResume;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)_mf_initWithRecentGroup:(id)arg1;
- (id)_mf_initWithEmailAddress:(id)arg1;

@end
