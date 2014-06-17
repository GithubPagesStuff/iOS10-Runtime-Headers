/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABPersonTableActionDataSource : NSObject  {
    NSMutableArray *_topActions;
    NSMutableArray *_bottomActions;
    struct __CFDictionary { } *_actionsByProperty;
    struct __CFDictionary { } *_actionGroupingsByProperty;
    struct __CFDictionary { } *_inlineActionsByProperty;
    struct __CFSet { } *_hiddenActions;
}


- (void)setAction:(id)arg1 hidden:(bool)arg2;
- (bool)isActionHidden:(id)arg1;
- (id)actionWithActionGrouping:(long long)arg1 atIndex:(long long)arg2;
- (struct __CFArray { }*)indexesOfActionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (long long)actionCountForActionGrouping:(long long)arg1;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2;
- (id)actionForProperty:(int)arg1 withActionGrouping:(long long)arg2 atIndex:(long long)arg3;
- (long long)actionCountForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (long long)groupingCountForProperty:(int)arg1;
- (id)newActionsForProperty:(int)arg1;
- (void)removeAction:(id)arg1;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9;
- (struct __CFArray { }*)groupingsForProperty:(int)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (bool)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(bool)arg3 property:(int)arg4 inArray:(id)arg5 outActions:(id*)arg6 outIndex:(long long*)arg7;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (struct __CFDictionary { }*)actionGroupingsByProperty;
- (struct __CFDictionary { }*)actionsByProperty;
- (struct __CFDictionary { }*)inlineActionsByProperty;
- (id)bottomActions;
- (id)topActions;
- (bool)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 outActions:(id*)arg6 outIndex:(long long*)arg7;
- (void)dealloc;

@end
