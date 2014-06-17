/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject  {
    bool_mediaMatchesPortraitOrientation;
    bool_mediaMatchesLandscapeOrientation;
    NSString *_href;
    NSString *_rel;
    NSString *_sizes;
}

@property(copy) NSString * href;
@property(readonly) NSURL * hrefURL;
@property(copy) NSString * rel;
@property(copy) NSString * sizes;
@property bool mediaMatchesPortraitOrientation;
@property bool mediaMatchesLandscapeOrientation;


- (void)dealloc;
- (void)setMediaMatchesLandscapeOrientation:(bool)arg1;
- (bool)mediaMatchesLandscapeOrientation;
- (void)setMediaMatchesPortraitOrientation:(bool)arg1;
- (bool)mediaMatchesPortraitOrientation;
- (void)setSizes:(id)arg1;
- (id)sizes;
- (void)setRel:(id)arg1;
- (id)rel;
- (void)setHref:(id)arg1;
- (id)href;
- (id)hrefURL;

@end
