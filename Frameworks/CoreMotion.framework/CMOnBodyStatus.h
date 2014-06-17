/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatus : CMLogItem  {
    int fResult;
    int fConfidence;
}

@property(readonly) long long result;
@property(readonly) long long confidence;


- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;
- (long long)result;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)confidence;

@end
