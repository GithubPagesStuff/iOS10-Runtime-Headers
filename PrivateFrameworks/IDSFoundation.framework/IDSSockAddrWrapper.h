/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSockAddrWrapper : NSObject <NSCopying> {
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    } _sa;
}

@property(readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }* sa;
@property(readonly) const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }* sa4;
@property(readonly) const struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }* sa6;
@property(readonly) unsigned short saPortHostOrder;

+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;

- (void)copySockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)ipString;
- (id)ipData;
- (bool)isEqualToSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (unsigned short)saPortHostOrder;
- (bool)isEqualToWrapper:(id)arg1;
- (const struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }*)sa6;
- (const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)sa4;
- (id)initWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sa;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
