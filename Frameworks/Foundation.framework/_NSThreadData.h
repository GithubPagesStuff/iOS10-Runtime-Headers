/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface _NSThreadData : NSObject  {
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    BOOL qos;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } attr;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } *tid;
    double pri;
    double defpri;
}



@end
