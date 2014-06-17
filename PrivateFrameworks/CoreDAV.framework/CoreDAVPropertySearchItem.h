/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem  {
    CoreDAVLeafItem *_prop;
    NSString *_match;
    NSString *_matchTypeAttribute;
}

@property(retain) CoreDAVLeafItem * prop;
@property(retain) NSString * match;
@property(retain) NSString * matchTypeAttribute;


- (void)setMatchTypeAttribute:(id)arg1;
- (id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2;
- (void)setMatch:(id)arg1;
- (id)matchTypeAttribute;
- (id)match;
- (void)setProp:(id)arg1;
- (id)prop;
- (void)write:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (int)wellKnownPrincipalSearchType;

@end
