#pragma once

 

// Package: SS_JankenEmote

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_JankenEmote.SS_JankenEmote_C.ReceiveBeginPlay
// 0x0028 (0x0028 - 0x0000)
struct SS_JankenEmote_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_PlayerAnimBlueprint_C*              K2Node_DynamicCast_AsAB_Player_Anim_Blueprint;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A59[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_JankenEmote_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_JankenEmote_C_ReceiveBeginPlay");
static_assert(sizeof(SS_JankenEmote_C_ReceiveBeginPlay) == 0x000028, "Wrong size on SS_JankenEmote_C_ReceiveBeginPlay");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, K2Node_DynamicCast_AsAB_Player_Anim_Blueprint) == 0x000010, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::K2Node_DynamicCast_AsAB_Player_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, CallFunc_FClamp_ReturnValue) == 0x00001C, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000020, "Member 'SS_JankenEmote_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_JankenEmote.SS_JankenEmote_C.ReceiveTick
// 0x0028 (0x0028 - 0x0000)
struct SS_JankenEmote_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A5A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_PlayerAnimBlueprint_C*              K2Node_DynamicCast_AsAB_Player_Anim_Blueprint;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A5B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_JankenEmote_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_JankenEmote_C_ReceiveTick");
static_assert(sizeof(SS_JankenEmote_C_ReceiveTick) == 0x000028, "Wrong size on SS_JankenEmote_C_ReceiveTick");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_JankenEmote_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_JankenEmote_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_JankenEmote_C_ReceiveTick::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, K2Node_DynamicCast_AsAB_Player_Anim_Blueprint) == 0x000018, "Member 'SS_JankenEmote_C_ReceiveTick::K2Node_DynamicCast_AsAB_Player_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_JankenEmote_C_ReceiveTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_JankenEmote_C_ReceiveTick, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000024, "Member 'SS_JankenEmote_C_ReceiveTick::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");

}

