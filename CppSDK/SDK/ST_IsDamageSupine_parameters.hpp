#pragma once

 

// Package: ST_IsDamageSupine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_IsDamageSupine.ST_IsDamageSupine_C.ReceiveCanEnter
// 0x0050 (0x0050 - 0x0000)
struct ST_IsDamageSupine_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_931E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_931F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_IsDamageSupine_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_IsDamageSupine_C_ReceiveCanEnter");
static_assert(sizeof(ST_IsDamageSupine_C_ReceiveCanEnter) == 0x000050, "Wrong size on ST_IsDamageSupine_C_ReceiveCanEnter");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, K2Node_DynamicCast_AsCharacter) == 0x000018, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_GetSocketRotation_ReturnValue) == 0x000024, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000030, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_BreakVector_X) == 0x00003C, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_BreakVector_Y) == 0x000040, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_BreakVector_Z) == 0x000044, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ST_IsDamageSupine_C_ReceiveCanEnter, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000048, "Member 'ST_IsDamageSupine_C_ReceiveCanEnter::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

