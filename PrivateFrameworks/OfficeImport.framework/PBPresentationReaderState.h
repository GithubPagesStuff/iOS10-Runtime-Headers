/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, OITSUNoCopyDictionary, PBSlideState, PBOfficeArtReaderState, NSMutableArray, PDPresentation, PBOutlineBulletDictionary, ESDRoot, <TCCancelDelegate>, ESDContainer, PDSlideBase, ESDObject;

@interface PBPresentationReaderState : NSObject  {
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; } *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    ESDContainer *mSrcSlideListHolder;
    struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mCurrentSlideTextBlockStartIndexVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    unsigned int mTextLength;
    boolmHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcDocMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    <TCCancelDelegate> *mCancel;
    boolmHasSlideNumberPlaceholder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property ESDContainer * sourceSlideListHolder;
@property(retain) <TCCancelDelegate> * cancelDelegate;
@property bool hasSlideNumberPlaceholder;


- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)currentSourceMasterStyleInfoOfType:(int)arg1;
- (bool)hasSlideNumberPlaceholder;
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(bool)arg2;
- (bool)hasCurrentSourceMasterStyleInfoVector;
- (id)currentMacCharStyle;
- (id)currentBulletStyle;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setBulletIndex:(unsigned int)arg1;
- (unsigned int)bulletIndex;
- (void)setHasCharacterPropertyBulletIndex:(bool)arg1;
- (bool)hasCharacterPropertyBulletIndex;
- (void)setTextLength:(unsigned int)arg1;
- (void)setTgtSlide:(id)arg1;
- (id)fontEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontEntityCount;
- (id)slideIndexesRef;
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;
- (void)addSlideIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSlideIndexes;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setSourceSlideId:(unsigned int)arg1;
- (void)setSourceSlideListHolder:(id)arg1;
- (id)masterStyles:(id)arg1;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (id)tgtPresentation;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)docSourceMasterStyleInfoOfType:(int)arg1;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)arg1 tgtPresentation:(id)arg2;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;
- (id)sourceSlideListHolder;
- (struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)currentSlideTextBlockStartIndexVector;
- (void)setHasSlideNumberPlaceholder:(bool)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (id)tgtSlide;
- (id)slideState;
- (void)resetSlideState;
- (id)cancelDelegate;
- (void)setCancelDelegate:(id)arg1;
- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)reader;
- (id)officeArtState;
- (unsigned int)textLength;
- (bool)isCancelled;
- (void)dealloc;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;

@end
