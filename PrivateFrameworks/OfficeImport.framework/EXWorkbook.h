/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXWorkbook : NSObject  {
}

+ (void)setDefaultParagraphProperties:(id)arg1;
+ (void)setupDefaultTextStyleWithState:(id)arg1;
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5;
+ (void)readSheetsFrom:(id)arg1 relationNS:(struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)arg2 state:(id)arg3;
+ (void)readStylesFrom:(id)arg1 state:(id)arg2;
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(bool)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6;
+ (void)readStringsFrom:(id)arg1 state:(id)arg2;
+ (void)setupProcessors:(id)arg1;


@end
