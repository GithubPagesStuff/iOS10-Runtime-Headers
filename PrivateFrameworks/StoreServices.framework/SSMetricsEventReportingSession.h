/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSMetricsEventController, NSURL, NSMutableArray;

@interface SSMetricsEventReportingSession : NSObject  {
    long long _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
}


- (void)writeEventsToStream:(id)arg1;
- (bool)markEventsAsReported;
- (bool)anyUnreportedEvents;
- (void)_writeString:(id)arg1 toData:(id)arg2;
- (id)_unreportedEvents;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3;
- (void)dealloc;

@end
