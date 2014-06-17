/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSData, NSDate;

@interface PKJob : NSObject  {
    long long number;
    long long remoteJobId;
    long long mediaProgress;
    long long mediaSheets;
    long long mediaSheetsCompleted;
    NSString *printerDisplayName;
    long long printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    long long state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
}

@property long long number;
@property long long remoteJobId;
@property long long mediaProgress;
@property long long mediaSheets;
@property long long mediaSheetsCompleted;
@property(retain) NSString * printerDisplayName;
@property long long printerKind;
@property(retain) NSString * printerLocation;
@property(retain) PKPrintSettings * settings;
@property long long state;
@property(retain) NSDate * timeAtCompleted;
@property(retain) NSDate * timeAtCreation;
@property(retain) NSDate * timeAtProcessing;
@property(retain) NSData * thumbnailImage;

+ (id)currentJob;
+ (id)jobs;

- (id)settings;
- (long long)mediaProgress;
- (long long)remoteJobId;
- (long long)number;
- (void)setThumbnailImage:(id)arg1;
- (void)setTimeAtProcessing:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setPrinterKind:(long long)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setRemoteJobId:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setMediaSheetsCompleted:(long long)arg1;
- (void)setMediaSheets:(long long)arg1;
- (void)setMediaProgress:(long long)arg1;
- (long long)update;
- (void)setState:(long long)arg1;
- (long long)state;
- (long long)cancel;
- (id)thumbnailImage;
- (long long)mediaSheetsCompleted;
- (long long)mediaSheets;
- (id)timeAtCompleted;
- (id)timeAtProcessing;
- (id)timeAtCreation;
- (long long)printerKind;
- (id)printerLocation;
- (id)printerDisplayName;
- (bool)isEqual:(id)arg1;

@end
