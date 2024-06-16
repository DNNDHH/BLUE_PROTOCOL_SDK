#pragma once

 

// Package: ST_CheckVelocity_XYZ

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckVelocity_XYZ.ST_CheckVelocity_XYZ_C.ReceiveCanEnter
// 0x0088 (0x0088 - 0x0000)
struct ST_CheckVelocity_XYZ_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1D[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBCharacterMovementComponent*          K2Node_DynamicCast_AsSBCharacter_Movement_Component; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1F[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_1;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckVelocity_XYZ_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter) == 0x000088, "Wrong size on ST_CheckVelocity_XYZ_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, K2Node_DynamicCast_AsCharacter) == 0x000018, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000024, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCharacter_Movement_Component) == 0x000030, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakRotator_Roll) == 0x00003C, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakRotator_Pitch) == 0x000040, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakRotator_Yaw) == 0x000044, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_MakeRotator_ReturnValue) == 0x000048, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_X) == 0x000054, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_Y) == 0x000058, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_Z) == 0x00005C, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000060, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00006C, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_X_1) == 0x000070, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_Y_1) == 0x000074, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_BreakVector_Z_1) == 0x000078, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_Abs_ReturnValue) == 0x00007C, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000081, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CheckVelocity_XYZ_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000082, "Member 'ST_CheckVelocity_XYZ_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

}

