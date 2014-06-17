/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemParserMapping, NSArray, NSString, NSMutableDictionary, NSDictionary, <CalDAVChecksumLocalDBInfoProvider>;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup  {
    NSArray *_preferredChecksumVersions;
    NSString *_unusedSyncToken;
    NSString *_unusedCTag;
    CoreDAVItemParserMapping *_bestServerChecksumVersion;
    NSMutableDictionary *_serverURLsToChecksums;
    NSDictionary *_localURLsToChecksums;
    bool_mismatchDetected;
}

@property(retain) NSArray * preferredChecksumVersions;
@property <CalDAVChecksumLocalDBInfoProvider> * delegate;
@property(retain) CoreDAVItemParserMapping * bestServerChecksumVersion;
@property(readonly) bool mismatchDetected;


- (bool)mismatchDetected;
- (id)bestServerChecksumVersion;
- (void)setPreferredChecksumVersions:(id)arg1;
- (id)preferredChecksumVersions;
- (bool)_hadOutOfDateCollectionToken;
- (void)_serverChecksumSupportPropfind;
- (void)_handleResponseToChecksumPropfind:(id)arg1;
- (id)_calculatedCalendarHome;
- (void)setBestServerChecksumVersion:(id)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (void)deleteResourceURLs:(id)arg1;
- (bool)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)startTaskGroup;
- (void)dealloc;

@end
