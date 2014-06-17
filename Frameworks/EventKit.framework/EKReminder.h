/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKAlarm, NSURL, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem  {
    boolhadRecurrences;
}

@property(copy) NSDateComponents * startDateComponents;
@property(copy) NSDateComponents * dueDateComponents;
@property(getter=isCompleted) bool completed;
@property(copy) NSDate * completionDate;
@property long long priority;
@property unsigned long long displayOrder;
@property(readonly) NSDate * dueDate;
@property(copy) NSURL * action;
@property(readonly) EKObjectID * parentID;
@property(readonly) EKAlarm * bestDisplayAlarm;
@property bool hadRecurrences;

+ (id)reminderWithEventStore:(id)arg1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;

- (bool)validate:(id*)arg1;
- (void)setHadRecurrences:(bool)arg1;
- (bool)hadRecurrences;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (void)setDueDateComponents:(id)arg1;
- (id)parentID;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (id)reminderIdentifier;
- (id)dueDateComponents;
- (id)dueDate;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (unsigned long long)displayOrder;
- (id)_persistentReminder;
- (bool)commit:(id*)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (bool)isCompleted;
- (void)setTimeZone:(id)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)setCompleted:(bool)arg1;

@end
