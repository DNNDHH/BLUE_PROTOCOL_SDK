#pragma once

 

// Package: HitFlash_Pinch

#include "Basic.hpp"


namespace SDK::Params
{

// Function HitFlash_Pinch.HitFlash_Pinch_C.ExecuteUbergraph_HitFlash_Pinch
// 0x0010 (0x0010 - 0x0000)
struct HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_704C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch) == 0x000008, "Wrong alignment on HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch");
static_assert(sizeof(HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch) == 0x000010, "Wrong size on HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch");
static_assert(offsetof(HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch, EntryPoint) == 0x000000, "Member 'HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch::EntryPoint' has a wrong offset!");
static_assert(offsetof(HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

