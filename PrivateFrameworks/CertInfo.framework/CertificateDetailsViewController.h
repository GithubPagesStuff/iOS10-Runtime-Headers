/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController  {
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

@property(retain) id certificateTrust;
@property(retain) NSArray * keyValueSections;
@property(retain) NSArray * keyValueSectionTitles;


- (void)setKeyValueSectionTitles:(id)arg1;
- (void)setKeyValueSections:(id)arg1;
- (id)keyValueSectionTitles;
- (id)keyValueSections;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (void)setCertificateTrust:(id)arg1;
- (id)certificateTrust;
- (void)setCertificateProperties:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)_setup;
- (id)init;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;

@end
