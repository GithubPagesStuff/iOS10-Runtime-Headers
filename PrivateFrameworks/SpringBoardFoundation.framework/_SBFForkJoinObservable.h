/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable  {
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}


- (id)initWithWithObservables:(id)arg1;
- (void)_observableFinishedForObserver:(id)arg1;
- (void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)subscribe:(id)arg1;
- (void)dealloc;

@end
