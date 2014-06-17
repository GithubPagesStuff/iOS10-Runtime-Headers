/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSURL, NSDate, <NSCoding>;

@interface NSFileVersion : NSObject  {
    NSURL *_fileURL;
    id _addition;
    id _deadVersionIdentifier;
    id _nonLocalVersion;
    NSURL *_contentsURL;
    bool_isBackup;
    NSString *_localizedName;
    id _reserved4;
    NSDate *_modificationDate;
    bool_reserved5;
    bool_contentsURLIsAccessed;
    id _reserved1;
    id _reserved2;
    bool_discardable;
}

@property(readonly) unsigned long long size;
@property(getter=isUbiquitous,readonly) bool ubiquitous;
@property(copy,readonly) NSString * originalPOSIXName;
@property(getter=_isBackup,readonly) bool _isBackup;
@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSString * localizedNameOfSavingComputer;
@property(copy,readonly) NSDate * modificationDate;
@property(retain,readonly) <NSCoding> * persistentIdentifier;
@property(getter=isConflict,readonly) bool conflict;
@property(getter=isResolved) bool resolved;
@property(getter=isDiscardable) bool discardable;
@property(readonly) bool hasLocalContents;
@property(readonly) bool hasThumbnail;

+ (bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (void)_removeConflictObserver:(void*)arg1;
+ (void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(id)arg2;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (bool)_conflictsExistForItemAtURL:(id)arg1;
+ (id)versionsOfItemAtURL:(id)arg1;
+ (bool)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (bool)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3;
+ (id)_supportedGenerationalStorageClientIDs;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(id)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6;
+ (struct NSObject { Class x1; }*)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (struct NSObject { Class x1; }*)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(bool*)arg2 error:(id*)arg3;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_makeTemporaryStorageIdentifier;
+ (bool)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(bool)arg1;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(id)arg2;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (bool)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(bool)arg5;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)localizedName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)persistentIdentifier;
- (id)URL;
- (void)dealloc;
- (id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)_preserveConflictVersionLocally;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (bool)_setDocumentInfo:(id)arg1;
- (id)_documentInfo;
- (bool)_isBackup;
- (bool)isResolved;
- (void)setResolved:(bool)arg1;
- (id)modificationDate;
- (id)localizedNameOfSavingComputer;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)removeAndReturnError:(id*)arg1;
- (bool)hasThumbnail;
- (bool)hasLocalContents;
- (unsigned long long)size;
- (bool)isConflict;
- (id)originalPOSIXName;
- (id)_initWithAddition:(id)arg1;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(bool)arg6 revision:(id)arg7;
- (void)setDiscardable:(bool)arg1;
- (bool)isDiscardable;
- (bool)isUbiquitous;

@end
