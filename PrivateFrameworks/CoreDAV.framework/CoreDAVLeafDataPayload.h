/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSArray, NSURL, NSData;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property(retain) NSURL * serverID;
@property(readonly) NSData * dataPayload;
@property(readonly) NSString * syncKey;
@property(readonly) NSArray * childrenOrder;


- (void)setServerID:(id)arg1;
- (id)syncKey;
- (id)serverID;
- (id)dataPayload;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (void)dealloc;

@end
