/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSTimer, SKUICountdownViewTimerTarget, UIImage, UIImageView, SKUIClientContext, NSNumberFormatter, NSMutableArray, NSOperationQueue, UILabel, SKUICountdown;

@interface SKUICountdownView : UIView  {
    SKUIClientContext *_clientContext;
    SKUICountdown *_countdown;
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    double _factor;
}

@property(readonly) SKUICountdown * countdown;
@property(readonly) SKUIClientContext * clientContext;
@property(retain) UIImage * backgroundImage;


- (void)_reload;
- (id)countdown;
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;
- (id)_newDateLabel;
- (id)_newDateDescriptionLabel;
- (void)_currentRemainingDays:(long long*)arg1 hours:(long long*)arg2 minutes:(long long*)arg3 seconds:(long long*)arg4;
- (id)_newFlapLabelWithPosition:(long long)arg1;
- (id)_newNumberSeparatorLabel;
- (long long)_currentValue;
- (void)_reloadTime;
- (void)_reloadDateDescriptions:(bool)arg1;
- (void)_reloadTimeFlapped;
- (void)_reloadNumber;
- (void)_reloadNumberFlapped;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;
- (id)clientContext;
- (void)_reloadFontSizes;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)start;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)layoutSubviews;

@end
