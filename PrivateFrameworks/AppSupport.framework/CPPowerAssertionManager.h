/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSCountedSet, NSString, NSMutableDictionary, NSMutableSet, <CPPowerAssertionManagerDelegate>;

@interface CPPowerAssertionManager : NSObject  {
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    <CPPowerAssertionManagerDelegate> *_delegate;
}

@property(readonly) NSString * uuid;
@property <CPPowerAssertionManagerDelegate> * delegate;

+ (id)sharedInstance;

- (id)uuid;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)setUUIDPrefix:(id)arg1;
- (unsigned long long)retainCountForContext:(id)arg1;
- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;

@end
