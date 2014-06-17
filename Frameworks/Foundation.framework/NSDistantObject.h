/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSConnection;

@interface NSDistantObject : NSProxy <NSCoding> {
    id _knownSelectors;
    unsigned long long _wireCount;
    unsigned long long _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}

@property(retain,readonly) NSConnection * connectionForProxy;

+ (void)initialize;
+ (id)newDistantObjectWithCoder:(id)arg1;
+ (id)proxyWithLocal:(id)arg1 connection:(id)arg2;
+ (id)proxyWithTarget:(id)arg1 connection:(id)arg2;
+ (void)_enableLogging:(bool)arg1;

- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)appendFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (id)copy;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)protocolForProxy;
- (void)setProtocolForProxy:(id)arg1;
- (id)connectionForProxy;
- (id)initWithLocal:(id)arg1 connection:(id)arg2;
- (id)initWithTarget:(id)arg1 connection:(id)arg2;
- (void)retainWireCount;
- (void)_releaseWireCount:(unsigned long long)arg1;
- (struct _NSZone { }*)zone;
- (Class)classForCoder;

@end
