/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EBBorders : NSObject  {
}

+ (int)convertEDDiagonalEnumToXl:(int)arg1;
+ (int)convertEDBorderEnumToXl:(int)arg1;
+ (id)edBordersFromXlDXf:(struct XlDXf { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; struct XlDXfUserFmt {} *x7; struct XlDXfFont {} *x8; struct XlDXfAlign {} *x9; struct XlDXfBorders {} *x10; struct XlDXfPattern {} *x11; struct XlDXfProtect {} *x12; }*)arg1 edResources:(id)arg2;
+ (id)edBordersFromXlXf:(struct XlXf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; boolx25; boolx26; boolx27; boolx28; boolx29; boolx30; boolx31; boolx32; boolx33; boolx34; boolx35; boolx36; boolx37; boolx38; boolx39; }*)arg1 edResources:(id)arg2;
+ (int)convertXlDiagStyleEnumToED:(int)arg1;
+ (int)convertXlBorderEnumToED:(int)arg1;


@end
