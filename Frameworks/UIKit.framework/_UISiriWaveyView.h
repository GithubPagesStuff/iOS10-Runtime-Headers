/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class EAGLContext, <_UISiriWaveyViewDelegate>, CADisplayLink;

@interface _UISiriWaveyView : UIView  {
    struct { 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisX; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisY; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisZ; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_trans; 
    } _projection;
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _textureHandle;
    unsigned int _programHandle;
    int _attribPosition;
    int _uniformProjection;
    int _uniformOpacity;
    int _uniformLineWidth;
    int _uniformPowerLevel;
    int _uniformDisplayWidth;
    int _uniformTimeOffset;
    int _uniformTexture;
    int _viewWidth;
    int _viewHeight;
    float _projection11;
    double _startTime;
    float _runningPowerLevels[5];
    unsigned int _powerPointer;
    bool_isInitialized;
    bool_justStarted;
    int _state;
    int _mode;
    <_UISiriWaveyViewDelegate> *_delegate;
}

@property <_UISiriWaveyViewDelegate> * delegate;
@property int mode;

+ (Class)layerClass;

- (void)setHidden:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (bool)inSiriMode;
- (bool)inDictationMode;
- (void)_updateOrthoProjection;
- (bool)_resizeFromLayer:(id)arg1;
- (bool)_initGL;
- (bool)_setupTexture;
- (bool)_setupVertexBuffer;
- (bool)_setupShaders;
- (bool)_setupFramebuffer;
- (void)_updateCurveLayer:(id)arg1;
- (void)_setupDisplayLink;
- (void)_cleanupGL;
- (void)_tearDownDisplayLink;
- (float)_currentMicPowerLevel;
- (float)_powerLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)startListening;
- (int)mode;
- (void)didMoveToSuperview;
- (void)layoutSubviews;

@end
