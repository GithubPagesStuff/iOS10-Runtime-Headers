/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@class NSObject<OS_xpc_object>;

@interface XPCEncoder : NSCoder  {
    NSObject<OS_xpc_object> *_encoding;
    NSObject<OS_xpc_object> *_currentObject;
    struct __CFDictionary { } *_encodedObjects;
    struct __CFDictionary { } *_conditionalObjects;
    unsigned long long _nextConditionalObjectID;
    struct __CFDictionary { } *_replacementObjects;
}

+ (id)copyEncodingForRootObject:(id)arg1;

- (void)encodeMachSendRight:(unsigned int)arg1 forKey:(id)arg2;
- (void)encodeEndpoint:(id)arg1 forKey:(id)arg2;
- (void)_verifyCurrentObject;
- (id)_replacementObjectForObject:(id)arg1;
- (void)_fixUpConditionalObjects;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id)encoding;
- (id)init;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (bool)allowsKeyedCoding;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (long long)versionForClassName:(id)arg1;
- (void)encodeRootObject:(id)arg1;

@end
