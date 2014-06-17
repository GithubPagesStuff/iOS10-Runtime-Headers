/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class ACAccountCredential, NSMapTable, ACAccountStore, OAURLRequestSigner;

@interface MKMapItemMetadataRequester : NSObject <NSURLConnectionDelegate> {
    NSMapTable *_requestsForURLs;
    NSMapTable *_connectionsForURLs;
    NSMapTable *_dataForConnections;
    bool_hasCheckedYelpAccountCredentials;
    ACAccountStore *_accountStore;
    ACAccountCredential *_yelpAccountCredentials;
    OAURLRequestSigner *_signer;
}

@property(readonly) OAURLRequestSigner * signer;
@property(readonly) ACAccountCredential * yelpAccountCredentials;

+ (id)sharedInstance;

- (void)cancelRequestsForBusinessMetadata:(id)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (id)yelpAccountCredentials;
- (void)handleConnection:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)sendRequest:(id)arg1;
- (id)signer;
- (id)accountStore;
- (id)init;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end
