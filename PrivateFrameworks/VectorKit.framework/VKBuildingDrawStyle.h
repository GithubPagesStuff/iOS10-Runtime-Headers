/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingDrawStyle : VKRenderStyle  {
}

+ (int)renderStyleID;

- (bool)hasStrokeWidth3D;
- (bool)hasStrokeColor3D;
- (int)roofStyle;
- (bool)outlineAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })outlineColorAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })landmarkColorAtZoom:(float)arg1;
- (bool)visibleAtZoom:(float)arg1;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })strokeColor3DAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })facadeColorAtZoom:(float)arg1;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })footprintStrokeColorAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })flatColorAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })topColorAtZoom:(float)arg1;

@end
