/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSCalendar, NSString, NSDate;

@interface UIDateLabel : UILabel  {
    bool_forceTimeOnly;
    NSDate *_date;
    bool_boldForAllLocales;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_previousWeek;
    UIFont *_timeDesignatorFont;
    NSCalendar *_calendar;
    bool_shouldRecomputeText;
    double _paddingFromTimeToDesignator;
}

@property(retain) NSDate * date;
@property double timeInterval;
@property(readonly) UIFont * timeDesignatorFont;
@property(readonly) NSString * timeDesignator;
@property bool forceTimeOnly;
@property bool boldForAllLocales;
@property double paddingFromTimeToDesignator;
@property(readonly) bool use24HourTime;
@property(readonly) bool timeDesignatorAppearsBeforeTime;
@property(readonly) struct CGSize { double x1; double x2; } timeDesignatorSize;
@property(getter=_dateString,readonly) NSString * dateString;
@property bool shouldRecomputeText;

+ (id)pmString;
+ (id)amString;
+ (id)_timeFormatWithoutDesignator;
+ (id)_dateFormatter;
+ (id)_weekdayDateFormatter;
+ (id)_relativeDateFormatter;
+ (id)_timeOnlyDateFormatter;
+ (id)defaultFont;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)text;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)date;
- (double)timeInterval;
- (void)invalidate;
- (void)dealloc;
- (void)setPaddingFromTimeToDesignator:(double)arg1;
- (double)paddingFromTimeToDesignator;
- (bool)forceTimeOnly;
- (void)setTimeInterval:(double)arg1;
- (void)setBoldForAllLocales:(bool)arg1;
- (void)setForceTimeOnly:(bool)arg1;
- (double)_noon;
- (bool)use24HourTime;
- (double)_lastWeek;
- (double)_yesterday;
- (double)_tomorrow;
- (double)_today;
- (void)_didUpdateDate;
- (bool)boldForAllLocales;
- (id)_dateString;
- (bool)shouldRecomputeText;
- (void)setDate:(id)arg1;
- (id)_dateWithDayDiffFromToday:(long long)arg1;
- (id)_todayDate;
- (id)_calendar;
- (id)timeDesignatorFont;
- (bool)timeDesignatorAppearsBeforeTime;
- (id)timeDesignator;
- (struct CGSize { double x1; double x2; })timeDesignatorSize;
- (void)_recomputeTextIfNecessary;
- (void)setShouldRecomputeText:(bool)arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_stringDrawingContext;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;

@end
