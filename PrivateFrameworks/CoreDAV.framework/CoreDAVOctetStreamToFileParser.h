/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser  {
    NSFileHandle *_fileHandle;
}

@property(retain) NSFileHandle * fileHandle;


- (id)fileHandle;
- (void)setFileHandle:(id)arg1;
- (id)initWithFileHandle:(id)arg1;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (void)dealloc;

@end
