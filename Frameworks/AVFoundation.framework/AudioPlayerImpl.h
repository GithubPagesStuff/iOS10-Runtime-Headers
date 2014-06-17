/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSDictionary, NSData, NSURL, <AVAudioPlayerDelegate>, NSObject<OS_dispatch_queue>;

@interface AudioPlayerImpl : NSObject  {
    <AVAudioPlayerDelegate> *_delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    bool_playRetain;
    NSArray *_channelAssignments;
    struct AVAudioPlayerCpp { struct __CFData {} *x1; struct __CFURL {} *x2; struct __CFDictionary {} *x3; unsigned int x4; struct AudioStreamBasicDescription { double x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; unsigned int x_5_1_9; } x5; struct AudioStreamBasicDescription { double x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; } x6; unsigned long long x7; char *x8; unsigned int x9; struct AudioFormatListItem {} *x10; unsigned int x11; struct OpaqueAudioFileID {} *x12; struct OpaqueAudioQueue {} *x13; long long x14; long long x15; long long x16; double x17; double x18; double x19; unsigned int x20; double x21; int x22; struct AudioFilePacketTableInfo { long long x_23_1_1; int x_23_1_2; int x_23_1_3; } x23; int x24; int x25; int x26; boolx27; boolx28; boolx29; boolx30; unsigned int x31; boolx32; boolx33; boolx34; boolx35; double x36; double x37; double x38; double x39; double x40; double x41; unsigned int x42; struct AudioQueueLevelMeterState {} *x43; struct AudioQueueBuffer {} *x44[3]; struct AudioQueueBuffer {} *x45; int x46; boolx47; boolx48; boolx49; boolx50; boolx51; struct AudioQueueBuffer {} *x52; boolx53; unsigned long long x54; boolx55; boolx56; boolx57; boolx58; long long x59; int x60; unsigned int x61; unsigned int x62; void *x63; int (*x64)(); unsigned int x65; struct AudioChannelLayout {} *x66; unsigned int x67; struct TEMP_AudioQueueChannelAssignment {} *x68; } *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}


- (id)init;
- (void)dealloc;

@end
