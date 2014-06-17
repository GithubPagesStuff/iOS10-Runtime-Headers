/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSNumber, NSDate;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fNumberOfSteps;
    NSNumber *fDistance;
    NSNumber *fFloorAscended;
    NSNumber *fFloorDescended;
    NSNumber *fRecordId;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSNumber * numberOfSteps;
@property(readonly) NSNumber * distance;
@property(readonly) NSNumber * floorsAscended;
@property(readonly) NSNumber * floorsDescended;
@property(readonly) long long recordId;

+ (bool)supportsSecureCoding;

- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorAscended:(int)arg5 floorDescended:(int)arg6 recordID:(int)arg7;
- (id)floorsDescended;
- (id)floorsAscended;
- (id)numberOfSteps;
- (long long)recordId;
- (id)endDate;
- (id)startDate;
- (id)distance;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
