/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILockupViewElement, SKUIEditorialComponent, SKUIItem;

@interface SKUILockupComponent : SKUIPageComponent  {
    SKUIEditorialComponent *_editorial;
    SKUIItem *_item;
    long long _itemIdentifier;
    struct SKUILockupStyle { 
        long long artworkSize; 
        long long layoutStyle; 
        unsigned long long visibleFields; 
    } _lockupStyle;
}

@property(readonly) SKUIEditorialComponent * editorial;
@property(readonly) SKUIItem * item;
@property(readonly) long long itemIdentifier;
@property(readonly) struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; } lockupStyle;
@property(readonly) SKUILockupViewElement * viewElement;
@property(readonly) bool _needsItemData;


- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (void)_setLockupStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg1;
- (struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })lockupStyle;
- (void)_setItem:(id)arg1;
- (id)editorial;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (bool)_needsItemData;
- (id)initWithViewElement:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (long long)componentType;
- (long long)itemIdentifier;
- (void).cxx_destruct;
- (id)item;

@end
