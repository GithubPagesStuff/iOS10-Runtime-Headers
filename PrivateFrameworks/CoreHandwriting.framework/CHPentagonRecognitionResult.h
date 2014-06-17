/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHPentagonRecognitionResult : CHSketchRecognitionResult  {
    struct CGPoint { 
        double x; 
        double y; 
    } _center;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(readonly) struct CGPoint { double x1; double x2; } center;
@property(readonly) struct CGSize { double x1; double x2; } size;


- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint { double x1; double x2; })arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (struct CGPoint { double x1; double x2; })center;
- (id).cxx_construct;
- (struct CGSize { double x1; double x2; })size;

@end
