/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPrintPageRendererDataSource>;

@interface QLPrintPageRenderer : UIPrintPageRenderer  {
    <QLPrintPageRendererDataSource> *_dataSource;
    long long _numberOfPages;
    bool_printingDone;
    long long _numberOfPrintedPages;
}

@property <QLPrintPageRendererDataSource> * dataSource;


- (void)prepareForPrinting;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)numberOfPages;

@end
