/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class CoreThemeDocument;

@interface TDThemeSchema : NSObject  {
    CoreThemeDocument *_doc;
}

+ (bool)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2;

- (void)loadStandardEffectDefinitions;
- (void)loadDefaultFontCustomizations;
- (void)loadThemeDefaultLook;
- (void)loadBasicThemePart;
- (void)loadTemplateRenderingModeConstants;
- (void)loadEffectConstants;
- (void)loadSchemaDefinitions;
- (void)loadSchemaCategories;
- (void)loadColorNames;
- (void)loadMetafontSizes;
- (void)loadMetafontSelectors;
- (void)loadColorStatuses;
- (void)loadRenditionSubtypes;
- (void)loadRenditionTypes;
- (void)loadThemeLooks;
- (void)loadIterationTypes;
- (void)loadThemeUISizeClasses;
- (void)loadThemeIdioms;
- (void)loadThemeDrawingLayers;
- (void)loadThemeDirections;
- (void)loadThemePresentationStates;
- (void)loadThemeStates;
- (void)loadThemeParts;
- (void)loadThemeElements;
- (void)loadThemeValues;
- (void)loadThemeSizes;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(bool)arg3;
- (bool)_renditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_addSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; boolx3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1 withElement:(id)arg2;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; boolx3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1 withElement:(id)arg2;
- (void)sanityCheckAndUpdateDocumentIfNecessary;
- (void)resetThemeConstants;
- (void)loadArtworkDraftTypes;
- (void)loadZeroCodeArtworkInfo;
- (id)initWithThemeDocument:(id)arg1;
- (void)dealloc;

@end
