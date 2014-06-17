/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery  {
    bool_includePhotos;
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(copy) NSString * searchBase;
@property(copy) NSString * searchScope;
@property bool includePhotos;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (bool)includePhotos;
- (id)searchScope;
- (id)searchBase;
- (void)setIncludePhotos:(bool)arg1;
- (void)setSearchScope:(id)arg1;
- (void)setSearchBase:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
