/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSArray, MSAsset, NSData;

@interface MSAssetCollection : NSObject <NSSecureCoding> {
    NSString *_assetCollectionID;
    NSString *_ctag;
    MSAsset *_masterAsset;
    NSArray *_derivedAssets;
    NSString *_fileName;
    bool_wasDeleted;
    long long _initialFailureDate;
}

@property(retain) NSString * assetCollectionID;
@property(retain) NSString * ctag;
@property(retain) MSAsset * masterAsset;
@property(readonly) NSData * masterAssetHash;
@property(retain) NSArray * derivedAssets;
@property(retain) NSString * fileName;
@property bool wasDeleted;
@property long long initialFailureDate;

+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)setWasDeleted:(bool)arg1;
- (void)setMasterAsset:(id)arg1;
- (void)setDerivedAssets:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
- (void)setCtag:(id)arg1;
- (bool)wasDeleted;
- (id)ctag;
- (id)masterAssetHash;
- (void)setInitialFailureDate:(long long)arg1;
- (long long)initialFailureDate;
- (id)derivedAssets;
- (id)masterAsset;
- (void)setAssetCollectionID:(id)arg1;
- (id)assetCollectionID;
- (void)setFileName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)fileName;

@end
