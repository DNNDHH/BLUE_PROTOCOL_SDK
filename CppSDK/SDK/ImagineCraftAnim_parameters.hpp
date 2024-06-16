#pragma once

 

// Package: ImagineCraftAnim

#include "Basic.hpp"


namespace SDK::Params
{

// Function imagineCraftAnim.imagineCraftAnim_C.ExecuteUbergraph_imagineCraftAnim
// 0x0018 (0x0018 - 0x0000)
struct ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim) == 0x000008, "Wrong alignment on ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim");
static_assert(sizeof(ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim) == 0x000018, "Wrong size on ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim");
static_assert(offsetof(ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim, EntryPoint) == 0x000000, "Member 'ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

}

