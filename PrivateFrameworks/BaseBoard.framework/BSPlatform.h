/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSPlatform : NSObject  {
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_productHardwareModel;
    NSString *_productType;
    NSString *_productClass;
    NSString *_uniqueDeviceIdentifier;
    NSString *_localizedProductName;
    bool_hasGasGauge;
    bool_isInternalInstall;
    bool_isMultiCore;
}

@property(copy,readonly) NSString * productVersion;
@property(copy,readonly) NSString * productBuildVersion;
@property(copy,readonly) NSString * productType;
@property(copy,readonly) NSString * productHardwareModel;
@property(copy,readonly) NSString * productClass;
@property(copy,readonly) NSString * localizedProductName;
@property(copy,readonly) NSString * uniqueDeviceIdentifier;
@property(getter=isInternalInstall,readonly) bool internalInstall;
@property(getter=isMultiCore,readonly) bool multiCore;
@property(readonly) bool hasGasGauge;

+ (id)sharedInstance;

- (id)uniqueDeviceIdentifier;
- (bool)isInternalInstall;
- (bool)isMultiCore;
- (bool)hasGasGauge;
- (id)localizedProductName;
- (id)productClass;
- (id)productType;
- (id)productHardwareModel;
- (id)productBuildVersion;
- (id)productVersion;
- (id)init;
- (void)dealloc;

@end
