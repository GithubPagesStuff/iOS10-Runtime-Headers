/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup  {
    NSDictionary *_sourceEntityScheduleTags;
    bool_isAutoScheduleSupported;
    NSMutableDictionary *_destinationEntityScheduleTags;
}

@property(readonly) NSDictionary * sourceEntityScheduleTags;
@property(readonly) bool isAutoScheduleSupported;
@property(readonly) NSMutableDictionary * destinationEntityScheduleTags;


- (id)sourceEntityScheduleTags;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(bool)arg3 useFallback:(bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(bool)arg11;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (bool)isAutoScheduleSupported;
- (id)destinationEntityScheduleTags;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id)arg3;
- (void)dealloc;

@end
