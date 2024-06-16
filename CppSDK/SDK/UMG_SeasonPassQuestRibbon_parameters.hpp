#pragma once

 

// Package: UMG_SeasonPassQuestRibbon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassQuestRibbon.UMG_SeasonPassQuestRibbon_C.ExecuteUbergraph_UMG_SeasonPassQuestRibbon
// 0x00F8 (0x00F8 - 0x0000)
struct UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSeasonPassQuestPlanState                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54EE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSeasonPassQuestItemData             K2Node_CustomEvent_SBSeasonPassQuestItemData;      // 0x0018(0x00D8)(ConstParm)
	int32                                         K2Node_Select_Default;                             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon) == 0x000008, "Wrong alignment on UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon");
static_assert(sizeof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon) == 0x0000F8, "Wrong size on UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, Temp_byte_Variable) == 0x000004, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, Temp_int_Variable) == 0x000008, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, Temp_int_Variable_1) == 0x00000C, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, Temp_int_Variable_2) == 0x000010, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, K2Node_CustomEvent_SBSeasonPassQuestItemData) == 0x000018, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::K2Node_CustomEvent_SBSeasonPassQuestItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon, K2Node_Select_Default) == 0x0000F0, "Member 'UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon::K2Node_Select_Default' has a wrong offset!");

// Function UMG_SeasonPassQuestRibbon.UMG_SeasonPassQuestRibbon_C.SetRibbon
// 0x00D8 (0x00D8 - 0x0000)
struct UMG_SeasonPassQuestRibbon_C_SetRibbon final
{
public:
	struct FSBSeasonPassQuestItemData             SBSeasonPassQuestItemData;                         // 0x0000(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_SeasonPassQuestRibbon_C_SetRibbon) == 0x000008, "Wrong alignment on UMG_SeasonPassQuestRibbon_C_SetRibbon");
static_assert(sizeof(UMG_SeasonPassQuestRibbon_C_SetRibbon) == 0x0000D8, "Wrong size on UMG_SeasonPassQuestRibbon_C_SetRibbon");
static_assert(offsetof(UMG_SeasonPassQuestRibbon_C_SetRibbon, SBSeasonPassQuestItemData) == 0x000000, "Member 'UMG_SeasonPassQuestRibbon_C_SetRibbon::SBSeasonPassQuestItemData' has a wrong offset!");

}

