/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {
    NSString *_name;
    void *_internal;
    long long _lastStart;
    long long _lastEnd;
    unsigned long long _lastIndex;
    double _offset;
}

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;

- (id)_abbreviationForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForAbsoluteTime:(double)arg1;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (id)NSTimeZone;
- (double)secondsFromGMT;
- (id)abbreviation;
- (id)initWithName:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)secondsFromGMTForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
