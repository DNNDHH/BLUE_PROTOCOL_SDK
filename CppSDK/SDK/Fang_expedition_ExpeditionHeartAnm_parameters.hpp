#pragma once

 

// Package: Fang_expedition_ExpeditionHeartAnm

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm) == 0x000004, "Wrong alignment on Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm");
static_assert(sizeof(Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm) == 0x000004, "Wrong size on Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm");
static_assert(offsetof(Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm, EntryPoint) == 0x000000, "Member 'Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm::EntryPoint' has a wrong offset!");

// Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.SetIconVisibility
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility final
{
public:
	bool                                          Param_bVisible;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E09[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility) == 0x000008, "Wrong alignment on Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility");
static_assert(sizeof(Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility) == 0x000010, "Wrong size on Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility");
static_assert(offsetof(Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility, Param_bVisible) == 0x000000, "Member 'Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility::Param_bVisible' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

