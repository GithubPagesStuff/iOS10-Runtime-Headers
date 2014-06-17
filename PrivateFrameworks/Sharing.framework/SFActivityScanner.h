/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSUUID, <SFActivityScannerDelegate>;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver> {
    bool_receiving;
    <SFActivityScannerDelegate> *_delegate;
    NSUUID *_identifier;
}

@property <SFActivityScannerDelegate> * delegate;
@property bool receiving;
@property(retain) NSUUID * identifier;


- (void)setReceiving:(bool)arg1;
- (bool)receiving;
- (void)cancelPayloadRequestForIdentifier:(id)arg1;
- (void)payloadForIdentifier:(id)arg1;
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
- (void)payloadForIdentifier:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (void)stop;

@end
