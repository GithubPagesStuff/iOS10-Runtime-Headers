/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController;

@interface UIPrintPanelTableViewController : UITableViewController  {
    UIPrintPanelViewController *_printPanelViewController;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _paperRow;
    bool_contactingPrinter;
    bool_printerWarningWasShown;
}


- (void)dealloc;
- (void)_update:(bool)arg1;
- (void)updatePageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateCopies:(id)arg1;
- (void)showContacting;
- (void)setShowContactingPrinter:(bool)arg1;
- (void)clearPrintPanelViewController;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)showCancelButton;
- (void)_updateSize;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
