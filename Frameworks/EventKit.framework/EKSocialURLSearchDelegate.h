/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface EKSocialURLSearchDelegate : NSObject <ABSearchOperationDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _searchCompleteHandler;

}


- (void)_completeWithRecord:(void*)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(bool)arg3;
- (void)dealloc;
- (void)setCompletionHandler:(id)arg1;

@end
