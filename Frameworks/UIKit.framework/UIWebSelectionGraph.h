/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject  {
    NSMutableArray *_selectionNodes;
}


- (id)init;
- (void)dealloc;
- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(bool)arg2 maxDepth:(int)arg3;
- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;

@end
