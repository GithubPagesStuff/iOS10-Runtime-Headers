/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, <MKPlaceNearbyAppsViewControllerDelegate>;

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKPlaceViewNearbyAppsCellDelegate> {
    <MKPlaceNearbyAppsViewControllerDelegate> *_nearbyAppsDelegate;
    NSArray *_storeItems;
}

@property <MKPlaceNearbyAppsViewControllerDelegate> * nearbyAppsDelegate;
@property(retain) NSArray * storeItems;


- (id)nearbyAppsDelegate;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (id)storeItems;
- (void)setStoreItems:(id)arg1;
- (void)setNearbyAppsDelegate:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
