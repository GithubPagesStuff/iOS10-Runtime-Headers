/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVItemWithNoChildren *_unauthenticated;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * all;
@property(retain) CoreDAVItemWithNoChildren * authenticated;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;
@property(retain) CoreDAVItem * property;
@property(retain) CoreDAVItemWithNoChildren * selfItem;

+ (id)copyParseRules;

- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsAll;
- (id)selfItem;
- (id)all;
- (void)setSelfItem:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (void)setAll:(id)arg1;
- (id)unauthenticated;
- (void)setProperty:(id)arg1;
- (id)property;
- (void)setAuthenticated:(id)arg1;
- (id)authenticated;
- (void)write:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)hashString;
- (void)setHref:(id)arg1;
- (id)href;

@end
