/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject  {
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)_saveRentals;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
