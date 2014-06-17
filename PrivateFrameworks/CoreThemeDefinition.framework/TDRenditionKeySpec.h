/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class TDThemePart, TDThemeValue, TDThemeState, TDThemeElement, TDThemeUISizeClass, TDThemeSize, TDThemePresentationState, TDThemeDirection, TDThemeDrawingLayer, TDThemeIdiom;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } _stackScratchKey[16];
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_scratchKey;
}

@property(retain) TDThemeState * state;
@property(retain) TDThemeState * previousState;
@property(retain) TDThemePresentationState * presentationState;
@property(retain) TDThemeValue * value;
@property(retain) TDThemeValue * previousValue;
@property(retain) TDThemeSize * size;
@property(retain) TDThemeDirection * direction;
@property(retain) TDThemePart * part;
@property(retain) TDThemeElement * element;
@property(retain) TDThemeDrawingLayer * layer;
@property(retain) TDThemeIdiom * idiom;
@property(retain) TDThemeUISizeClass * sizeClassHorizontal;
@property(retain) TDThemeUISizeClass * sizeClassVertical;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)keyDescription;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withDocument:(id)arg2;
- (void)setScaleFactorString:(id)arg1;
- (id)scaleFactorString;
- (void)getKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (long long)attributeCount;
- (void)setGraphicsClass:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setNameIdentifier:(unsigned int)arg1;
- (unsigned int)nameIdentifier;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)setDimension2:(unsigned int)arg1;
- (void)setDimension1:(unsigned int)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (unsigned int)subtype;
- (unsigned int)graphicsClass;
- (unsigned int)memoryClass;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (unsigned int)dimension2;
- (unsigned int)dimension1;
- (void)setSubtype:(unsigned int)arg1;
- (id)debugDescription;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)scaleFactor;

@end
