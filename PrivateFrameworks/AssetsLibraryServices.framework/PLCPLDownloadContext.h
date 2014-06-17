/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject  {
    bool_completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
}

@property(retain) NSString * taskIdentifier;
@property(retain) NSString * resourceTypeDescription;
@property double progress;
@property bool completed;
@property(retain) NSError * error;


- (void)setResourceTypeDescription:(id)arg1;
- (id)resourceTypeDescription;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setCompleted:(bool)arg1;
- (bool)completed;

@end
