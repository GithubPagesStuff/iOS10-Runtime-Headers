/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMailComposeRecipientView, NSMutableIndexSet, NSArray, NSMutableArray, UITableView;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableArray *_recipients;
    MFMailComposeRecipientView *_recipientView;
}

@property(readonly) NSArray * recipients;
@property(retain) MFMailComposeRecipientView * recipientView;


- (id)recipientView;
- (void)_dismissAndAddSelectedContacts;
- (void)_didTapDoneButton:(id)arg1;
- (void)setRecipientView:(id)arg1;
- (id)initWithRecentComposeRecipients:(id)arg1;
- (id)recipients;
- (void)dealloc;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
