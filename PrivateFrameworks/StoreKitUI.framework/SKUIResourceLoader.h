/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIResourceLoaderDelegate>, SKUIClientContext, NSOperationQueue, NSMutableDictionary, NSMapTable;

@interface SKUIResourceLoader : NSObject  {
    SKUIClientContext *_clientContext;
    <SKUIResourceLoaderDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSMutableDictionary *_resourcesByRequestID;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) NSOperationQueue * operationQueue;
@property <SKUIResourceLoaderDelegate> * delegate;
@property(getter=isIdle,readonly) bool idle;


- (void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (void)removeAllCachedResources;
- (void)cancelRequestWithIdentifier:(unsigned long long)arg1;
- (void)cancelAllRequests;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;
- (void)_sendDidIdleIfNecessary;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (id)initWithOperationQueue:(id)arg1;
- (bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (bool)isIdle;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)cachedResourceForRequestIdentifier:(unsigned long long)arg1;
- (id)clientContext;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)operationQueue;

@end
