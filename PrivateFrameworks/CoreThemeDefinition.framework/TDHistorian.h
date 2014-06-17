/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class CoreThemeDocument;

@interface TDHistorian : NSObject  {
    CoreThemeDocument *document;
}


- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;
- (id)facetDefinitionsChangedSinceDate:(id)arg1;
- (id)namedElementsChangedSinceDate:(id)arg1;
- (id)fontSizesChangedSinceDate:(id)arg1;
- (id)fontsChangedSinceDate:(id)arg1;
- (id)colorsChangedSinceDate:(id)arg1;
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(bool*)arg2;
- (id)productionsWithModifiedAssets;
- (bool)foundDataChangesSinceDate:(id)arg1;
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;
- (void)_updateEntryForManagedObject:(id)arg1;
- (void)updateEntriesForManagedObjects:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end
