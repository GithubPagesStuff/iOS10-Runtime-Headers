/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _referenceOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _referenceAcceleration;
    struct CGPoint { 
        double x; 
        double y; 
    } _acceleration;
}

@property(readonly) struct CGPoint { double x1; double x2; } acceleration;


- (struct CGPoint { double x1; double x2; })acceleration;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;
- (struct UIOffset { double x1; double x2; })acceleratedOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg1 accelerationBoostFactor:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAcceleration:(struct CGPoint { double x1; double x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg2;

@end
