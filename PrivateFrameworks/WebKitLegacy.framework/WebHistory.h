/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject  {
    WebHistoryPrivate *_historyPrivate;
}

@property(copy,readonly) NSArray * orderedLastVisitedDays;
@property int historyItemLimit;
@property int historyAgeInDaysLimit;

+ (void)_removeAllVisitedLinks;
+ (void)_setVisitedLinkTrackingEnabled:(bool)arg1;
+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)arg1;

- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (void)timeZoneChanged:(id)arg1;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryItemLimit:(int)arg1;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (id)allItems;
- (bool)containsURL:(id)arg1;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)addItems:(id)arg1;
- (void)removeItems:(id)arg1;
- (int)historyItemLimit;
- (int)historyAgeInDaysLimit;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (id)itemForURL:(id)arg1;
- (id)_itemForURLString:(id)arg1;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(bool)arg4 increaseVisitCount:(bool)arg5;
- (void)_addVisitedLinksToPageGroup:(struct PageGroup { struct HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > > { struct HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> > { struct KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct HashSet<WebCore::Page *, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct Page {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct RefPtr<WebCore::VisitedLinkStore> { struct VisitedLinkStore {} *x_4_1_1; } x4; struct HashSet<unsigned long long, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; boolx6; unsigned int x7; struct RefPtr<WebCore::StorageNamespace> { struct StorageNamespace {} *x_8_1_1; } x8; struct HashMap<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace>, WebCore::SecurityOriginHash, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > > { struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> > >, WebCore::SecurityOriginHash, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> > > { struct KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_9_1_1; } x9; struct RefPtr<WebCore::UserContentController> { struct UserContentController {} *x_10_1_1; } x10; struct unique_ptr<WebCore::GroupSettings, std::__1::default_delete<WebCore::GroupSettings> > { struct __compressed_pair<WebCore::GroupSettings *, std::__1::default_delete<WebCore::GroupSettings> > { struct GroupSettings {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<WebCore::CaptionUserPreferences, std::__1::default_delete<WebCore::CaptionUserPreferences> > { struct __compressed_pair<WebCore::CaptionUserPreferences *, std::__1::default_delete<WebCore::CaptionUserPreferences> > { struct CaptionUserPreferences {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (id)_data;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)removeAllItems;

@end
