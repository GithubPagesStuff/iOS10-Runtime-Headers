/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject  {
    NSMutableString *_text;
    NSMutableArray *_fragments;
}


- (void)appendArchivedRepresentation:(id)arg1;
- (id)archivedRepresentation;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (void)getString:(id*)arg1 quoteLevel:(unsigned int*)arg2 ofFragmentAtIndex:(unsigned long long)arg3;
- (unsigned long long)fragmentCount;
- (id)quotedString:(unsigned int)arg1;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(bool*)arg2 encoding:(unsigned int)arg3;
- (id)string;
- (void)dealloc;

@end
