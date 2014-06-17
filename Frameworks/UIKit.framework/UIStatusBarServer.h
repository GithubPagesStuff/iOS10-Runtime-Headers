/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIStatusBarServerClient>;

@interface UIStatusBarServer : NSObject  {
    <UIStatusBarServerClient> *_statusBar;
    struct __CFRunLoopSource { } *_source;
}

@property(retain) <UIStatusBarServerClient> * statusBar;

+ (unsigned int)_serverPort;
+ (void)runServer;
+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (int)getStyleOverrides;
+ (struct { boolx1[25]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { boolx_23_1_1[25]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)getStatusBarOverrideData;
+ (const struct { boolx1[25]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)getStatusBarData;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postStatusBarOverrideData:(struct { boolx1[25]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { boolx_23_1_1[25]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)arg1;
+ (void)postStatusBarData:(const struct { boolx1[25]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg1 withActions:(int)arg2;
+ (unsigned int)_publisherPort;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)addStatusBarItem:(int)arg1;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;

- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)_receivedStatusBarData:(struct { boolx1[25]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg1 actions:(int)arg2;
- (id)statusBar;
- (void)setStatusBar:(id)arg1;

@end
