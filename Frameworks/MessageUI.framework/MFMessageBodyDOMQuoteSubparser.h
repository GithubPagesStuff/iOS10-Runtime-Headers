/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMessageBodyElement_Private>, NSMutableArray, DOMRange;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundDedentedAttributionRangeBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundTrailingEmptyQuoteRangeBlock;

    <MFMessageBodyElement_Private> *_lastUnindentedElement;
    <MFMessageBodyElement_Private> *_lastUnindentedAttributionHint;
    NSMutableArray *_unindentedSiblingNodes;
    unsigned long long _unindentedSiblingGap;
    DOMRange *_trailingEmptyQuoteRange;
    unsigned long long _trailingEmptyQuoteLevel;
}


- (bool)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)copyBlocks;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id)arg1;
- (void)setFoundDedentedAttributionRangeBlock:(id)arg1;
- (void)dealloc;

@end
