/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject  {
    NSString *_url;
    int _mailboxRowid;
    MFMailMessageLibrary *_library;
}


- (unsigned long long)flagsForUID:(id)arg1;
- (void)deleteAllUIDs;
- (unsigned int)numberOfMessageIDs;
- (void)deleteUIDsNotInArray:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 { }*)arg1;
- (void)dealloc;

@end
