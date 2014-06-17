/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCGamepad : NSObject  {
}

@property(readonly) GCController * controller;
@property(copy) id valueChangedHandler;
@property(readonly) GCControllerDirectionPad * dpad;
@property(readonly) GCControllerButtonInput * buttonA;
@property(readonly) GCControllerButtonInput * buttonB;
@property(readonly) GCControllerButtonInput * buttonX;
@property(readonly) GCControllerButtonInput * buttonY;
@property(readonly) GCControllerButtonInput * leftShoulder;
@property(readonly) GCControllerButtonInput * rightShoulder;

+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)button3;
- (id)button2;
- (id)button1;
- (id)button0;
- (id)initWithController:(id)arg1;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)didChangeValueForElement:(id)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (id)rightShoulder;
- (id)leftShoulder;
- (id)buttonY;
- (id)buttonX;
- (id)buttonB;
- (id)buttonA;
- (id)dpad;
- (id)saveSnapshot;
- (id)controller;

@end
