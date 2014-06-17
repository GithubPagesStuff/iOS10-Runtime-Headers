/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia  {
    NSData *mData;
    NSString *mName;
    float mStart;
    float mEnd;
    boolloop;
}

@property(retain) NSData * data;
@property(retain) NSString * name;
@property(readonly) bool isAudioOnly;
@property bool loop;
@property float movieStartPoint;
@property float movieEndPoint;


- (void)setMovieEndPoint:(float)arg1;
- (float)movieEndPoint;
- (void)setMovieStartPoint:(float)arg1;
- (float)movieStartPoint;
- (bool)isAudioOnly;
- (void)setLoop:(bool)arg1;
- (bool)loop;
- (id)name;
- (id)data;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)setData:(id)arg1;

@end
