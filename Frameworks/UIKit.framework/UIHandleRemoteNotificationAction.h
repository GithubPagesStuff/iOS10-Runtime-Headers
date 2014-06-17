/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction  {
}

@property(copy,readonly) NSDictionary * payload;
@property(copy,readonly) NSString * action;


- (id)action;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(id)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(id)arg2;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 type:(long long)arg3 withHandler:(id)arg4;
- (void)sendResponse:(id)arg1;
- (id)payload;
- (long long)UIActionType;

@end
