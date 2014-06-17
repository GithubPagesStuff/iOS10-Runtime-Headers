/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEORouteMatch, MKAnnotationView, NSHashTable;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

@property MKAnnotationView * annotationView;
@property double presentationCourse;
@property struct { double x1; double x2; } presentationCoordinate;
@property(getter=isTracking) bool tracking;
@property(retain) GEORouteMatch * routeMatch;


- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (void)setPresentationCourse:(double)arg1;
- (double)presentationCourse;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (struct { double x1; double x2; })presentationCoordinate;
- (void)setAnnotationView:(id)arg1;
- (id)annotationView;
- (id)routeMatch;
- (void)setRouteMatch:(id)arg1;
- (void).cxx_destruct;
- (void)setTracking:(bool)arg1;
- (bool)isTracking;

@end
