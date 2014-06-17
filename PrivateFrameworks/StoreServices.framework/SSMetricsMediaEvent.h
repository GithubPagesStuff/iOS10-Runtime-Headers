/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent  {
}

@property(retain) NSNumber * itemIdentifier;
@property(retain) NSString * locationDescription;
@property(retain) NSString * mediaEventType;
@property(retain) NSString * mediaURL;


- (void)setMediaEventType:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (id)mediaURL;
- (id)mediaEventType;
- (void)setLocationDescription:(id)arg1;
- (id)locationDescription;
- (void)setItemIdentifier:(id)arg1;
- (id)itemIdentifier;
- (id)init;

@end
