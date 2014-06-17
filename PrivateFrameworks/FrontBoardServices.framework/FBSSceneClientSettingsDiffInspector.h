/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMutableSettings;

@interface FBSSceneClientSettingsDiffInspector : NSObject  {
    BSMutableSettings *_observerInfo;
    bool_iteratingObservers;
}


- (void)observePreferredInterfaceOrientationWithBlock:(id)arg1;
- (void)observeOcclusionsWithBlock:(id)arg1;
- (void)observeClassWithBlock:(id)arg1;
- (void)removeAllObservers;
- (void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)observeOtherSetting:(unsigned long long)arg1 withBlock:(id)arg2;
- (void)inspectDiff:(id)arg1 withContext:(void*)arg2;

@end
