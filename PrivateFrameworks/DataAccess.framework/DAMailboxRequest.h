/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxRequest : NSObject  {
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property int requestType;
@property int bodyFormat;
@property(copy) NSString * messageID;


- (void)setBodyFormat:(int)arg1;
- (int)bodyFormat;
- (void)setRequestType:(int)arg1;
- (int)requestType;
- (void)setMessageID:(id)arg1;
- (id)messageID;
- (id)init;
- (void).cxx_destruct;
- (bool)mf_alwaysReportFailures;

@end
