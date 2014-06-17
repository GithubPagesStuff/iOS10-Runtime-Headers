/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVLeafItem * commonName;


- (void)setCommonName:(id)arg1;
- (id)commonName;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setHref:(id)arg1;
- (id)href;

@end
