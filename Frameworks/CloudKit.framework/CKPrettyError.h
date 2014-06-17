/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPrettyError : NSError  {
}

+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4;
+ (id)sanitizedError:(id)arg1;
+ (bool)isError:(id)arg1 withCodes:(id)arg2;
+ (bool)isError:(id)arg1 withCode:(long long)arg2;
+ (id)descriptionForError:(id)arg1 paths:(bool)arg2;
+ (id)secureCodableError:(id)arg1;
+ (id)errorWithDictionaryRepresentation:(id)arg1;
+ (id)dictionaryRepresentationForError:(id)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6;
+ (id)_errorDomain;
+ (id)descriptionForError:(id)arg1;
+ (id)itemErrorFromError:(id)arg1 forID:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;

- (id)CKPartialErrorDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end
