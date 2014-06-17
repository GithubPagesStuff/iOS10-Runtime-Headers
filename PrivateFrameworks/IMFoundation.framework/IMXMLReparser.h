/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableString, IMXMLReparserContext, NSError, NSXMLParser;

@interface IMXMLReparser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    NSMutableString *_output;
    IMXMLReparserContext *_context;
    NSError *_error;
    unsigned long long _depth;
}


- (bool)parseWithContext:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
