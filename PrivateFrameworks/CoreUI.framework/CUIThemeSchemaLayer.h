/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject  {
    NSArray *_renditions;
    NSString *_name;
    unsigned long long _index;
}

@property(retain) NSArray * renditions;
@property(retain) NSString * name;
@property unsigned long long index;

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(struct CGSize { double x1; double x2; }*)arg3 forPartFeatures:(unsigned long long)arg4;
- (void)setRenditions:(id)arg1;
- (id)renditions;
- (id)name;
- (void)setName:(id)arg1;

@end
