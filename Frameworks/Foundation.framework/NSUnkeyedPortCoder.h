/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDOStreamData, NSMutableArray;

@interface NSUnkeyedPortCoder : NSConcretePortCoder  {
    id sndPort;
    id rcvPort;
    NSDOStreamData *doStreamData;
    NSMutableArray *components;
    NSMutableArray *importedObjects;
    unsigned long long componentIndex;
    boolisBycopy;
    boolisByref;
    boolisValid;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)_enableLogging:(bool)arg1;

- (id)connection;
- (id)debugDescription;
- (void)invalidate;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)dealloc;
- (id)decodeInvocation;
- (void)encodeInvocation:(id)arg1;
- (id)decodeRetainedObject;
- (void)encodeObject:(id)arg1 isBycopy:(bool)arg2 isByref:(bool)arg3;
- (void)dispatch;
- (bool)isBycopy;
- (id)_proxyForLocalObject:(id)arg1;
- (bool)isByref;
- (void)importObject:(id)arg1;
- (id)finishedComponents;
- (void)decodeReturnValue:(id)arg1;
- (void)encodeReturnValue:(id)arg1;
- (void)encodePortObject:(id)arg1;
- (id)decodePortObject;
- (id)importedObjects;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)components;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (id)decodeDataObject;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (long long)versionForClassName:(id)arg1;

@end
