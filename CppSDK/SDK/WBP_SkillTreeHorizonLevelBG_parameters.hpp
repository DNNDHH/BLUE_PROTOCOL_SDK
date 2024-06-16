#pragma once

 

// Package: WBP_SkillTreeHorizonLevelBG

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG
// 0x0038 (0x0038 - 0x0000)
struct WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B99[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSelect;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B9A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Level;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B9B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG) == 0x000008, "Wrong alignment on WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG");
static_assert(sizeof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG) == 0x000038, "Wrong size on WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, EntryPoint) == 0x000000, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, Temp_bool_Variable) == 0x000004, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, Temp_int_Variable) == 0x000008, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, K2Node_CustomEvent_IsSelect) == 0x000010, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::K2Node_CustomEvent_IsSelect' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, K2Node_CustomEvent_Level) == 0x000014, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, K2Node_Select_Default) == 0x000018, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG, CallFunc_GetSkillLevelText_ReturnValue) == 0x000020, "Member 'WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");

// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillTreeHorizonLevelBG_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillTreeHorizonLevelBG_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SkillTreeHorizonLevelBG_C_PreConstruct");
static_assert(sizeof(WBP_SkillTreeHorizonLevelBG_C_PreConstruct) == 0x000001, "Wrong size on WBP_SkillTreeHorizonLevelBG_C_PreConstruct");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SkillTreeHorizonLevelBG_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.Init
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillTreeHorizonLevelBG_C_Init final
{
public:
	bool                                          IsSelect;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B9C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Level;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeHorizonLevelBG_C_Init) == 0x000004, "Wrong alignment on WBP_SkillTreeHorizonLevelBG_C_Init");
static_assert(sizeof(WBP_SkillTreeHorizonLevelBG_C_Init) == 0x000008, "Wrong size on WBP_SkillTreeHorizonLevelBG_C_Init");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_Init, IsSelect) == 0x000000, "Member 'WBP_SkillTreeHorizonLevelBG_C_Init::IsSelect' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeHorizonLevelBG_C_Init, Param_Level) == 0x000004, "Member 'WBP_SkillTreeHorizonLevelBG_C_Init::Param_Level' has a wrong offset!");

}

