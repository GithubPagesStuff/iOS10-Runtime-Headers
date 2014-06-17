/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter  {
    NSMutableArray *mStateStack;
}

+ (struct _xmlTextWriter { }*)createNonXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(bool)arg3;
+ (struct _xmlTextWriter { }*)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(bool)arg3;

- (void)writeTextString:(id)arg1 forElement:(id)arg2;
- (bool)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2;
- (bool)writeOAAttribute:(id)arg1 doubleContent:(double)arg2;
- (bool)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writeOAAttribute:(id)arg1 intContent:(long long)arg2;
- (bool)writeOAAttribute:(id)arg1 boolContent:(bool)arg2;
- (void)pushOAState;
- (bool)writeOAAttribute:(id)arg1 content:(id)arg2;
- (bool)startOAElement:(id)arg1;
- (bool)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2;
- (bool)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2;
- (bool)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(bool)arg2;
- (bool)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2;
- (bool)writeAttribute:(id)arg1 doubleContent:(double)arg2;
- (bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writeAttribute:(id)arg1 intContent:(long long)arg2;
- (bool)writeAttribute:(id)arg1 boolContent:(bool)arg2;
- (id)pushStateWithSharedPrefix:(id)arg1;
- (void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3;
- (bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4;
- (bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3;
- (bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(bool)arg3;
- (bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3;
- (bool)writeAttribute:(id)arg1 content:(id)arg2;
- (id)currentAttributePrefix;
- (bool)startElement:(id)arg1;
- (id)currentElementPrefix;
- (id)pushState;
- (void)popState;
- (id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (id)initWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (id)currentState;
- (bool)addElement:(id)arg1;
- (void)dealloc;

@end
