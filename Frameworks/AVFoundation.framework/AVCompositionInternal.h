/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspectorLoader, AVAssetInspector, NSMutableArray;

@interface AVCompositionInternal : NSObject  {
    struct OpaqueFigMutableComposition { } *mutableComposition;
    long long formatReaderInitializationOnce;
    long long assetInspectorInitializationOnce;
    long long tracksInitializationOnce;
    struct OpaqueFigFormatReader { } *formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    struct CGSize { 
        double width; 
        double height; 
    } naturalSize;
    NSMutableArray *tracks;
}



@end
