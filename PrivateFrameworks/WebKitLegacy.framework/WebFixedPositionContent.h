/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFixedPositionContent : NSObject  {
    struct WebFixedPositionContentData { id x1; struct HashMap<WTF::RetainPtr<CALayer>, std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> >, WTF::PtrHash<WTF::RetainPtr<CALayer> >, WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> > > > { struct HashTable<WTF::RetainPtr<CALayer>, WTF::KeyValuePair<WTF::RetainPtr<CALayer>, std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<CALayer>, std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> > > >, WTF::PtrHash<WTF::RetainPtr<CALayer> >, WTF::HashMap<WTF::RetainPtr<CALayer>, std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> >, WTF::PtrHash<WTF::RetainPtr<CALayer> >, WTF::HashTraits<WTF::RetainPtr<CALayer> >, WTF::HashTraits<std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<CALayer> > > { struct KeyValuePair<WTF::RetainPtr<CALayer>, std::__1::unique_ptr<ViewportConstrainedLayerData, std::__1::default_delete<ViewportConstrainedLayerData> > > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; } *_private;
}


- (double)minimumOffsetFromFixedPositionLayersToAnchorEdge:(long long)arg1 ofRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inLayer:(id)arg3;
- (void)setViewportConstrainedLayers:(struct HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >, WTF::PtrHash<CALayer *>, WTF::HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >::KeyValuePairTraits, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > {} *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; }*)arg1 stickyContainerMap:(struct HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> > { struct HashTable<CALayer *, WTF::KeyValuePair<CALayer *, CALayer *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<CALayer *, CALayer *> >, WTF::PtrHash<CALayer *>, WTF::HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >::KeyValuePairTraits, WTF::HashTraits<CALayer *> > { struct KeyValuePair<CALayer *, CALayer *> {} *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; }*)arg2;
- (id)initWithWebView:(id)arg1;
- (void)dealloc;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint { double x1; double x2; })arg2;
- (void)didFinishScrollingOrZooming;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasFixedOrStickyPositionLayers;

@end
