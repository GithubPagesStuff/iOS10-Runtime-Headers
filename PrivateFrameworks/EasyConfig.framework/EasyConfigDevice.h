/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_source>, NSDictionary, NSString, NSObject<OS_dispatch_queue>;

@interface EasyConfigDevice : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSDictionary *_scanRecord;
    bool_started;
    int _firstErr;
    struct BonjourBrowser { } *_airplayBrowser;
    NSDictionary *_airplayBonjourInfo;
    struct BonjourBrowser { } *_raopBrowser;
    NSDictionary *_raopBonjourInfo;
    struct BonjourBrowser { } *_mfiConfigBrowser;
    NSDictionary *_mfiConfigBonjourInfo;
    struct BonjourBrowser { } *_hapBrowser;
    NSDictionary *_hapBonjourInfo;
    unsigned int _configSeed;
    struct HTTPClientPrivate { } *_httpClient;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _state;
    double _mfiSAPStartTime;
    double _mfiSAPFinishTime;
    struct MFiSAP { } *_mfiSAP;
    unsigned long long _deviceIdentifier;
    unsigned long long _features;
    NSString *_model;
    NSString *_name;
    NSDictionary *_configuration;
    NSDictionary *_configResponse;
    bool_pausesAfterApply;
    bool_supportsTLV;
    bool_preConfigMetricsSet;
    struct { 
        double startTime; 
        unsigned char userChangedFriendlyName; 
        unsigned char playPasswordSet; 
        unsigned char adminPasswordSet; 
        unsigned char destinationNetworkRecommendationUsed; 
        double secondsToGetLinkUpOnSWAP; 
        int wifiJoinSWAPError; 
        unsigned char hitJoiningTargetSWAPTimeout; 
        int rssiOfSWAP; 
        unsigned int snrOfSWAP; 
        unsigned int channelOfSWAP; 
    } _preConfigMetrics;
    bool_postConfigMetricsSet;
    struct { 
        double secondsToGetLinkUpOnDestination; 
        int wifiJoinDestinationAPError; 
        unsigned char destinationNetworkPSKInKeychain; 
        unsigned char hitJoiningDestinationAPTimeout; 
        int rssiOfDestinationAP; 
        unsigned int snrOfDestinationAP; 
        unsigned int channelOfDestinationAP; 
    } _postConfigMetrics;
    double _configStartTime;
    double _findPreConfigStartTime;
    double _findPreConfigFoundTime;
    double _findPostConfigStartTime;
    double _findPostConfigFoundTime;
    double _applyConfigStartTime;
    double _applyConfigFinishTime;
    double _postConfigCheckStartTime;
    double _postConfigCheckFinishTime;
}

@property(copy) NSDictionary * configuration;
@property unsigned long long deviceIdentifier;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property unsigned long long features;
@property(copy) NSString * model;
@property(copy) NSString * name;
@property bool pausesAfterApply;

+ (id)deviceWithScanRecord:(id)arg1;
+ (bool)supportedScanRecord:(id)arg1;

- (void)setPausesAfterApply:(bool)arg1;
- (bool)pausesAfterApply;
- (void)setFeatures:(unsigned long long)arg1;
- (unsigned long long)features;
- (void)setPostConfigMetrics:(const struct { double x1; int x2; unsigned char x3; unsigned char x4; int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (void)setPreConfigMetrics:(const struct { double x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; double x6; int x7; unsigned char x8; int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (void)resumePostConfig;
- (bool)removed:(id)arg1;
- (bool)updated:(id)arg1;
- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; unsigned char x5; char *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned char x10[32000]; char *x11; struct iovec { void *x_12_1_1; unsigned long long x_12_1_2; } x12[2]; struct iovec {} *x13; int x14; unsigned long long x15; int x16; void *x17; void *x18; void *x19; void *x20; void *x21; void *x22; int (*x23)(); id x24; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x25; }*)arg1;
     /* Encoded args for previous method: v24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=Q[4C]I}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q**}*Qi*QCQCi}CC*QQQ[32000C]*[2{iovec=^vQ}]^{iovec}iQi^v^v^v^v^v^v^?@?}16 */

- (void)_postConfigCheckStart:(id)arg1;
- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (void)_postProgress:(int)arg1 withResponse:(id)arg2;
- (void)_applyConfigCompletion:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; unsigned char x5; char *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned char x10[32000]; char *x11; struct iovec { void *x_12_1_1; unsigned long long x_12_1_2; } x12[2]; struct iovec {} *x13; int x14; unsigned long long x15; int x16; void *x17; void *x18; void *x19; void *x20; void *x21; void *x22; int (*x23)(); id x24; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x25; }*)arg1;
     /* Encoded args for previous method: v24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=Q[4C]I}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q**}*Qi*QCQCi}CC*QQQ[32000C]*[2{iovec=^vQ}]^{iovec}iQi^v^v^v^v^v^v^?@?}16 */

- (int)_applyConfigStart;
- (int)_timeoutTimerStart:(unsigned int)arg1 block:(id)arg2;
- (int)_mfiSAPNext:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; unsigned char x5; char *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned char x10[32000]; char *x11; struct iovec { void *x_12_1_1; unsigned long long x_12_1_2; } x12[2]; struct iovec {} *x13; int x14; unsigned long long x15; int x16; void *x17; void *x18; void *x19; void *x20; void *x21; void *x22; int (*x23)(); id x24; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x25; }*)arg1;
     /* Encoded args for previous method: i24@0:8^{HTTPMessagePrivate={__CFRuntimeBase=Q[4C]I}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q**}*Qi*QCQCi}CC*QQQ[32000C]*[2{iovec=^vQ}]^{iovec}iQi^v^v^v^v^v^v^?@?}16 */

- (int)_mfiSAPStart;
- (int)_setupClient:(id)arg1;
- (int)_configureStart:(id)arg1;
- (void)_postProgress:(int)arg1;
- (int)_startBonjourWithTimeout:(int)arg1 handler:(id)arg2;
- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (int)_findDevicePostConfigStart;
- (void)_postNote:(id)arg1 info:(id)arg2;
- (void)_logEnded;
- (int)_findDevicePreConfigStart;
- (void)setDeviceIdentifier:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)_stop:(int)arg1;
- (void)_handleError:(int)arg1;
- (unsigned long long)deviceIdentifier;
- (id)model;
- (id)dispatchQueue;
- (void)_start;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (id)configuration;
- (void)start;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)stop;
- (void)setConfiguration:(id)arg1;
- (void)setModel:(id)arg1;

@end
