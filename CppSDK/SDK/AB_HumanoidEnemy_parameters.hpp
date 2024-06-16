#pragma once

 

// Package: AB_HumanoidEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.ExecuteUbergraph_AB_HumanoidEnemy
// 0x0060 (0x0060 - 0x0000)
struct AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        CallFunc_GetAnimationSet_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyCharacter_C*                   K2Node_DynamicCast_AsBP_Enemy_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CCE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetStateMachine_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        CallFunc_GetAimStateMachine_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy) == 0x000008, "Wrong alignment on AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy");
static_assert(sizeof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy) == 0x000060, "Wrong size on AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, EntryPoint) == 0x000000, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_Montage_Play_ReturnValue) == 0x000004, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_GetAnimationSet_ReturnValue) == 0x000010, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_GetAnimationSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, K2Node_DynamicCast_AsBP_Enemy_Character) == 0x000018, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::K2Node_DynamicCast_AsBP_Enemy_Character' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_GetStateMachine_ReturnValue) == 0x000028, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_GetStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_BreakVector_X) == 0x000030, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_BreakVector_Y) == 0x000034, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_BreakVector_Z) == 0x000038, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_GetAimStateMachine_ReturnValue) == 0x000040, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_GetAimStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000048, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000054, "Member 'AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");

// Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_HumanoidEnemy_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_HumanoidEnemy_C_AnimGraph) == 0x000008, "Wrong alignment on AB_HumanoidEnemy_C_AnimGraph");
static_assert(sizeof(AB_HumanoidEnemy_C_AnimGraph) == 0x000010, "Wrong size on AB_HumanoidEnemy_C_AnimGraph");
static_assert(offsetof(AB_HumanoidEnemy_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_HumanoidEnemy_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

