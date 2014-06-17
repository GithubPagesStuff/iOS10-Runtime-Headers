/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    booldataSourceHasBeenSet;
    struct CGPDFDocument { } *_PDFDocument;
    NSString *_title;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } *_pageRects;
}

+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;
+ (struct CGColor { }*)backgroundColor;
+ (struct CGColor { }*)shadowColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned int)pageNumberForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_computePageRects;
- (void)_checkPDFTitle;
- (void)drawPage:(struct CGPDFPage { }*)arg1;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)documentSource;
- (bool)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (id)title;
- (void)layout;
- (void)dealloc;
- (struct CGPDFDocument { }*)doc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (unsigned int)totalPages;

@end
