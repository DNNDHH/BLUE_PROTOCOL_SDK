#pragma once

 

// Package: ST_NPCLocomotion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_NPCLocomotion.ST_NPCLocomotion_C.ReceiveCanEnter
// 0x0080 (0x0080 - 0x0000)
struct ST_NPCLocomotion_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BB7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BB8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BBA[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_NPCLocomotion_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_NPCLocomotion_C_ReceiveCanEnter");
static_assert(sizeof(ST_NPCLocomotion_C_ReceiveCanEnter) == 0x000080, "Wrong size on ST_NPCLocomotion_C_ReceiveCanEnter");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance) == 0x000010, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000020, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_Abs_ReturnValue) == 0x000028, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, K2Node_DynamicCast_AsCharacter) == 0x000030, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000039, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00003C, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_GetVelocity_ReturnValue) == 0x000048, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000054, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_BreakVector_X) == 0x000060, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_BreakVector_Y) == 0x000064, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_BreakVector_Z) == 0x000068, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_MakeVector_ReturnValue) == 0x00006C, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_VSize_ReturnValue) == 0x000078, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_NPCLocomotion_C_ReceiveCanEnter, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x00007C, "Member 'ST_NPCLocomotion_C_ReceiveCanEnter::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");

}

