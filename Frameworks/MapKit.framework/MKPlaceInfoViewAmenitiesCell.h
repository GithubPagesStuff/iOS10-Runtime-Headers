/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableArray;

@interface MKPlaceInfoViewAmenitiesCell : ABContactCell  {
    NSMutableArray *_labels;
    NSMutableArray *_values;
    double _totalLabelWidth;
    double _totalValueWidth;
    double _height;
    NSArray *_keyValues;
}

@property(retain) NSArray * keyValues;

+ (id)reuseIdentifier;

- (void)setKeyValues:(id)arg1;
- (id)attributeValueWithString:(id)arg1;
- (id)attributeLabelWithString:(id)arg1;
- (id)keyValues;
- (void)refreshContent;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
