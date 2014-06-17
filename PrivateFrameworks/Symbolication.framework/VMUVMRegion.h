/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUVMRegion : NSObject  {
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    boolsummarized;
    boolrecalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned int nesting_depth;
    boolis_submap;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned long long pages_purgable_vol;
    unsigned long long pages_purgable_non_vol;
    unsigned long long pages_purgable_empty;
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;

- (bool)isSubmap;
- (unsigned long long)purgeablePageCount;
- (unsigned long long)swappedOutPageCount;
- (unsigned long long)sharedNowPrivatePageCount;
- (unsigned long long)dirtyPageCount;
- (unsigned long long)residentPageCount;
- (unsigned long long)virtualPageCount;
- (unsigned int)maxProtection;
- (id)breakAtLength:(unsigned long long)arg1;
- (bool)hasSameInfoAsRegion:(id)arg1;
- (void)addInfoFromRegion:(id)arg1;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (unsigned int)protection;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)type;
- (id)path;
- (void)dealloc;
- (id)description;

@end
