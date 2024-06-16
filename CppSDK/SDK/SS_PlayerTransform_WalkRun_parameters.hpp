#pragma once

 

// Package: SS_PlayerTransform_WalkRun

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ExecuteUbergraph_SS_PlayerTransform_WalkRun
// 0x0030 (0x0030 - 0x0000)
struct SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerTransformCharacter*            K2Node_DynamicCast_AsSBPlayer_Transform_Character; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun) == 0x000008, "Wrong alignment on SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun");
static_assert(sizeof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun) == 0x000030, "Wrong size on SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, EntryPoint) == 0x000000, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, K2Node_DynamicCast_AsSBPlayer_Transform_Character) == 0x000020, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::K2Node_DynamicCast_AsSBPlayer_Transform_Character' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_PlayerTransform_WalkRun_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9491[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_PlayerTransform_WalkRun_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_PlayerTransform_WalkRun_C_ReceiveTick");
static_assert(sizeof(SS_PlayerTransform_WalkRun_C_ReceiveTick) == 0x000018, "Wrong size on SS_PlayerTransform_WalkRun_C_ReceiveTick");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_PlayerTransform_WalkRun_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_PlayerTransform_WalkRun_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_PlayerTransform_WalkRun_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_PlayerTransform_WalkRun_C_ReceiveTick::AnimationSet' has a wrong offset!");

}

