/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError;

@interface _NSJSONReader : NSObject  {
    id input;
    int kind;
    NSError *error;
}

+ (bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(bool)arg3;

- (id)init;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2;
- (id)parseData:(id)arg1 options:(unsigned long long)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2;

@end
