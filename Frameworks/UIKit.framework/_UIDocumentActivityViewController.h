/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController  {
    boolhideSystemActivities;
    UIDocumentInteractionController *_documentInteractionController;
    bool_hideSystemActivities;
}

@property UIDocumentInteractionController * documentInteractionController;
@property bool hideSystemActivities;


- (void)setHideSystemActivities:(bool)arg1;
- (bool)hideSystemActivities;
- (void)setDocumentInteractionController:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (bool)_shouldShowSystemActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (id)documentInteractionController;
- (bool)sourceIsManaged;
- (void)viewDidDisappear:(bool)arg1;

@end
