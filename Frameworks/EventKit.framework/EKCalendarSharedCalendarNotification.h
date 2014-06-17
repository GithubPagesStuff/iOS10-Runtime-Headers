/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification  {
    int _sharingInvitationResponse;
    unsigned long long _allowedEntityTypes;
}

@property int sharingInvitationResponse;
@property unsigned long long allowedEntityTypes;


- (int)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(int)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (id)calendarFromEventStore:(id)arg1;
- (unsigned long long)allowedEntityTypes;
- (id)initWithType:(long long)arg1;

@end
