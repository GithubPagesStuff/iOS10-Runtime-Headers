/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, <SFUInputStream>, OISFUCryptoKey;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation  {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    boolmHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    <SFUInputStream> *mInputStream;
    boolmDeleteFileWhenDone;
}


- (long long)encodedLength;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (void)deleteFileWhenDone;
- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (void)readFileAttributes;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (bool)isCryptoKeyIdenticalToKey:(id)arg1;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (long long)dataLength;
- (id)inputStream;
- (bool)isEncrypted;
- (bool)isReadable;
- (id)path;
- (void)dealloc;
- (id)description;
- (unsigned int)fileType;
- (id)initWithPath:(id)arg1;
- (void)setFileType:(unsigned int)arg1;

@end
