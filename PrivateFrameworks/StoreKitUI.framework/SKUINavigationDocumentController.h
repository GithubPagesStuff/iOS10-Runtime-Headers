/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UINavigationController, SKUIClientContext, NSMutableArray;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    SKUIClientContext *_clientContext;
    UINavigationController *_navigationController;
    UINavigationController *_overrideNavigationController;
    NSMutableArray *_stackItems;
}

@property(readonly) UINavigationController * navigationController;
@property(retain) SKUIClientContext * clientContext;
@property(retain) UINavigationController * overrideNavigationController;


- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (id)documents;
- (void)setOverrideNavigationController:(id)arg1;
- (id)overrideNavigationController;
- (void)popAllDocuments;
- (void)garbageCollectDocuments;
- (id)_activeNavigationController;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)initWithNavigationController:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void).cxx_destruct;
- (id)navigationController;

@end
