/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WBAnnotation : NSObject  {
}

+ (id)readRangedFrom:(id)arg1 index:(unsigned int)arg2 type:(int)arg3 paragraph:(id)arg4;
+ (void)readFrom:(id)arg1 at:(int)arg2 paragraph:(id)arg3;
+ (unsigned long long)findStartFrom:(id)arg1 annotation:(const struct WrdAnnotation { int (**x1)(); int x2; int x3; int x4; struct WrdAnnotationReferenceDescriptor {} *x5; struct WrdDateTime {} *x6; }*)arg2;


@end
