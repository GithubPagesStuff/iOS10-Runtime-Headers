/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, VKMapSnapshotCreator, UIImage, MKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject  {
    id _requester;
    id _context;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    unsigned long long _zoomLevel;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    VKMapSnapshotCreator *_snapshotCreator;
}

@property(retain) id context;
@property(retain) id requester;
@property(retain) NSString * attributionString;
@property struct { double x1; double x2; } coordinate;
@property unsigned long long zoomLevel;
@property struct CGSize { double x1; double x2; } size;
@property MKMapSnapshotCreator * delegate;
@property(readonly) UIImage * image;


- (unsigned long long)zoomLevel;
- (void)setZoomLevel:(unsigned long long)arg1;
- (void)setAttributionString:(id)arg1;
- (id)attributionString;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setRequester:(id)arg1;
- (id)requester;
- (id)context;
- (void)setContext:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (id)image;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize { double x1; double x2; })size;

@end
