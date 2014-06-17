/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate> {
    NSDate *_lastUpdateDate;
}

@property(readonly) NSDate * lastUpdateDate;


- (id)lastUpdateDate;
- (void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2;
- (void)routeHypothesizerArrived:(id)arg1;

@end
