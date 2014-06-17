/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {
    struct CGSize { double x1; double x2; } *_sizes;
    struct CGSize { 
        double width; 
        double height; 
    } _totalSize;
    NSArray *_links;
}

@property(readonly) NSArray * links;
@property(readonly) struct CGSize { double x1; double x2; } totalSize;


- (struct CGSize { double x1; double x2; })sizeForLinkAtIndex:(long long)arg1;
- (id)initWithLayoutRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })totalSize;
- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (id)links;

@end
