/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MSStreamsProtocolDelegate>, NSString, NSURL;

@interface MSStreamsProtocol : NSObject  {
    <MSStreamsProtocolDelegate> *_delegate;
    NSString *_personID;
}

@property <MSStreamsProtocolDelegate> * delegate;
@property(readonly) NSString * personID;
@property(readonly) NSURL * putURL;
@property(readonly) NSURL * getURL;
@property(readonly) NSURL * resetURL;
@property(readonly) NSURL * reauthorizeURL;
@property(readonly) NSURL * uploadCompleteURL;
@property(readonly) NSURL * deleteURL;


- (id)deleteURL;
- (id)reauthorizeURL;
- (id)resetURL;
- (id)getURL;
- (void)_didReceiveRetryAfterDate:(id)arg1;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (id)uploadCompleteURL;
- (id)putURL;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext { void *x1; struct __CFString {} *x2; struct __CFString {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; double x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); struct CFURLConnectionClient_V1 {} *x12; struct _CFURLConnection {} *x13; struct __CFData {} *x14; struct __CFHTTPMessage {} *x15; struct __CFError {} *x16; }*)arg1;
- (id)deviceInfoDict;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)abort;

@end
