#pragma once

 

// Package: PlayerProfileClassListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.ExecuteUbergraph_PlayerProfileClassListItem
// 0x0030 (0x0030 - 0x0000)
struct PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem) == 0x000008, "Wrong alignment on PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem");
static_assert(sizeof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem) == 0x000030, "Wrong size on PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem");
static_assert(offsetof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem, EntryPoint) == 0x000000, "Member 'PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem, CallFunc_GetClassNameText_ReturnValue) == 0x000008, "Member 'PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfileClassListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileClassListItem_C_PreConstruct) == 0x000001, "Wrong alignment on PlayerProfileClassListItem_C_PreConstruct");
static_assert(sizeof(PlayerProfileClassListItem_C_PreConstruct) == 0x000001, "Wrong size on PlayerProfileClassListItem_C_PreConstruct");
static_assert(offsetof(PlayerProfileClassListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlayerProfileClassListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.SetLv
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfileClassListItem_C_SetLv final
{
public:
	int32                                         Param_Lv;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_900E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(PlayerProfileClassListItem_C_SetLv) == 0x000008, "Wrong alignment on PlayerProfileClassListItem_C_SetLv");
static_assert(sizeof(PlayerProfileClassListItem_C_SetLv) == 0x000020, "Wrong size on PlayerProfileClassListItem_C_SetLv");
static_assert(offsetof(PlayerProfileClassListItem_C_SetLv, Param_Lv) == 0x000000, "Member 'PlayerProfileClassListItem_C_SetLv::Param_Lv' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassListItem_C_SetLv, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'PlayerProfileClassListItem_C_SetLv::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

