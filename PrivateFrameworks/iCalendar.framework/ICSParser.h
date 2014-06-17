/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSData, ICSTokenizer;

@interface ICSParser : NSObject  {
    long long _options;
    ICSTokenizer *_lexer;
    NSData *_data;
}

@property(readonly) ICSTokenizer * lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(long long)arg2;

- (id)lexer;
- (id)parseData;
- (bool)parseProperty:(id)arg1;
- (void)parseComponent:(id)arg1;
- (id)makeComponent:(char *)arg1;
- (bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)parseParameter:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;

@end
