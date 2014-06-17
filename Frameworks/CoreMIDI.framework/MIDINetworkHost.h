/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@class NSString;

@interface MIDINetworkHost : NSObject  {
    struct _MIDINetworkHostImpl { id x1; id x2; unsigned long long x3; id x4; id x5; } *_impl;
}

@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * address;
@property(readonly) unsigned long long port;
@property(retain,readonly) NSString * netServiceName;
@property(retain,readonly) NSString * netServiceDomain;

+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;

- (id)addressAsText;
- (bool)hasSameAddressAs:(id)arg1;
- (id)netServiceDomain;
- (id)netServiceName;
- (id)init;
- (unsigned long long)port;
- (id)host;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)address;

@end
