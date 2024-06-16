#pragma once

 

// Package: ST_IsDamageFallFront

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_IsDamageFallFront.ST_IsDamageFallFront_C.ReceiveCanEnter
// 0x0078 (0x0078 - 0x0000)
struct ST_IsDamageFallFront_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C9[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetRotatorFromVectorDirection_ReturnValue; // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_IsDamageFallFront_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_IsDamageFallFront_C_ReceiveCanEnter");
static_assert(sizeof(ST_IsDamageFallFront_C_ReceiveCanEnter) == 0x000078, "Wrong size on ST_IsDamageFallFront_C_ReceiveCanEnter");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCharacter) == 0x000018, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_MakeRotator_ReturnValue) == 0x000024, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000030, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_ComposeRotators_ReturnValue) == 0x00003C, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_GetRotatorFromVectorDirection_ReturnValue) == 0x000048, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_GetRotatorFromVectorDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000054, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_Abs_ReturnValue) == 0x00006C, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageFallFront_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000070, "Member 'ST_IsDamageFallFront_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

