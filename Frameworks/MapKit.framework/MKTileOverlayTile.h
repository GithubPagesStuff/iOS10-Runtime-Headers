/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSData;

@interface MKTileOverlayTile : NSObject  {
    struct { 
        long long x; 
        long long y; 
        long long z; 
        double contentScaleFactor; 
    } _path;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _frame;
    double _scale;
    NSData *_image;
}

@property struct { long long x1; long long x2; long long x3; double x4; } path;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property double scale;
@property(retain) NSData * image;


- (void)setScale:(double)arg1;
- (void)setFrame:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (struct { long long x1; long long x2; long long x3; double x4; })path;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (double)scale;

@end
