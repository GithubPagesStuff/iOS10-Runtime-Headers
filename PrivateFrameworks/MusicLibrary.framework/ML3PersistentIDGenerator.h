/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject  {
    ML3DatabaseConnection *_connection;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}


- (void)_calculateNewRun;
- (long long)nextPersistentID;
- (id)initWithDatabaseConnection:(id)arg1;
- (void).cxx_destruct;

@end
