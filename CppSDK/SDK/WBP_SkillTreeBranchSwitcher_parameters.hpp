#pragma once

 

// Package: WBP_SkillTreeBranchSwitcher

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.ExecuteUbergraph_WBP_SkillTreeBranchSwitcher
// 0x0010 (0x0010 - 0x0000)
struct WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B9D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeHorizonBranchType                   K2Node_CustomEvent_BrunchType;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher) == 0x000004, "Wrong alignment on WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher");
static_assert(sizeof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher) == 0x000010, "Wrong size on WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher, EntryPoint) == 0x000000, "Member 'WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000008, "Member 'WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher, K2Node_CustomEvent_BrunchType) == 0x00000C, "Member 'WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher::K2Node_CustomEvent_BrunchType' has a wrong offset!");

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.SetBrunchType
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillTreeBranchSwitcher_C_SetBrunchType final
{
public:
	ESkillTreeHorizonBranchType                   Param_BrunchType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeBranchSwitcher_C_SetBrunchType) == 0x000001, "Wrong alignment on WBP_SkillTreeBranchSwitcher_C_SetBrunchType");
static_assert(sizeof(WBP_SkillTreeBranchSwitcher_C_SetBrunchType) == 0x000001, "Wrong size on WBP_SkillTreeBranchSwitcher_C_SetBrunchType");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_SetBrunchType, Param_BrunchType) == 0x000000, "Member 'WBP_SkillTreeBranchSwitcher_C_SetBrunchType::Param_BrunchType' has a wrong offset!");

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillTreeBranchSwitcher_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillTreeBranchSwitcher_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SkillTreeBranchSwitcher_C_PreConstruct");
static_assert(sizeof(WBP_SkillTreeBranchSwitcher_C_PreConstruct) == 0x000001, "Wrong size on WBP_SkillTreeBranchSwitcher_C_PreConstruct");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SkillTreeBranchSwitcher_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Init
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillTreeBranchSwitcher_C_Init final
{
public:
	ESkillTreeHorizonBranchType                   InBrunchType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B9E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeBranchSwitcher_C_Init) == 0x000004, "Wrong alignment on WBP_SkillTreeBranchSwitcher_C_Init");
static_assert(sizeof(WBP_SkillTreeBranchSwitcher_C_Init) == 0x000008, "Wrong size on WBP_SkillTreeBranchSwitcher_C_Init");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_Init, InBrunchType) == 0x000000, "Member 'WBP_SkillTreeBranchSwitcher_C_Init::InBrunchType' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_Init, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'WBP_SkillTreeBranchSwitcher_C_Init::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Set Brunch Color
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color) == 0x000001, "Wrong alignment on WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color");
static_assert(sizeof(WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color) == 0x000001, "Wrong size on WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color");
static_assert(offsetof(WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color, Param_Index) == 0x000000, "Member 'WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color::Param_Index' has a wrong offset!");

}

