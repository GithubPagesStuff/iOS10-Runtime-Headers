/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase  {
    NSString *_VPNUUID;
    NSArray *_SafariDomains;
}

@property(retain) NSString * VPNUUID;
@property(retain) NSArray * SafariDomains;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setSafariDomains:(id)arg1;
- (void)setVPNUUID:(id)arg1;
- (id)SafariDomains;
- (id)VPNUUID;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end
