/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask  {
    NSString *_serviceString;
    NSArray *_fetchedRecords;
    struct __CFHost { } *_host;
}

@property(retain) NSString * serviceString;
@property(retain) NSArray * fetchedRecords;
@property struct __CFHost { }* host;


- (void)setFetchedRecords:(id)arg1;
- (void)setServiceString:(id)arg1;
- (void)performCoreDAVTask;
- (id)serviceString;
- (id)fetchedRecords;
- (id)initWithServiceString:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setHost:(struct __CFHost { }*)arg1;
- (struct __CFHost { }*)host;
- (void)dealloc;
- (id)description;

@end
