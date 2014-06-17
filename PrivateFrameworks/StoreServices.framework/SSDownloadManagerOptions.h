/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
    NSArray *_downloadKinds;
    bool_filterExternalOriginatedDownloads;
    NSString *_persistenceIdentifier;
    NSArray *_prefetchedDownloadExternalProperties;
    NSArray *_prefetchedDownloadProperties;
}

@property(copy) NSArray * downloadKinds;
@property(copy) NSString * persistenceIdentifier;
@property(copy) NSArray * prefetchedDownloadProperties;
@property bool shouldFilterExternalOriginatedDownloads;
@property(copy) NSArray * prefetchedDownloadExternalProperties;


- (void)setShouldFilterExternalOriginatedDownloads:(bool)arg1;
- (id)persistenceIdentifier;
- (id)prefetchedDownloadProperties;
- (id)prefetchedDownloadExternalProperties;
- (bool)shouldFilterExternalOriginatedDownloads;
- (id)downloadKinds;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setPrefetchedDownloadExternalProperties:(id)arg1;
- (void)setPrefetchedDownloadProperties:(id)arg1;
- (void)setPersistenceIdentifier:(id)arg1;
- (void)setDownloadKinds:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
