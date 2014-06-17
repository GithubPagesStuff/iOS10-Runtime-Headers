/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaItemArray : NSObject <NSSecureCoding> {
    Class _itemArrayCoderPIDDataCodingClass;
    NSArray *_items;
}

@property(retain,readonly) NSArray * items;

+ (bool)supportsSecureCoding;

- (id)items;
- (id)initWithItems:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
