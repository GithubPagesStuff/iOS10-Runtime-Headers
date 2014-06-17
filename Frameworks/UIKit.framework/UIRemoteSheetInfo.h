/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISpringBoardHostedView, UIView;

@interface UIRemoteSheetInfo : NSObject  {
    UIView *_sheetView;
    UISpringBoardHostedView *_remoteView;
    id _delegate;
    SEL _selector;
    void *_context;
    long long _returnCode;
}

@property(retain) UIView * sheetView;
@property(retain) UISpringBoardHostedView * remoteView;
@property id delegate;
@property SEL selector;
@property void* context;
@property long long returnCode;


- (void*)context;
- (void)setContext:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (SEL)selector;
- (long long)returnCode;
- (id)remoteView;
- (void)setReturnCode:(long long)arg1;
- (id)sheetView;
- (void)setRemoteView:(id)arg1;
- (void)setSheetView:(id)arg1;

@end
