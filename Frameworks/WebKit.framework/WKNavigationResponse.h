/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject  {
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _frame;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    } _response;
    bool_canShowMIMEType;
}

@property(readonly) WKFrameInfo * _frame;
@property(getter=isForMainFrame,readonly) bool forMainFrame;
@property(copy) NSURLResponse * response;
@property bool canShowMIMEType;


- (void)setCanShowMIMEType:(bool)arg1;
- (bool)canShowMIMEType;
- (bool)isForMainFrame;
- (id)_frame;
- (void)setResponse:(id)arg1;
- (id)response;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;

@end
