/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {
    bool_deferredEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    bool_isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) bool deferringInterfaceUpdates;


- (void)_saveTitlesAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (bool)isDeferringInterfaceUpdates;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)dealloc;
- (id)imageForState:(unsigned long long)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;

@end
