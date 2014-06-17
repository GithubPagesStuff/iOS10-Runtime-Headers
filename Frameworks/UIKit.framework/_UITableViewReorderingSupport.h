/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UITableViewCell, UIShadowView, NSIndexPath;

@interface _UITableViewReorderingSupport : NSObject  {
    UITableViewCell *_reorderedCell;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_targetIndexPath;
    unsigned int _oldShowHorizontalScrollIndicator : 1;
    unsigned int _oldShowVerticalScrollIndicator : 1;
    unsigned int _reloadDataCalled : 1;
    unsigned int _reorderingCancelled : 1;
    unsigned int _reserved : 28;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
    bool_wasScrollingEnabled;
}



@end
