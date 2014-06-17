/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDPresentation, CXNamespace, OAXTableStyleCache, NSMutableDictionary, <TCCancelDelegate>, OAXDrawingState, OAVReadState;

@interface PXPresentationState : OCXReadState  {
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    <TCCancelDelegate> *mCancel;
    CXNamespace *_PXPresentationMLNamespace;
}

@property(retain) <TCCancelDelegate> * cancelDelegate;
@property(retain) CXNamespace * PXPresentationMLNamespace;


- (void)setTgtPresentation:(id)arg1;
- (void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2;
- (long long)slideIndexForSlideURL:(id)arg1;
- (void)resetOfficeArtState;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (void)setPXPresentationMLNamespace:(id)arg1;
- (id)modelObjectForLocation:(id)arg1;
- (id)PXPresentationMLNamespace;
- (id)tgtPresentation;
- (id)cancelDelegate;
- (void)setCancelDelegate:(id)arg1;
- (id)officeArtState;
- (id)oavState;
- (id)tableStyleCache;
- (void)setupNSForXMLFormat:(int)arg1;
- (bool)isCancelled;
- (id)init;
- (void)dealloc;

@end
