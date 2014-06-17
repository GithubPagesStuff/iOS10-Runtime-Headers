/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString;

@interface WebRenderLayer : NSObject  {
    NSArray *children;
    NSString *name;
    NSString *compositingInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } bounds;
    boolcomposited;
    boolseparator;
}

+ (id)compositingInfoForLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 2; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 2; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 3; unsigned int x38 : 2; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 5; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; struct RenderLayerModelObject {} *x50; struct RenderLayer {} *x51; struct RenderLayer {} *x52; struct RenderLayer {} *x53; struct RenderLayer {} *x54; struct RenderLayer {} *x55; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_56_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_56_1_2; } x56; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_57_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_57_1_2; } x57; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_58_1_1; struct LayoutUnit { int x_2_2_1; } x_58_1_2; } x58; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_59_1_1; struct LayoutUnit { int x_2_2_1; } x_59_1_2; } x59; struct IntSize { int x_60_1_1; int x_60_1_2; } x60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_62_1_1; struct LayoutUnit { int x_2_2_1; } x_62_1_2; } x62; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_63_1_1; } x63; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_64_1_1; } x64; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_65_1_1; } x65; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_66_1_1; } x66; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_67_1_1; } x67; struct unique_ptr<WebCore::ClipRectsCache, std::__1::default_delete<WebCore::ClipRectsCache> > { struct __compressed_pair<WebCore::ClipRectsCache *, std::__1::default_delete<WebCore::ClipRectsCache> > { struct ClipRectsCache {} *x_1_2_1; } x_68_1_1; } x68; struct IntPoint { int x_69_1_1; int x_69_1_2; } x69; struct unique_ptr<WebCore::RenderMarquee, std::__1::default_delete<WebCore::RenderMarquee> > { struct __compressed_pair<WebCore::RenderMarquee *, std::__1::default_delete<WebCore::RenderMarquee> > { struct RenderMarquee {} *x_1_2_1; } x_70_1_1; } x70; struct LayoutUnit { int x_71_1_1; } x71; struct LayoutUnit { int x_72_1_1; } x72; struct unique_ptr<WebCore::TransformationMatrix, std::__1::default_delete<WebCore::TransformationMatrix> > { struct __compressed_pair<WebCore::TransformationMatrix *, std::__1::default_delete<WebCore::TransformationMatrix> > { struct TransformationMatrix {} *x_1_2_1; } x_73_1_1; } x73; struct RenderPtr<WebCore::RenderReplica> { struct RenderReplica {} *x_74_1_1; } x74; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_75_1_1; } x75; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_76_1_1; } x76; struct RenderLayer {} *x77; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_78_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_78_1_2; } x78; struct unique_ptr<WebCore::RenderLayerBacking, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct __compressed_pair<WebCore::RenderLayerBacking *, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct RenderLayerBacking {} *x_1_2_1; } x_79_1_1; } x79; }*)arg1;
+ (id)nameForLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 2; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 2; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 3; unsigned int x38 : 2; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 5; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; struct RenderLayerModelObject {} *x50; struct RenderLayer {} *x51; struct RenderLayer {} *x52; struct RenderLayer {} *x53; struct RenderLayer {} *x54; struct RenderLayer {} *x55; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_56_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_56_1_2; } x56; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_57_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_57_1_2; } x57; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_58_1_1; struct LayoutUnit { int x_2_2_1; } x_58_1_2; } x58; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_59_1_1; struct LayoutUnit { int x_2_2_1; } x_59_1_2; } x59; struct IntSize { int x_60_1_1; int x_60_1_2; } x60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_62_1_1; struct LayoutUnit { int x_2_2_1; } x_62_1_2; } x62; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_63_1_1; } x63; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_64_1_1; } x64; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_65_1_1; } x65; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_66_1_1; } x66; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_67_1_1; } x67; struct unique_ptr<WebCore::ClipRectsCache, std::__1::default_delete<WebCore::ClipRectsCache> > { struct __compressed_pair<WebCore::ClipRectsCache *, std::__1::default_delete<WebCore::ClipRectsCache> > { struct ClipRectsCache {} *x_1_2_1; } x_68_1_1; } x68; struct IntPoint { int x_69_1_1; int x_69_1_2; } x69; struct unique_ptr<WebCore::RenderMarquee, std::__1::default_delete<WebCore::RenderMarquee> > { struct __compressed_pair<WebCore::RenderMarquee *, std::__1::default_delete<WebCore::RenderMarquee> > { struct RenderMarquee {} *x_1_2_1; } x_70_1_1; } x70; struct LayoutUnit { int x_71_1_1; } x71; struct LayoutUnit { int x_72_1_1; } x72; struct unique_ptr<WebCore::TransformationMatrix, std::__1::default_delete<WebCore::TransformationMatrix> > { struct __compressed_pair<WebCore::TransformationMatrix *, std::__1::default_delete<WebCore::TransformationMatrix> > { struct TransformationMatrix {} *x_1_2_1; } x_73_1_1; } x73; struct RenderPtr<WebCore::RenderReplica> { struct RenderReplica {} *x_74_1_1; } x74; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_75_1_1; } x75; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_76_1_1; } x76; struct RenderLayer {} *x77; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_78_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_78_1_2; } x78; struct unique_ptr<WebCore::RenderLayerBacking, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct __compressed_pair<WebCore::RenderLayerBacking *, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct RenderLayerBacking {} *x_1_2_1; } x_79_1_1; } x79; }*)arg1;

