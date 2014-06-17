/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData  {
    ML3MusicLibrary *_library;
    NSOutputStream *_outputStream;
}

@property(readonly) ML3MusicLibrary * library;
@property(readonly) NSOutputStream * outputStream;


- (id)outputStream;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylist:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrack:(unsigned long long)arg1;
- (id)library;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;
- (id)begin;
- (void).cxx_destruct;
- (id)end;

@end
