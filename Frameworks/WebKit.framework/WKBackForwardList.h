/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WKBackForwardListItem, NSArray;

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    } _list;
}

@property(readonly) WKBackForwardListItem * currentItem;
@property(readonly) WKBackForwardListItem * backItem;
@property(readonly) WKBackForwardListItem * forwardItem;
@property(readonly) NSArray * backList;
@property(readonly) NSArray * forwardList;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;


- (id)forwardList;
- (id)backList;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)currentItem;
- (id)itemAtIndex:(long long)arg1;
- (id)forwardItem;
- (void)dealloc;
- (id).cxx_construct;
- (id)backItem;

@end
