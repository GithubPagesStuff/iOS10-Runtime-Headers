/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStatusBarItem : NSObject  {
    long long _idiom;
    int _type;
}

@property(readonly) int type;
@property(readonly) Class viewClass;
@property(readonly) int priority;
@property(readonly) int leftOrder;
@property(readonly) int rightOrder;
@property(readonly) NSString * indicatorName;

+ (bool)isItemWithTypeExclusive:(int)arg1;
+ (bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;
+ (bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (bool)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;

- (id)initWithType:(int)arg1;
- (int)priority;
- (int)type;
- (id)description;
- (long long)compareCenterOrder:(id)arg1;
- (long long)compareRightOrder:(id)arg1;
- (long long)compareLeftOrder:(id)arg1;
- (Class)viewClass;
- (int)centerOrder;
- (int)rightOrder;
- (int)leftOrder;
- (id)indicatorName;
- (long long)comparePriority:(id)arg1;
- (bool)appearsInRegion:(int)arg1;
- (bool)appearsOnRight;
- (bool)appearsOnLeft;

@end
