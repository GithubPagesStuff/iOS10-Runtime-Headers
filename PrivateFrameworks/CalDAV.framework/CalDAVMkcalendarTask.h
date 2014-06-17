/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate>;

@interface CalDAVMkcalendarTask : CoreDAVTask  {
    NSSet *_setElements;
}

@property <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> * delegate;
@property(retain) NSSet * setElements;


- (id)setElements;
- (void)setSetElements:(id)arg1;
- (void)setSupportForEvents:(bool)arg1 tasks:(bool)arg2;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)description;

@end
