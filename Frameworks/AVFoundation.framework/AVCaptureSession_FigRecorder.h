/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVCaptureSessionInternal_FigRecorder, NSArray;

@interface AVCaptureSession_FigRecorder : NSObject  {
    AVCaptureSessionInternal_FigRecorder *_internal;
}

@property(copy) NSString * sessionPreset;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) bool running;
@property(getter=isInterrupted,readonly) bool interrupted;
@property bool usesApplicationAudioSession;
@property bool automaticallyConfiguresApplicationAudioSession;
@property(readonly) struct OpaqueCMClock { }* masterClock;

+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4;
+ (id)avCaptureSessionPlist;
+ (bool)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)allSessionPresets;
+ (void)initialize;

- (id)outputs;
- (id)inputs;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (bool)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(bool*)arg3 frameRatesChanged:(bool*)arg4;
- (void)_doDidStop:(id)arg1;
- (void)_doDidStart:(bool)arg1;
- (void)_doDidStartSources;
- (int)_createRecorderIfNeeded;
- (bool)_startPreviewing;
- (id)inputWithClass:(Class)arg1;
- (id)outputWithClass:(Class)arg1;
- (void)_determineMasterClock;
- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (id)_currentDeviceWithMediaType:(id)arg1;
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (bool)_sessionHasEnabledMovieFileOutput;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (void)_rebuildLiveConnections;
- (bool)_stopPreviewing;
- (bool)isPreviewing;
- (void)_doWillStart;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayerConnection:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (id)_liveConnections;
- (void)addVideoPreviewLayerConnection:(id)arg1;
- (void)_rebuildInternalCaptureOptions;
- (void)_teardownFigRecorder;
- (id)figRecorderOptions;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayer;
- (id)_resolvedCaptureOptions;
- (id)captureOptions;
- (void)stopRunning;
- (void)startRunning;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(bool)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)addConnection:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addInput:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (void)_setInterrupted:(bool)arg1;
- (void)_stopAndTearDownGraph;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)_rebuildGraph;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (void)_setRunning:(bool)arg1;
- (bool)isBeingConfigured;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (void)commitConfiguration;
- (bool)canAddConnection:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (void)beginConfiguration;
- (void)_removeConnection:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_addConnection:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_buildAndRunGraph;
- (void)_commitConfiguration;
- (bool)canSetSessionPreset:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)_beginConfiguration;
- (struct OpaqueCMClock { }*)masterClock;
- (void)removeConnection:(id)arg1;
- (struct OpaqueCMBaseObject { }*)recorder;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)sessionPreset;
- (id)videoPreviewLayer;
- (int)_startRecording;
- (bool)automaticallyConfiguresApplicationAudioSession;
- (bool)usesApplicationAudioSession;
- (int)_stopRecording;
- (void)addOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (bool)isInterrupted;
- (bool)isRunning;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)valueForUndefinedKey:(id)arg1;

@end
