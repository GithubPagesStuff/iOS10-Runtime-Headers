/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        BOOL identifier[512]; 
        int type; 
        boolnotifyOnEntry; 
        boolnotifyOnExit; 
        union { 
            struct { 
                BOOL proximityUUID[512]; 
                unsigned short major; 
                unsigned short minor; 
                int definitionMask; 
                boolnotifyEntryStateOnDisplay; 
            } beaconAttributes; 
            struct { 
                struct { 
                    double latitude; 
                    double longitude; 
                } center; 
                double radius; 
                double desiredAccuracy; 
            } circularAttributes; 
        } ; 
    } fRegion;
}

@property(readonly) struct { double x1; double x2; } center;
@property(readonly) double radius;
@property(copy,readonly) NSString * identifier;
@property bool notifyOnEntry;
@property bool notifyOnExit;
@property(readonly) struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; } clientRegion;

+ (bool)supportsSecureCoding;

- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (void)setNotifyOnExit:(bool)arg1;
- (bool)notifyOnExit;
- (void)setNotifyOnEntry:(bool)arg1;
- (bool)notifyOnEntry;
- (void)_encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)initCircularRegionWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; })arg1;
- (struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; })clientRegion;
- (id)identifier;
- (double)radius;
- (struct { double x1; double x2; })center;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
