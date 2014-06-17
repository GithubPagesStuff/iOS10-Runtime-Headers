/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext  {
    struct { 
        unsigned int invalidateDelegateMetrics : 1; 
        unsigned int invalidateAttributes : 1; 
    } _flowLayoutInvalidationFlags;
}

@property bool invalidateFlowLayoutDelegateMetrics;
@property bool invalidateFlowLayoutAttributes;


- (id)init;
- (bool)invalidateFlowLayoutDelegateMetrics;
- (void)setInvalidateFlowLayoutDelegateMetrics:(bool)arg1;
- (bool)invalidateFlowLayoutAttributes;
- (void)setInvalidateFlowLayoutAttributes:(bool)arg1;

@end
