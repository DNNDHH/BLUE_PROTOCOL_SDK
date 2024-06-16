#pragma once

 

// Package: SS_EmoteAction

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_EmoteAction.SS_EmoteAction_C.ReceiveBeginPlay
// 0x0028 (0x0028 - 0x0000)
struct SS_EmoteAction_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EmoteAction_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_EmoteAction_C_ReceiveBeginPlay");
static_assert(sizeof(SS_EmoteAction_C_ReceiveBeginPlay) == 0x000028, "Wrong size on SS_EmoteAction_C_ReceiveBeginPlay");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBCreation_Character) == 0x000018, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, CallFunc_IsLocallyControlled_ReturnValue) == 0x000021, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, CallFunc_HasAuthority_ReturnValue) == 0x000022, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteAction_C_ReceiveBeginPlay, CallFunc_BooleanOR_ReturnValue) == 0x000023, "Member 'SS_EmoteAction_C_ReceiveBeginPlay::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

