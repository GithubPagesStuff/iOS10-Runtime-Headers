/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSDate;

@interface PCScheduleSystemWakeOperation : NSOperation  {
    bool_scheduleOrCancel;
    NSDate *_wakeDate;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}


- (id)initForScheduledWake:(bool)arg1 wakeDate:(id)arg2 serviceIdentifier:(id)arg3 uniqueIdentifier:(void*)arg4;
- (void)main;
- (void)dealloc;

@end
