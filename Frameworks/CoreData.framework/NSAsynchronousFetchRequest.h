/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest  {
    NSFetchRequest *_fetchRequest;
    id _requestCompletionBlock;
}

@property(readonly) NSFetchRequest * fetchRequest;
@property(readonly) id completionBlock;


- (id)initWithFetchRequest:(id)arg1 completionBlock:(id)arg2;
- (id)fetchRequest;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)completionBlock;

@end