- (bool)isSeparator;
- (bool)isComposited;
- (id)compositingInfo;
- (id)heightString;
- (id)widthString;
- (id)positionString;
- (id)initWithWebFrame:(id)arg1;
- (id)initWithRenderLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 2; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 2; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 3; unsigned int x38 : 2; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 5; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; struct RenderLayerModelObject {} *x50; struct RenderLayer {} *x51; struct RenderLayer {} *x52; struct RenderLayer {} *x53; struct RenderLayer {} *x54; struct RenderLayer {} *x55; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_56_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_56_1_2; } x56; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_57_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_57_1_2; } x57; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_58_1_1; struct LayoutUnit { int x_2_2_1; } x_58_1_2; } x58; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_59_1_1; struct LayoutUnit { int x_2_2_1; } x_59_1_2; } x59; struct IntSize { int x_60_1_1; int x_60_1_2; } x60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_62_1_1; struct LayoutUnit { int x_2_2_1; } x_62_1_2; } x62; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_63_1_1; } x63; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_64_1_1; } x64; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_65_1_1; } x65; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_66_1_1; } x66; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_67_1_1; } x67; struct unique_ptr<WebCore::ClipRectsCache, std::__1::default_delete<WebCore::ClipRectsCache> > { struct __compressed_pair<WebCore::ClipRectsCache *, std::__1::default_delete<WebCore::ClipRectsCache> > { struct ClipRectsCache {} *x_1_2_1; } x_68_1_1; } x68; struct IntPoint { int x_69_1_1; int x_69_1_2; } x69; struct unique_ptr<WebCore::RenderMarquee, std::__1::default_delete<WebCore::RenderMarquee> > { struct __compressed_pair<WebCore::RenderMarquee *, std::__1::default_delete<WebCore::RenderMarquee> > { struct RenderMarquee {} *x_1_2_1; } x_70_1_1; } x70; struct LayoutUnit { int x_71_1_1; } x71; struct LayoutUnit { int x_72_1_1; } x72; struct unique_ptr<WebCore::TransformationMatrix, std::__1::default_delete<WebCore::TransformationMatrix> > { struct __compressed_pair<WebCore::TransformationMatrix *, std::__1::default_delete<WebCore::TransformationMatrix> > { struct TransformationMatrix {} *x_1_2_1; } x_73_1_1; } x73; struct RenderPtr<WebCore::RenderReplica> { struct RenderReplica {} *x_74_1_1; } x74; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_75_1_1; } x75; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_76_1_1; } x76; struct RenderLayer {} *x77; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_78_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_78_1_2; } x78; struct unique_ptr<WebCore::RenderLayerBacking, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct __compressed_pair<WebCore::RenderLayerBacking *, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct RenderLayerBacking {} *x_1_2_1; } x_79_1_1; } x79; }*)arg1;
- (void)buildDescendantLayers:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 2; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 2; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 3; unsigned int x38 : 2; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 5; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; struct RenderLayerModelObject {} *x50; struct RenderLayer {} *x51; struct RenderLayer {} *x52; struct RenderLayer {} *x53; struct RenderLayer {} *x54; struct RenderLayer {} *x55; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_56_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_56_1_2; } x56; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_57_1_1; struct LayoutSize { struct LayoutUnit { int x_1_3_1; } x_2_2_1; struct LayoutUnit { int x_2_3_1; } x_2_2_2; } x_57_1_2; } x57; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_58_1_1; struct LayoutUnit { int x_2_2_1; } x_58_1_2; } x58; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_59_1_1; struct LayoutUnit { int x_2_2_1; } x_59_1_2; } x59; struct IntSize { int x_60_1_1; int x_60_1_2; } x60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; struct LayoutSize { struct LayoutUnit { int x_1_2_1; } x_62_1_1; struct LayoutUnit { int x_2_2_1; } x_62_1_2; } x62; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_63_1_1; } x63; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_64_1_1; } x64; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_65_1_1; } x65; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_66_1_1; } x66; struct unique_ptr<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct __compressed_pair<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> *, std::__1::default_delete<WTF::Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> > > { struct Vector<WebCore::RenderLayer *, 0, WTF::CrashOnOverflow> {} *x_1_2_1; } x_67_1_1; } x67; struct unique_ptr<WebCore::ClipRectsCache, std::__1::default_delete<WebCore::ClipRectsCache> > { struct __compressed_pair<WebCore::ClipRectsCache *, std::__1::default_delete<WebCore::ClipRectsCache> > { struct ClipRectsCache {} *x_1_2_1; } x_68_1_1; } x68; struct IntPoint { int x_69_1_1; int x_69_1_2; } x69; struct unique_ptr<WebCore::RenderMarquee, std::__1::default_delete<WebCore::RenderMarquee> > { struct __compressed_pair<WebCore::RenderMarquee *, std::__1::default_delete<WebCore::RenderMarquee> > { struct RenderMarquee {} *x_1_2_1; } x_70_1_1; } x70; struct LayoutUnit { int x_71_1_1; } x71; struct LayoutUnit { int x_72_1_1; } x72; struct unique_ptr<WebCore::TransformationMatrix, std::__1::default_delete<WebCore::TransformationMatrix> > { struct __compressed_pair<WebCore::TransformationMatrix *, std::__1::default_delete<WebCore::TransformationMatrix> > { struct TransformationMatrix {} *x_1_2_1; } x_73_1_1; } x73; struct RenderPtr<WebCore::RenderReplica> { struct RenderReplica {} *x_74_1_1; } x74; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_75_1_1; } x75; struct RenderPtr<WebCore::RenderScrollbarPart> { struct RenderScrollbarPart {} *x_76_1_1; } x76; struct RenderLayer {} *x77; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_78_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_78_1_2; } x78; struct unique_ptr<WebCore::RenderLayerBacking, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct __compressed_pair<WebCore::RenderLayerBacking *, std::__1::default_delete<WebCore::RenderLayerBacking> > { struct RenderLayerBacking {} *x_1_2_1; } x_79_1_1; } x79; }*)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id).cxx_construct;
- (id)children;

@end
