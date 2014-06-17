/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSString, <CoreDAVContainerQueryTaskDelegate>;

@interface CoreDAVContainerQueryTask : CoreDAVTask  {
    NSSet *_searchTerms;
    unsigned long long _searchLimit;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property <CoreDAVContainerQueryTaskDelegate> * delegate;

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;

@end
