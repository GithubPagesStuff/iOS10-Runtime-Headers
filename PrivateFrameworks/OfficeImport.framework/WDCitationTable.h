/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject  {
    WDDocument *mDocument;
    NSMutableDictionary *mCitations;
}


- (id)citationIDs;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (id)document;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1;

@end
