/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSDictionary, NSData, NSMutableSet, NSSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask  {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSDictionary *_uuidsToAddActions;
    NSDictionary *_hrefsToModDeleteActions;
    NSString *_checkCTag;
    bool_simple;
    bool_returnChangedData;
    NSData *_pushedData;
    bool_validCTag;
    NSString *_nextCTag;
    NSMutableSet *_bulkChangeResponses;
    NSString *_requestDataContentType;
}

@property(readonly) NSDictionary * uuidsToAddActions;
@property(readonly) NSDictionary * hrefsToModDeleteActions;
@property(readonly) NSString * nextCTag;
@property(readonly) NSSet * bulkChangeResponses;


- (id)hrefsToModDeleteActions;
- (id)uuidsToAddActions;
- (id)bulkChangeResponses;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (id)additionalHeaderValues;
- (id)nextCTag;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(bool)arg3 returnChangedData:(bool)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;

@end
