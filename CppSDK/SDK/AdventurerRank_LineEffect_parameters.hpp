#pragma once

 

// Package: AdventurerRank_LineEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.ExecuteUbergraph_AdventurerRank_LineEffect
// 0x0010 (0x0010 - 0x0000)
struct AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88B9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect) == 0x000008, "Wrong alignment on AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect");
static_assert(sizeof(AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect) == 0x000010, "Wrong size on AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect");
static_assert(offsetof(AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect, EntryPoint) == 0x000000, "Member 'AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

