#pragma once

 

// Package: BuffGauge

#include "Basic.hpp"


namespace SDK::Params
{

// Function BuffGauge.BuffGauge_C.PlayAnim
// 0x0018 (0x0018 - 0x0000)
struct BuffGauge_C_PlayAnim final
{
public:
	float                                         InStartTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InAnimSpeed;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A85[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuffGauge_C_PlayAnim) == 0x000008, "Wrong alignment on BuffGauge_C_PlayAnim");
static_assert(sizeof(BuffGauge_C_PlayAnim) == 0x000018, "Wrong size on BuffGauge_C_PlayAnim");
static_assert(offsetof(BuffGauge_C_PlayAnim, InStartTime) == 0x000000, "Member 'BuffGauge_C_PlayAnim::InStartTime' has a wrong offset!");
static_assert(offsetof(BuffGauge_C_PlayAnim, InAnimSpeed) == 0x000004, "Member 'BuffGauge_C_PlayAnim::InAnimSpeed' has a wrong offset!");
static_assert(offsetof(BuffGauge_C_PlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'BuffGauge_C_PlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffGauge_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BuffGauge_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

