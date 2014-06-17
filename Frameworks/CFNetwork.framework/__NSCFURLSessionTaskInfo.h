/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSURLResponse, NSURL, NSError, NSURLRequest, NSDictionary;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    bool_hasStarted;
    bool_expectingResumeCallback;
    bool_establishedConnection;
    bool_disablesRetry;
    bool_shouldCancelOnDisconnect;
    bool_discretionary;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned long long _retryCount;
    long long _basePriority;
    NSString *_uniqueIdentifier;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSDictionary *_options;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary *__backgroundTaskTimingData;
}

@property unsigned long long identifier;
@property unsigned long long taskKind;
@property double creationTime;
@property long long state;
@property unsigned long long suspendCount;
@property(copy) NSString * taskDescription;
@property(copy) NSURLRequest * originalRequest;
@property(copy) NSURLRequest * currentRequest;
@property(copy) NSURLResponse * response;
@property(copy) NSError * error;
@property(retain) NSURL * fileURL;
@property(retain) NSURL * downloadFileURL;
@property(retain) NSString * bundleID;
@property(retain) NSString * sessionID;
@property bool hasStarted;
@property bool expectingResumeCallback;
@property bool establishedConnection;
@property unsigned long long retryCount;
@property bool disablesRetry;
@property bool shouldCancelOnDisconnect;
@property long long basePriority;
@property(getter=isDiscretionary) bool discretionary;
@property(retain) NSString * uniqueIdentifier;
@property unsigned long long AVAssetDownloadToken;
@property(copy) NSURL * URL;
@property(copy) NSURL * destinationURL;
@property(retain) NSDictionary * options;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property(copy) NSDictionary * _backgroundTaskTimingData;

+ (bool)supportsSecureCoding;

- (void)setIdentifier:(unsigned long long)arg1;
- (unsigned long long)identifier;
- (void)setDisablesRetry:(bool)arg1;
- (bool)disablesRetry;
- (unsigned long long)retryCount;
- (void)setEstablishedConnection:(bool)arg1;
- (bool)establishedConnection;
- (void)setExpectingResumeCallback:(bool)arg1;
- (bool)expectingResumeCallback;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 taskIdentifier:(unsigned long long)arg4 bundleID:(id)arg5 sessionID:(id)arg6;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (void)setDiscretionary:(bool)arg1;
- (void)setBasePriority:(long long)arg1;
- (void)setShouldCancelOnDisconnect:(bool)arg1;
- (void)setCreationTime:(double)arg1;
- (id)options;
- (id)uniqueIdentifier;
- (bool)isDiscretionary;
- (long long)basePriority;
- (bool)shouldCancelOnDisconnect;
- (bool)hasStarted;
- (id)sessionID;
- (id)bundleID;
- (id)downloadFileURL;
- (double)creationTime;
- (void)setOptions:(id)arg1;
- (void)setDownloadFileURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setTaskKind:(unsigned long long)arg1;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setURL:(id)arg1;
- (id)_backgroundTaskTimingData;
- (void)setTaskDescription:(id)arg1;
- (id)taskDescription;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (unsigned long long)taskKind;
- (id)destinationURL;
- (unsigned long long)AVAssetDownloadToken;
- (id)fileURL;
- (long long)countOfBytesExpectedToReceive;
- (void)setOriginalRequest:(id)arg1;
- (unsigned long long)suspendCount;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (long long)countOfBytesReceived;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setResponse:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)setState:(long long)arg1;
- (void)setSuspendCount:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)response;
- (id)URL;
- (id)currentRequest;
- (id)originalRequest;
- (long long)state;
- (void)setCurrentRequest:(id)arg1;
- (void)dealloc;

@end
