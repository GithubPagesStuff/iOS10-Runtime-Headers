/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSMailDefaultService : MSService  {
    bool_shouldLaunch;
}

@property bool shouldLaunchMobileMail;


- (void)setShouldLaunchMobileMail:(bool)arg1;
- (bool)shouldLaunchMobileMail;
- (bool)_shouldSimulate;
- (id)_createServiceOnQueue:(id)arg1;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4;
- (id)init;

@end
