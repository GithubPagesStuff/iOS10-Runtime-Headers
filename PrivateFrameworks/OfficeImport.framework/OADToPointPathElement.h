/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADToPointPathElement : OADPathElement  {
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            boolisFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            boolisFormulaResult; 
            int value; 
        } y; 
    } mToPoint;
    boolmRelative;
}


- (bool)relative;
- (void)setRelative:(bool)arg1;
- (id)initWithToPoint:(struct OADAdjustPoint { struct OADAdjustCoord { boolx_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { boolx_2_1_1; int x_2_1_2; } x2; })arg1;
- (struct OADAdjustPoint { struct OADAdjustCoord { boolx_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { boolx_2_1_1; int x_2_1_2; } x2; })toPoint;
- (id).cxx_construct;

@end
