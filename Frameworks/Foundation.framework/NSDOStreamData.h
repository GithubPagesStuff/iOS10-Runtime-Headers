/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDOStreamData : NSMutableData  {
    id refObject;
    struct { 
        id data; 
        char *datap; 
        char *limitp; 
        char *startp; 
        id callback; 
        booldatapVM; 
    } stream;
}


- (id)init;
- (unsigned long long)length;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)finalize;
- (void)dealloc;

@end
