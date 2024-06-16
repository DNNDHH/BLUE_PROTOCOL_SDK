#pragma once

 

// Package: GuildRankItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRankItem.GuildRankItem_C.ExecuteUbergraph_GuildRankItem
// 0x0004 (0x0004 - 0x0000)
struct GuildRankItem_C_ExecuteUbergraph_GuildRankItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRankItem_C_ExecuteUbergraph_GuildRankItem) == 0x000004, "Wrong alignment on GuildRankItem_C_ExecuteUbergraph_GuildRankItem");
static_assert(sizeof(GuildRankItem_C_ExecuteUbergraph_GuildRankItem) == 0x000004, "Wrong size on GuildRankItem_C_ExecuteUbergraph_GuildRankItem");
static_assert(offsetof(GuildRankItem_C_ExecuteUbergraph_GuildRankItem, EntryPoint) == 0x000000, "Member 'GuildRankItem_C_ExecuteUbergraph_GuildRankItem::EntryPoint' has a wrong offset!");

// Function GuildRankItem.GuildRankItem_C.SetRankUnlockData
// 0x00A0 (0x00A0 - 0x0000)
struct GuildRankItem_C_SetRankUnlockData final
{
public:
	struct FGuildRankUnlockMaster                 Param_UnlockData;                                  // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_824D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	class FString                                 CallFunc_GetGuildRankUnlockText_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 CallFunc_GetGuildRankUnlockText_ReturnValue_1;     // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_824E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRankItem_C_SetRankUnlockData) == 0x000008, "Wrong alignment on GuildRankItem_C_SetRankUnlockData");
static_assert(sizeof(GuildRankItem_C_SetRankUnlockData) == 0x0000A0, "Wrong size on GuildRankItem_C_SetRankUnlockData");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, Param_UnlockData) == 0x000000, "Member 'GuildRankItem_C_SetRankUnlockData::Param_UnlockData' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, Temp_bool_Variable) == 0x000020, "Member 'GuildRankItem_C_SetRankUnlockData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_GetGuildRankUnlockText_ReturnValue) == 0x000040, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_GetGuildRankUnlockText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_GetGuildRankUnlockText_ReturnValue_1) == 0x000068, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_GetGuildRankUnlockText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000090, "Member 'GuildRankItem_C_SetRankUnlockData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankItem_C_SetRankUnlockData, K2Node_Select_Default) == 0x000098, "Member 'GuildRankItem_C_SetRankUnlockData::K2Node_Select_Default' has a wrong offset!");

}

