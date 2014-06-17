/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString;

@interface PKMediaName : NSObject  {
    NSString *_mediaName;
    NSString *_mediaClass;
    NSString *_baseName;
    double _widthInUnits;
    double _heightInUnits;
    NSString *_widthStr;
    long long _units;
    double _conversionFactor;
}

@property(retain) NSString * mediaName;
@property(retain) NSString * mediaClass;
@property(retain) NSString * baseName;
@property(readonly) bool isRoll;
@property double widthInUnits;
@property double heightInUnits;
@property(retain) NSString * widthStr;
@property(readonly) double width;
@property(readonly) double height;
@property(retain,readonly) NSString * unitStr;
@property long long units;
@property double conversionFactor;

+ (id)pkMediaNameWithString:(id)arg1;

- (double)height;
- (double)width;
- (id)widthStr;
- (id)mediaName;
- (double)conversionFactor;
- (id)mediaClass;
- (long long)units;
- (void)setUnits:(long long)arg1;
- (void)setHeightInUnits:(double)arg1;
- (void)setWidthInUnits:(double)arg1;
- (void)setConversionFactor:(double)arg1;
- (void)setWidthStr:(id)arg1;
- (void)setBaseName:(id)arg1;
- (void)setMediaClass:(id)arg1;
- (void)parseMediaName:(id)arg1;
- (void)setMediaName:(id)arg1;
- (double)heightInUnits;
- (double)widthInUnits;
- (id)unitStr;
- (id)baseName;
- (bool)isRoll;
- (id)initWithString:(id)arg1;
- (void)dealloc;

@end
