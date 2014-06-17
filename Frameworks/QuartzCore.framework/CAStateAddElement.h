/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;

@interface CAStateAddElement : CAStateElement  {
    NSString *_keyPath;
    id _object;
    id _beforeObject;
}

@property(copy) NSString * keyPath;
@property(retain) id object;
@property(retain) id beforeObject;


- (id)beforeObject;
- (void)setBeforeObject:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)apply:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)foreachLayer:(id)arg1;
- (id)debugDescription;
- (void)setObject:(id)arg1;
- (id)object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)matches:(id)arg1;
- (id)keyPath;

@end
