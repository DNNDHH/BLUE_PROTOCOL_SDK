#pragma once

 

// Package: DhcBattleMemberItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleMemberItem.DhcBattleMemberItem_C.ExecuteUbergraph_DhcBattleMemberItem
// 0x0070 (0x0070 - 0x0000)
struct DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Name;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_ClassType;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Level;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	float                                         K2Node_CustomEvent_DPS;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
};
static_assert(alignof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem) == 0x000008, "Wrong alignment on DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem");
static_assert(sizeof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem) == 0x000070, "Wrong size on DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, EntryPoint) == 0x000000, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, K2Node_CustomEvent_Name) == 0x000008, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, K2Node_CustomEvent_ClassType) == 0x000018, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::K2Node_CustomEvent_ClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, K2Node_CustomEvent_Level) == 0x00001C, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, K2Node_CustomEvent_DPS) == 0x000050, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::K2Node_CustomEvent_DPS' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, CallFunc_FTrunc_ReturnValue) == 0x000054, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function DhcBattleMemberItem.DhcBattleMemberItem_C.SetDPS
// 0x0004 (0x0004 - 0x0000)
struct DhcBattleMemberItem_C_SetDPS final
{
public:
	float                                         DPS;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleMemberItem_C_SetDPS) == 0x000004, "Wrong alignment on DhcBattleMemberItem_C_SetDPS");
static_assert(sizeof(DhcBattleMemberItem_C_SetDPS) == 0x000004, "Wrong size on DhcBattleMemberItem_C_SetDPS");
static_assert(offsetof(DhcBattleMemberItem_C_SetDPS, DPS) == 0x000000, "Member 'DhcBattleMemberItem_C_SetDPS::DPS' has a wrong offset!");

// Function DhcBattleMemberItem.DhcBattleMemberItem_C.SetPlayerInfo
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleMemberItem_C_SetPlayerInfo final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleMemberItem_C_SetPlayerInfo) == 0x000008, "Wrong alignment on DhcBattleMemberItem_C_SetPlayerInfo");
static_assert(sizeof(DhcBattleMemberItem_C_SetPlayerInfo) == 0x000018, "Wrong size on DhcBattleMemberItem_C_SetPlayerInfo");
static_assert(offsetof(DhcBattleMemberItem_C_SetPlayerInfo, Param_Name) == 0x000000, "Member 'DhcBattleMemberItem_C_SetPlayerInfo::Param_Name' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_SetPlayerInfo, ClassType) == 0x000010, "Member 'DhcBattleMemberItem_C_SetPlayerInfo::ClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleMemberItem_C_SetPlayerInfo, Level) == 0x000014, "Member 'DhcBattleMemberItem_C_SetPlayerInfo::Level' has a wrong offset!");

}

