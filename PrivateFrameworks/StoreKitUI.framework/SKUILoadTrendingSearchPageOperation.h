/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, SKUIClientContext;

@interface SKUILoadTrendingSearchPageOperation : NSOperation  {
    SKUIClientContext *_clientContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    NSURL *_url;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy) id outputBlock;
@property(copy) NSURL * URL;


- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)outputBlock;
- (void)setOutputBlock:(id)arg1;
- (void)main;
- (void)setURL:(id)arg1;
- (id)URL;
- (void).cxx_destruct;

@end
