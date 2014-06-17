/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFloat64Range : NSObject <NSCopying> {
    double _minimum;
    double _maximum;
}

@property(readonly) double minimum;
@property(readonly) double maximum;

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange { double x1; double x2; })arg1;
+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;

- (id)initWithAudioValueRange:(struct AudioValueRange { double x1; double x2; })arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)maximum;
- (double)minimum;

@end
