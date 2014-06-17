/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MLEQPreset : NSObject  {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForName:(id)arg1;
+ (id)eqPresetForBuiltInPresetType:(int)arg1;

- (int)typeForAVController;
- (int)builtInPresetType;
- (id)initWithBuiltInPresetType:(int)arg1;
- (id)localizedName;
- (id)name;
- (void).cxx_destruct;

@end
