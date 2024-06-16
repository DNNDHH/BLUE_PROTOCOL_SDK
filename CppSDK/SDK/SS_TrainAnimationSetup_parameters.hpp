#pragma once

 

// Package: SS_TrainAnimationSetup

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_TrainAnimationSetup.SS_TrainAnimationSetup_C.ExecuteUbergraph_SS_TrainAnimationSetup
// 0x0030 (0x0030 - 0x0000)
struct SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A5C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup) == 0x000008, "Wrong alignment on SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup");
static_assert(sizeof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup) == 0x000030, "Wrong size on SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, EntryPoint) == 0x000000, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup, CallFunc_IsLocallyControlled_ReturnValue) == 0x000029, "Member 'SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

// Function SS_TrainAnimationSetup.SS_TrainAnimationSetup_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_TrainAnimationSetup_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_TrainAnimationSetup_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_TrainAnimationSetup_C_ReceiveBeginPlay");
static_assert(sizeof(SS_TrainAnimationSetup_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_TrainAnimationSetup_C_ReceiveBeginPlay");
static_assert(offsetof(SS_TrainAnimationSetup_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_TrainAnimationSetup_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimationSetup_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_TrainAnimationSetup_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

}

