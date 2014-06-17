/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMImplementation, DOMStyleSheetList, WebFrame, DOMDocumentType, DOMHTMLCollection, DOMElement, DOMAbstractView, DOMHTMLElement;

@interface DOMDocument : DOMNode  {
}

@property(readonly) WebFrame * webFrame;
@property(readonly) DOMDocumentType * doctype;
@property(readonly) DOMImplementation * implementation;
@property(readonly) DOMElement * documentElement;
@property(copy,readonly) NSString * inputEncoding;
@property(copy,readonly) NSString * xmlEncoding;
@property(copy) NSString * xmlVersion;
@property bool xmlStandalone;
@property(copy) NSString * documentURI;
@property(readonly) DOMAbstractView * defaultView;
@property(readonly) DOMStyleSheetList * styleSheets;
@property(copy) NSString * title;
@property(copy,readonly) NSString * referrer;
@property(copy,readonly) NSString * domain;
@property(copy,readonly) NSString * URL;
@property(copy) NSString * cookie;
@property(retain) DOMHTMLElement * body;
@property(readonly) DOMHTMLCollection * images;
@property(readonly) DOMHTMLCollection * applets;
@property(readonly) DOMHTMLCollection * links;
@property(readonly) DOMHTMLCollection * forms;
@property(readonly) DOMHTMLCollection * anchors;
@property(copy,readonly) NSString * lastModified;
@property(copy) NSString * charset;
@property(copy,readonly) NSString * defaultCharset;
@property(copy,readonly) NSString * readyState;
@property(copy,readonly) NSString * characterSet;
@property(copy,readonly) NSString * preferredStylesheetSet;
@property(copy) NSString * selectedStylesheetSet;
@property(readonly) DOMElement * activeElement;


- (id)origin;
- (void)setBody:(id)arg1;
- (id)body;
- (id)implementation;
- (id)createTouchList;
- (id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7;
- (id)webkitGetNamedFlows;
- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (bool)hasFocus;
- (id)getElementsByClassName:(id)arg1;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(bool)arg3;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)getElementsByName:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (bool)queryCommandSupported:(id)arg1;
- (bool)queryCommandState:(id)arg1;
- (bool)queryCommandIndeterm:(id)arg1;
- (bool)queryCommandEnabled:(id)arg1;
- (bool)execCommand:(id)arg1;
- (bool)execCommand:(id)arg1 userInterface:(bool)arg2;
- (bool)execCommand:(id)arg1 userInterface:(bool)arg2 value:(id)arg3;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (id)createNSResolver:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)getOverrideStyle:(id)arg1 :(id)arg2;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)createTreeWalker:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(bool)arg4;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(bool)arg4;
- (id)createNodeIterator:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(bool)arg4;
- (id)createEvent:(id)arg1;
- (id)adoptNode:(id)arg1;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)createAttributeNS:(id)arg1 :(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)importNode:(id)arg1 :(bool)arg2;
- (id)importNode:(id)arg1 deep:(bool)arg2;
- (id)createEntityReference:(id)arg1;
- (id)createAttribute:(id)arg1;
- (id)createProcessingInstruction:(id)arg1 :(id)arg2;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)currentScript;
- (id)visibilityState;
- (id)compatMode;
- (id)activeElement;
- (void)setSelectedStylesheetSet:(id)arg1;
- (id)selectedStylesheetSet;
- (id)preferredStylesheetSet;
- (id)readyState;
- (id)defaultCharset;
- (void)setCharset:(id)arg1;
- (id)charset;
- (id)anchors;
- (id)applets;
- (id)head;
- (id)cookie;
- (id)referrer;
- (id)styleSheets;
- (id)defaultView;
- (void)setDocumentURI:(id)arg1;
- (id)documentURI;
- (void)setXmlStandalone:(bool)arg1;
- (bool)xmlStandalone;
- (void)setXmlVersion:(id)arg1;
- (id)xmlVersion;
- (id)xmlEncoding;
- (id)inputEncoding;
- (id)doctype;
- (id)createCSSStyleDeclaration;
- (id)documentElement;
- (id)createRange;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)characterSet;
- (bool)hidden;
- (id)lastModified;
- (id)createDocumentFragment;
- (id)createElementNS:(id)arg1 :(id)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createElement:(id)arg1;
- (id)getComputedStyle:(id)arg1 :(id)arg2;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)domain;
- (void)setCookie:(id)arg1;
- (id)URL;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(bool)arg4;
- (id)getElementsByTagName:(id)arg1;
- (id)forms;
- (id)links;
- (id)images;
- (id)URLWithAttributeString:(id)arg1;
- (id)webFrame;
- (id)_documentRange;
- (id)createBlockPlaceholder;

@end
