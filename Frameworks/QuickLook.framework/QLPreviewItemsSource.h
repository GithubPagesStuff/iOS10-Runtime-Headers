/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableDictionary, <QLPreviewControllerDataSource>, NSMapTable, <QLPreviewItem>, QLPreviewController, NSMutableArray;

@interface QLPreviewItemsSource : NSObject  {
    QLPreviewController *_previewController;
    <QLPreviewControllerDataSource> *_dataSource;
    <QLPreviewItem> *_previewItem;
    bool_prepared;
    long long _UUID;
    NSMutableDictionary *_previewItemCache;
    unsigned long long _numberOfPreviewItems;
    long long _currentPreviewItemIndex;
    long long _currentUIItemIndex;
    long long _archiveDataSourceIndex;
    NSMutableArray *_archiveItems;
    NSMapTable *_uiItems;
}

@property(readonly) long long UUID;
@property <QLPreviewControllerDataSource> * dataSource;
@property(retain) <QLPreviewItem> * previewItem;
@property(readonly) bool prepared;
@property(getter=isViewingArchive,readonly) bool viewingArchive;
@property(readonly) bool shouldShowFileList;
@property(readonly) long long numberOfPreviewItems;
@property long long currentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * currentPreviewItem;
@property(readonly) long long realNumberOfPreviewItems;
@property long long realCurrentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * realCurrentPreviewItem;
@property(readonly) long long numberOfUIItems;
@property(readonly) long long currentUIItemIndex;


- (id)_UIItemAtIndex:(long long)arg1;
- (void)removeArchiveItemAtIndex:(long long)arg1;
- (void)_setUIItem:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfUIItems;
- (id)UIItemAtIndex:(long long)arg1;
- (long long)currentUIItemIndex;
- (bool)isViewingArchive;
- (bool)shouldShowFileList;
- (void)preparedPreviewItemAtIndex:(long long)arg1 completionBlock:(id)arg2;
- (void)resolvePreviewItem:(id)arg1 completionBlock:(id)arg2;
- (id)previewItemAtIndex:(long long)arg1;
- (long long)numberOfPreviewItems;
- (id)realPreviewItemAtIndex:(long long)arg1;
- (bool)prepared;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (long long)realCurrentPreviewItemIndex;
- (void)setRealCurrentPreviewItemIndex:(long long)arg1;
- (long long)currentPreviewItemIndex;
- (id)realCurrentPreviewItem;
- (long long)realNumberOfPreviewItems;
- (id)currentPreviewItem;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (id)initWithPreviewController:(id)arg1;
- (void)purgeCache;
- (void)prepare;
- (long long)UUID;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)reset;

@end
