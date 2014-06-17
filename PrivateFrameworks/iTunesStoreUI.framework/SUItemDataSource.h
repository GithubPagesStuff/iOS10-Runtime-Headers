/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemDataSource : NSObject  {
}

+ (void)setSharedDataSource:(id)arg1;
+ (id)sharedDataSource;

- (id)typeStringForItemType:(long long)arg1;
- (id)newDisplayItemValidationTestsForItem:(id)arg1;
- (long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newTonePurchaseWithPurchase:(id)arg1;
- (id)_thumbnailImageForItem:(id)arg1;
- (long long)itemTypeForItem:(id)arg1;
- (id)_newDownloadForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadForDocumentItem:(id)arg1 storeOffer:(id)arg2;
- (long long)itemTypeForTypeString:(id)arg1;
- (id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)newItemWithItemDictionary:(id)arg1;

@end
