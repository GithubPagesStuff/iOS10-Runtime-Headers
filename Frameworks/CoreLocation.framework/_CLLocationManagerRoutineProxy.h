/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocationManagerRoutine, NSXPCConnection, NSObject<OS_dispatch_queue>, <CLLocationManagerDelegate>;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    bool_updating;
    NSXPCConnection *_connection;
    <CLLocationManagerDelegate> *_delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(retain) NSXPCConnection * connection;
@property <CLLocationManagerDelegate> * delegate;
@property CLLocationManagerRoutine * locationManagerRoutine;
@property bool updating;


- (void)setUpdating:(bool)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (bool)updating;
- (void)didUpdateLocations:(id)arg1;
- (id)locationManagerRoutine;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)createConnection;
- (id)connection;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setConnection:(id)arg1;
- (void)dealloc;

@end
