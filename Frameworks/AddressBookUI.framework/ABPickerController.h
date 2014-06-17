/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSArray, UITableViewController, NSIndexPath, <ABPickerControllerDelegate>;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    bool_allowsCustomItems;
    NSString *_selectedItem;
    NSArray *_builtinItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
}

@property(retain) NSString * selectedItem;
@property <ABPickerControllerDelegate> * delegate;
@property(copy) NSArray * builtinItems;
@property(copy) NSArray * customItems;
@property bool allowsCustomItems;
@property(copy) NSString * itemLocalizationKey;
@property(retain) UITableViewController * tableViewController;
@property(retain) NSIndexPath * selectedIndexPath;


- (id)selectedIndexPath;
- (void)setItemLocalizationKey:(id)arg1;
- (void)customLabelUpdated:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)builtinItems;
- (id)customItems;
- (void)donePicker:(id)arg1;
- (bool)allowsCustomItems;
- (id)itemLocalizationKey;
- (void)removeCustomItem:(id)arg1;
- (void)setAllowsCustomItems:(bool)arg1;
- (void)setCustomItems:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)setBuiltinItems:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)tableViewController;
- (id)_itemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
