/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIPointIterator : NSObject  {
}

+ (bool)addPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (bool)isPoint:(id)arg1 ofType:(int)arg2;
+ (bool)isDoneForState:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg1;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(bool)arg3;
+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(bool)arg3;


@end
