#pragma once

 

// Package: SS_EventEmoteEnd

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_EventEmoteEnd.SS_EventEmoteEnd_C.ExecuteUbergraph_SS_EventEmoteEnd
// 0x0048 (0x0048 - 0x0000)
struct SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue_1;           // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49AA[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd) == 0x000008, "Wrong alignment on SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd");
static_assert(sizeof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd) == 0x000048, "Wrong size on SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, EntryPoint) == 0x000000, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_Event_AnimInstance_1) == 0x000008, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_Event_AnimationSet_1) == 0x000010, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_Event_AnimInstance) == 0x000018, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_Event_AnimationSet) == 0x000020, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000028, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, CallFunc_SetTemporaryBool_ReturnValue) == 0x000031, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::CallFunc_SetTemporaryBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, CallFunc_SetTemporaryBool_ReturnValue_1) == 0x000032, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::CallFunc_SetTemporaryBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd, CallFunc_Conv_BoolToString_ReturnValue) == 0x000038, "Member 'SS_EventEmoteEnd_C_ExecuteUbergraph_SS_EventEmoteEnd::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");

// Function SS_EventEmoteEnd.SS_EventEmoteEnd_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_EventEmoteEnd_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EventEmoteEnd_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_EventEmoteEnd_C_ReceiveBeginPlay");
static_assert(sizeof(SS_EventEmoteEnd_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_EventEmoteEnd_C_ReceiveBeginPlay");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_EventEmoteEnd_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_EventEmoteEnd_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_EventEmoteEnd.SS_EventEmoteEnd_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_EventEmoteEnd_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EventEmoteEnd_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_EventEmoteEnd_C_ReceiveTick");
static_assert(sizeof(SS_EventEmoteEnd_C_ReceiveTick) == 0x000018, "Wrong size on SS_EventEmoteEnd_C_ReceiveTick");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_EventEmoteEnd_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_EventEmoteEnd_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_EventEmoteEnd_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_EventEmoteEnd.SS_EventEmoteEnd_C.ReceiveEndPlay
// 0x0020 (0x0020 - 0x0000)
struct SS_EventEmoteEnd_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyCharacter_C*                   K2Node_DynamicCast_AsBP_Enemy_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EventEmoteEnd_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_EventEmoteEnd_C_ReceiveEndPlay");
static_assert(sizeof(SS_EventEmoteEnd_C_ReceiveEndPlay) == 0x000020, "Wrong size on SS_EventEmoteEnd_C_ReceiveEndPlay");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_EventEmoteEnd_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveEndPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'SS_EventEmoteEnd_C_ReceiveEndPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveEndPlay, K2Node_DynamicCast_AsBP_Enemy_Character) == 0x000010, "Member 'SS_EventEmoteEnd_C_ReceiveEndPlay::K2Node_DynamicCast_AsBP_Enemy_Character' has a wrong offset!");
static_assert(offsetof(SS_EventEmoteEnd_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_EventEmoteEnd_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

