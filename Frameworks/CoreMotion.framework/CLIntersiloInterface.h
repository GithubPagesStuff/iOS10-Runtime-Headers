/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class Protocol;

@interface CLIntersiloInterface : NSObject  {
    struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *> > > { 
        struct __tree<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>, std::__1::allocator<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *> > > { 
            struct __tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _selectors;
    Protocol *_protocol;
}

@property(readonly) Protocol * protocol;

+ (id)interfaceWithProtocol:(id)arg1 base:(id)arg2;

- (id)getInfoForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 base:(id)arg2;
- (id)protocol;
- (id)debugDescription;
- (bool)conformsToProtocol:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
