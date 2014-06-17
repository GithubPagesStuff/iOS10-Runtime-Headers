/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppContext, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject  {
    struct { 
        unsigned int sparse : 1; 
        unsigned int parsingUpdatedTree : 1; 
        unsigned int parsingReorderedSiblings : 1; 
    } _parsingFlags;
    IKViewElementStyleFactory *_styleFactory;
    unsigned long long _itmlIDSequence;
    IKAppContext *_appContext;
}

@property(retain) IKViewElementStyleFactory * styleFactory;
@property unsigned long long itmlIDSequence;
@property IKAppContext * appContext;
@property(getter=isSparse) bool sparse;

+ (unsigned long long)elementTypeByTagName:(id)arg1;
+ (id)_elementStylesFromDOMElement:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
+ (id)elementsForDocumentElement:(id)arg1 sparse:(bool)arg2 appContext:(id)arg3;
+ (void)initialize;

- (id)styleFactory;
- (bool)isSparse;
- (unsigned long long)itmlIDSequence;
- (void)setSparse:(bool)arg1;
- (void)setStyleFactory:(id)arg1;
- (void)setItmlIDSequence:(unsigned long long)arg1;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
- (void)setAppContext:(id)arg1;
- (id)appContext;
- (void).cxx_destruct;

@end
