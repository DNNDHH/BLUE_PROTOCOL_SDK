#pragma once

 

// Package: Fang_expedition_StatusFinishIconAnm

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F0D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm) == 0x000008, "Wrong alignment on Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm");
static_assert(sizeof(Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm) == 0x000010, "Wrong size on Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm");
static_assert(offsetof(Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm, EntryPoint) == 0x000000, "Member 'Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

