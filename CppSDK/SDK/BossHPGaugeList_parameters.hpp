#pragma once

 

// Package: BossHPGaugeList

#include "Basic.hpp"


namespace SDK::Params
{

// Function BossHPGaugeList.BossHPGaugeList_C.OnInAnimationCall
// 0x0008 (0x0008 - 0x0000)
struct BossHPGaugeList_C_OnInAnimationCall final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BossHPGaugeList_C_OnInAnimationCall) == 0x000008, "Wrong alignment on BossHPGaugeList_C_OnInAnimationCall");
static_assert(sizeof(BossHPGaugeList_C_OnInAnimationCall) == 0x000008, "Wrong size on BossHPGaugeList_C_OnInAnimationCall");
static_assert(offsetof(BossHPGaugeList_C_OnInAnimationCall, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BossHPGaugeList_C_OnInAnimationCall::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

