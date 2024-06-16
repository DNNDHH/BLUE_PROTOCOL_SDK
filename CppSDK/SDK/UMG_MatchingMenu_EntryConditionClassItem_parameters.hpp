#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionClassItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem
// 0x0030 (0x0030 - 0x0000)
struct UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem) == 0x000030, "Wrong size on UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem, CallFunc_GetClassNameText_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

