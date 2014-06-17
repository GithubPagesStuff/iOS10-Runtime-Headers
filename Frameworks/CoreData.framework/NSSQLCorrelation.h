/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLManyToMany;

@interface NSSQLCorrelation : NSObject  {
    NSSQLManyToMany *_manyToMany;
    long long _fk;
    long long _invfk;
    unsigned int _fok;
    unsigned int _invfok;
}


- (unsigned int)invfok;
- (unsigned int)fok;
- (long long)invfk;
- (long long)fk;
- (id)manyToMany;
- (id)initWithManyToMany:(id)arg1 fk:(long long)arg2 invfk:(long long)arg3 fok:(unsigned int)arg4 invfok:(unsigned int)arg5;
- (void)dealloc;
- (id)description;

@end
