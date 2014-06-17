/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceHeaderBackgroundViewDelegate>, MKMapItem;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {
    long long _backgroundType;
    MKMapItem *_mapItem;
    <MKPlaceHeaderBackgroundViewDelegate> *_delegate;
    long long _preparationState;
}

@property <MKPlaceHeaderBackgroundViewDelegate> * delegate;
@property long long backgroundType;
@property long long preparationState;
@property(retain) MKMapItem * mapItem;

+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (long long)backgroundTypeForMapItem:(id)arg1;
+ (Class)classForBackgroundType:(long long)arg1;

- (long long)backgroundType;
- (void)setPreparationState:(long long)arg1;
- (long long)preparationState;
- (void)prepareForPresentation;
- (void)setBackgroundType:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)pause;
- (void)restart;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)present;

@end
