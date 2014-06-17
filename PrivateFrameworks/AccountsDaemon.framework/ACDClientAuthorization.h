/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject  {
    bool_isGranted;
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
}

@property bool isGranted;
@property(retain) ACDClient * client;
@property(retain) NSSet * grantedPermissions;
@property(copy) NSDictionary * options;


- (void)setIsGranted:(bool)arg1;
- (void)setGrantedPermissions:(id)arg1;
- (id)initForClient:(id)arg1;
- (id)grantedPermissions;
- (void)setClient:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)client;
- (void).cxx_destruct;
- (bool)isGranted;

@end
