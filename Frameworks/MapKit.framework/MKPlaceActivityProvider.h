/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceActivityProviderDelegate>, MKMapItem;

@interface MKPlaceActivityProvider : NSObject  {
    <MKPlaceActivityProviderDelegate> *_delegate;
    MKMapItem *_mapItem;
}

@property <MKPlaceActivityProviderDelegate> * delegate;
@property(retain) MKMapItem * mapItem;


- (id)activityAnnotationView;
- (id)activityURL;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)activityTitle;

@end
