#pragma once

 

// Package: SkillInfoGaugeHyouiActive_Effect

#include "Basic.hpp"


namespace SDK::Params
{

// Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect
// 0x0004 (0x0004 - 0x0000)
struct SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect) == 0x000004, "Wrong alignment on SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect");
static_assert(sizeof(SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect) == 0x000004, "Wrong size on SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect");
static_assert(offsetof(SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect, EntryPoint) == 0x000000, "Member 'SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect::EntryPoint' has a wrong offset!");

// Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct SkillInfoGaugeHyouiActive_Effect_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeHyouiActive_Effect_C_PlayAnim) == 0x000008, "Wrong alignment on SkillInfoGaugeHyouiActive_Effect_C_PlayAnim");
static_assert(sizeof(SkillInfoGaugeHyouiActive_Effect_C_PlayAnim) == 0x000008, "Wrong size on SkillInfoGaugeHyouiActive_Effect_C_PlayAnim");
static_assert(offsetof(SkillInfoGaugeHyouiActive_Effect_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeHyouiActive_Effect_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

