/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKAvailabilitySpan, NSDate;

@interface EKAvailabilityCacheItem : NSObject  {
    bool_unknownSpanType;
    NSDate *_retrievalDate;
    EKAvailabilitySpan *_span;
}

@property(retain) NSDate * retrievalDate;
@property(retain) EKAvailabilitySpan * span;
@property bool unknownSpanType;


- (void)setUnknownSpanType:(bool)arg1;
- (bool)unknownSpanType;
- (void)setRetrievalDate:(id)arg1;
- (id)retrievalDate;
- (void)setSpan:(id)arg1;
- (id)span;
- (id)description;

@end
