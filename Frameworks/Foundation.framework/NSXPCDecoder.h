/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_xpc_object>, NSXPCConnection, NSXPCInterface;

@interface NSXPCDecoder : NSXPCCoder  {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    void **_decoder;
    NSXPCConnection *_connection;
    struct { /* ? */ } *_collections[128];
    struct { 
        unsigned long long offset; 
        int type; 
    } _rootObject;
    unsigned int _collectionPointer;
    id _allowedClassesList[128];
    long long _allowedClassesIndex;
}

@property(retain) NSXPCInterface * interface;
@property SEL replyToSelector;
@property NSXPCConnection * _connection;

+ (id)_createXPCObjectWithData:(id)arg1;

- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)debugDescription;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)finalize;
- (void)dealloc;
- (SEL)replyToSelector;
- (const char *)_decodeCStringForKey:(id)arg1;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)setReplyToSelector:(SEL)arg1;
- (void)setInterface:(id)arg1;
- (id)interface;
- (id)_initWithRootXPCObject:(id)arg1;
- (id)decodeInvocation;
- (id)_connection;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (float)decodeFloatForKey:(id)arg1;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (int)decodeIntForKey:(id)arg1;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;

@end
