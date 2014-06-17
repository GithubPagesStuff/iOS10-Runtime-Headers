/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCColorPalettizer : NSObject  {
    struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; } *m_pTree;
    boolisDefaultPaletteSize;
}


- (int)deleteListOctree:(struct _tagLevelItem { struct _tagLevelItem {} *x1; struct _tagOctreeNode {} *x2; }*)arg1;
- (int)deleteNodeOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; unsigned int x3; struct _tagFPRgbTriple { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; unsigned short x5; }*)arg1;
- (int)createNodeOctree:(struct _tagOctreeNode {}**)arg1 parent:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; unsigned int x3; struct _tagFPRgbTriple { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; unsigned short x5; }*)arg2;
- (int)paletteIndexFromTSUColor:(id)arg1;
- (id)getPaletteData;
- (id)getPngPaletteData;
- (id)getPaletteDataRaw;
- (unsigned int)paletteColorCount;
- (void)createPalette;
- (bool)addTSUColor:(id)arg1;
- (id)initWitDefaultPaletteSize;
- (id)initWitMaxPaletteSize:(unsigned int)arg1;
- (int)rgbToIndexOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 source:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2 destination:(char *)arg3;
- (int)paletteIndexFromQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; unsigned int x3; struct _tagFPRgbTriple { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; unsigned short x5; }*)arg1 paletteEntry:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg2 index:(unsigned short)arg3;
- (int)reduceOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (int)addPixelToOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 pixel:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2;
- (bool)addQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (int)deleteOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (int)createOctree:(struct _tagOctree {}**)arg1 maxPaletteSize:(unsigned short)arg2;
- (void)dealloc;

@end
