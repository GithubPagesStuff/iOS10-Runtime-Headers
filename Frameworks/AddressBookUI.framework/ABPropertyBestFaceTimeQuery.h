/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPropertyBestFaceTimeQueryDelegate>, NSArray, ABPropertyGroupItem, ABPropertyIDSRequest, NSMutableArray;

@interface ABPropertyBestFaceTimeQuery : NSObject  {
    NSMutableArray *_faceTimeableItems;
    <ABPropertyBestFaceTimeQueryDelegate> *_delegate;
    NSArray *_propertyItems;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
}

@property(retain) NSMutableArray * faceTimeableItems;
@property(readonly) ABPropertyGroupItem * bestFaceTimeProperty;
@property <ABPropertyBestFaceTimeQueryDelegate> * delegate;
@property(retain) NSArray * propertyItems;
@property(retain) ABPropertyIDSRequest * faceTimeIDSRequest;


- (void)setFaceTimeableItems:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setFaceTimeIDSRequest:(id)arg1;
- (id)faceTimeIDSRequest;
- (id)initWithPropertyItems:(id)arg1;
- (id)bestFaceTimeProperty;
- (id)faceTimeableItems;
- (id)propertyItems;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
