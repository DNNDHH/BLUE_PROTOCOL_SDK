#pragma once

 

// Package: BP_LaunchFront

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_LaunchFront.BP_LaunchFront_C.Received_Notify
// 0x0090 (0x0090 - 0x0000)
struct BP_LaunchFront_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           Character;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNetworkSmoothMoveInterface> K2Node_DynamicCast_AsSBNetwork_Smooth_Move_Interface; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnmovable_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1C[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMovementComponentBase*         CallFunc_BP_GetMovementComponentForSmoothMove_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSmoothMoveJump_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_UseSBSmoothClientPosition_ReturnValue; // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1D[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1E[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaunchFront_C_Received_Notify) == 0x000008, "Wrong alignment on BP_LaunchFront_C_Received_Notify");
static_assert(sizeof(BP_LaunchFront_C_Received_Notify) == 0x000090, "Wrong size on BP_LaunchFront_C_Received_Notify");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_LaunchFront_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, Animation) == 0x000008, "Member 'BP_LaunchFront_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, ReturnValue) == 0x000010, "Member 'BP_LaunchFront_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, Character) == 0x000018, "Member 'BP_LaunchFront_C_Received_Notify::Character' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, K2Node_DynamicCast_AsSBCharacter) == 0x000028, "Member 'BP_LaunchFront_C_Received_Notify::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_LaunchFront_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, K2Node_DynamicCast_AsSBNetwork_Smooth_Move_Interface) == 0x000038, "Member 'BP_LaunchFront_C_Received_Notify::K2Node_DynamicCast_AsSBNetwork_Smooth_Move_Interface' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_LaunchFront_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_IsUnmovable_ReturnValue) == 0x000049, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_IsUnmovable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_BP_GetMovementComponentForSmoothMove_ReturnValue) == 0x000050, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_BP_GetMovementComponentForSmoothMove_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_CanSmoothMoveJump_ReturnValue) == 0x000058, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_CanSmoothMoveJump_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_BP_UseSBSmoothClientPosition_ReturnValue) == 0x000059, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_BP_UseSBSmoothClientPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00005C, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_IsLocallyControlled_ReturnValue) == 0x000068, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_BreakRotator_Roll) == 0x00006C, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_BreakRotator_Pitch) == 0x000070, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_BreakRotator_Yaw) == 0x000074, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_MakeRotator_ReturnValue) == 0x000078, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LaunchFront_C_Received_Notify, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000084, "Member 'BP_LaunchFront_C_Received_Notify::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");

// Function BP_LaunchFront.BP_LaunchFront_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct BP_LaunchFront_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaunchFront_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_LaunchFront_C_GetNotifyName");
static_assert(sizeof(BP_LaunchFront_C_GetNotifyName) == 0x000010, "Wrong size on BP_LaunchFront_C_GetNotifyName");
static_assert(offsetof(BP_LaunchFront_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_LaunchFront_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

