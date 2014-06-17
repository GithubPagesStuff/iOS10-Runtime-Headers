/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class _UIBackdropView, <SKUIPickerViewDelegate>, NSArray, UIView, UIPickerView;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    _UIBackdropView *_backdropView;
    <SKUIPickerViewDelegate> *_delegate;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}

@property <SKUIPickerViewDelegate> * delegate;
@property long long selectedItemIndex;


- (id)initWithTitles:(id)arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (long long)selectedItemIndex;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)layoutSubviews;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;

@end
