/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRAutocorrectionContext : NSObject  {
}

+ (id)autocorrectionContextOfType:(unsigned long long)arg1;

- (double)validSequenceCorrectionThreshold;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (id)prefixes;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (void)reset;

@end
