/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSMutableSet;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableSet *variablesToIntegralize;
    NSMutableSet *userObservableVariables;
}


- (id)init;
- (void)dealloc;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)unwrapLinearExpression:(id)arg1;
- (id)unwrapVariable:(id)arg1;

@end
