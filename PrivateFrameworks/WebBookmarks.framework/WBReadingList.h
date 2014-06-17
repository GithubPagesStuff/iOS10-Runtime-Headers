/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSObject<OS_dispatch_queue>, WBReadingListPrivate;

@interface WBReadingList : NSObject  {
    WBReadingListPrivate *_private;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)defaultReadingList;
+ (bool)supportsURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_init;
- (bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4;

@end
