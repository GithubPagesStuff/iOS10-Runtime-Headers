/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CHBTrendLine : NSObject  {
}

+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; int x6; unsigned short x7; unsigned short x8; unsigned short x9; int x10; boolx11; boolx12; boolx13; boolx14; boolx15; boolx16; boolx17; boolx18; boolx19; boolx20; }*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;
+ (void)readFrom:(struct XlChartTrendLine { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<unsigned int> { unsigned int *x_9_1_1; unsigned int *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<int> { int *x_10_1_1; int *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; struct XlChartLinkedData {} *x13; struct XlChartLinkedData {} *x14; struct ChVector<XlChartCustomLegend *> { struct XlChartCustomLegend {} **x_15_1_1; struct XlChartCustomLegend {} **x_15_1_2; unsigned int x_15_1_3; unsigned int x_15_1_4; unsigned int x_15_1_5; } x15; int (**x16)(); struct XlHeader { unsigned int x_17_1_1; short x_17_1_2; unsigned char x_17_1_3; } x17; double x18; double x19; double x20; int x21; unsigned char x22; unsigned char x23; unsigned char x24; }*)arg1 toSeries:(id)arg2 state:(id)arg3;


@end
