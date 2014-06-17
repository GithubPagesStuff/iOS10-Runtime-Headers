/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@class NSData, NSDictionary;

@interface FCRFace : NSObject  {
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    } face;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    } leftEye;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    } rightEye;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    } mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    unsigned long long trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } face;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } leftEye;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } rightEye;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } mouth;
@property double faceSize;
@property double faceAngle;
@property long long trackID;
@property unsigned long long trackDuration;
@property(retain) NSData * faceprint;
@property int faceType;
@property(retain) NSDictionary * faceLandmarkPoints;
@property(retain) NSDictionary * expressionFeatures;
@property(retain) NSDictionary * additionalInfo;
@property(readonly) bool hasLeftEyeBounds;
@property(readonly) bool hasRightEyeBounds;
@property(readonly) bool hasMouthBounds;


- (void)setAdditionalInfo:(id)arg1;
- (id)additionalInfo;
- (void)setTrackID:(long long)arg1;
- (long long)trackID;
- (void)setTrackDuration:(unsigned long long)arg1;
- (unsigned long long)trackDuration;
- (void)setRightEye:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })rightEye;
- (void)setMouth:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })mouth;
- (void)setLeftEye:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })leftEye;
- (void)setFaceprint:(id)arg1;
- (id)faceprint;
- (void)setFaceType:(int)arg1;
- (int)faceType;
- (void)setFaceSize:(double)arg1;
- (double)faceSize;
- (void)setFaceLandmarkPoints:(id)arg1;
- (id)faceLandmarkPoints;
- (void)setFace:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })face;
- (void)setFaceAngle:(double)arg1;
- (double)faceAngle;
- (void)setExpressionFeatures:(id)arg1;
- (id)expressionFeatures;
- (bool)hasMouthBounds;
- (bool)hasRightEyeBounds;
- (bool)hasLeftEyeBounds;
- (void)dealloc;

@end
