/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject  {
    NSMutableArray *_popups;
    struct CGSize { 
        double width; 
        double height; 
    } _viewSize;
    UIPDFPageView *pageView;
}

@property UIPDFPageView * pageView;


- (void)shift:(double)arg1;
- (double)yForObjectAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForObjectAtIndex:(unsigned long long)arg1;
- (void)layoutViews:(double)arg1;
- (id)initWithAnnotations:(id)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setPageView:(id)arg1;
- (void)dealloc;
- (id)pageView;
- (id)viewAtIndex:(unsigned long long)arg1;

@end
