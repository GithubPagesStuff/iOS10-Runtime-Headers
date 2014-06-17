/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileHandle;

@interface NSPipe : NSObject  {
}

@property(retain,readonly) NSFileHandle * fileHandleForReading;
@property(retain,readonly) NSFileHandle * fileHandleForWriting;

+ (id)pipe;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (id)fileHandleForWriting;
- (id)fileHandleForReading;

@end
