#pragma once

 

// Package: BP_EnemyLaunchFront

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyLaunchFront.BP_EnemyLaunchFront_C.Received_Notify
// 0x0068 (0x0068 - 0x0000)
struct BP_EnemyLaunchFront_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9755[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           Character;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnmovable_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9756[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyLaunchFront_C_Received_Notify) == 0x000008, "Wrong alignment on BP_EnemyLaunchFront_C_Received_Notify");
static_assert(sizeof(BP_EnemyLaunchFront_C_Received_Notify) == 0x000068, "Wrong size on BP_EnemyLaunchFront_C_Received_Notify");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_EnemyLaunchFront_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, Animation) == 0x000008, "Member 'BP_EnemyLaunchFront_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, ReturnValue) == 0x000010, "Member 'BP_EnemyLaunchFront_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, Character) == 0x000018, "Member 'BP_EnemyLaunchFront_C_Received_Notify::Character' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, K2Node_DynamicCast_AsSBCharacter) == 0x000028, "Member 'BP_EnemyLaunchFront_C_Received_Notify::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_EnemyLaunchFront_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_IsUnmovable_ReturnValue) == 0x000031, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_IsUnmovable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000034, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_BreakRotator_Roll) == 0x000040, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_BreakRotator_Pitch) == 0x000044, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_BreakRotator_Yaw) == 0x000048, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_MakeRotator_ReturnValue) == 0x00004C, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyLaunchFront_C_Received_Notify, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000058, "Member 'BP_EnemyLaunchFront_C_Received_Notify::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");

// Function BP_EnemyLaunchFront.BP_EnemyLaunchFront_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyLaunchFront_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyLaunchFront_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_EnemyLaunchFront_C_GetNotifyName");
static_assert(sizeof(BP_EnemyLaunchFront_C_GetNotifyName) == 0x000010, "Wrong size on BP_EnemyLaunchFront_C_GetNotifyName");
static_assert(offsetof(BP_EnemyLaunchFront_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_EnemyLaunchFront_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

