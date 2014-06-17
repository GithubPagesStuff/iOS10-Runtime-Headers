/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, NSMutableArray;

@interface WDList : NSObject  {
    WDDocument *mDocument;
    int mListId;
    int mListDefinitionId;
    NSMutableArray *mLevelOverrides;
}

@property(readonly) int listId;
@property(readonly) int listDefinitionId;


- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (id)levelOverrides;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (int)listId;
- (int)listDefinitionId;
- (void)dealloc;
- (id)description;

@end
