/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKDOMElement, IKJSNavigationDocument, IKDOMImplementation, NSString, <IKJSDOMDocumentAppBridge>;

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, IKJSDOMXPathEvaluator> {
    <IKJSDOMDocumentAppBridge> *_appBridge;
}

@property <IKJSDOMDocumentAppBridge> * appBridge;
@property IKJSNavigationDocument * navigationDocument;
@property(readonly) IKDOMImplementation * implementation;
@property(retain,readonly) IKDOMElement * documentElement;
@property(retain,readonly) NSString * inputEncoding;
@property(retain,readonly) NSString * xmlEncoding;
@property bool xmlStandalone;
@property(retain) NSString * xmlVersion;
@property bool strictErrorChecking;
@property(retain) NSString * documentURI;


- (void)setNavigationDocument:(id)arg1;
- (bool)markUpdated;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (void)setStrictErrorChecking:(bool)arg1;
- (bool)strictErrorChecking;
- (void)runTest:(id)arg1 :(id)arg2;
- (id)appBridge;
- (id)navigationDocument;
- (void)setAppBridge:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)setNeedsUpdate;
- (id)implementation;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(long long)arg4 :(id)arg5;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)adoptNode:(id)arg1;
- (id)getElementById:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (void)setDocumentURI:(id)arg1;
- (id)documentURI;
- (void)setXmlStandalone:(bool)arg1;
- (bool)xmlStandalone;
- (void)setXmlVersion:(id)arg1;
- (id)xmlVersion;
- (id)xmlEncoding;
- (id)inputEncoding;
- (id)nodeName;
- (id)documentElement;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (long long)nodeType;
- (void).cxx_destruct;
- (id)getElementsByTagName:(id)arg1;
- (void)replace:(id)arg1;

@end
