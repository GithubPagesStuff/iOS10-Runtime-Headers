/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUSectionsResponse, SUClientInterface;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    bool_shouldUseCache;
}

@property(copy) NSString * activeSectionVersionString;
@property bool shouldUseCache;
@property(readonly) SUSectionsResponse * sectionsResponse;


- (void)setShouldUseCache:(bool)arg1;
- (void)setActiveSectionVersionString:(id)arg1;
- (id)activeSectionVersionString;
- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (id)sectionsResponse;
- (bool)_loadSectionsFromCacheForVersion:(id)arg1;
- (bool)shouldUseCache;
- (void)_setSectionsResponse:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(bool)arg2;
- (bool)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (void)run;
- (id)init;
- (void)dealloc;

@end
