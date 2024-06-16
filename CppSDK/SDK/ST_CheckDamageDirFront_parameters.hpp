#pragma once

 

// Package: ST_CheckDamageDirFront

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckDamageDirFront.ST_CheckDamageDirFront_C.ReceiveCanEnter
// 0x00B8 (0x00B8 - 0x0000)
struct ST_CheckDamageDirFront_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F11[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_DamageInfo;             // 0x0010(0x0058)(NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F12[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotatorFromVectorDirection_ReturnValue; // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckDamageDirFront_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckDamageDirFront_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckDamageDirFront_C_ReceiveCanEnter) == 0x0000B8, "Wrong size on ST_CheckDamageDirFront_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_GetLastDamageInfo_DamageInfo) == 0x000010, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_GetLastDamageInfo_DamageInfo' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000068, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCharacter) == 0x000070, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00007C, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000088, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_GetRotatorFromVectorDirection_ReturnValue) == 0x000094, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_GetRotatorFromVectorDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Roll) == 0x0000A0, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Pitch) == 0x0000A4, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Yaw) == 0x0000A8, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_Abs_ReturnValue) == 0x0000AC, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirFront_C_ReceiveCanEnter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000B0, "Member 'ST_CheckDamageDirFront_C_ReceiveCanEnter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

