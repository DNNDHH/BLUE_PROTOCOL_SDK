#pragma once

 

// Package: BP_SitTarget

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SitTarget.BP_SitTarget_C.ExecuteUbergraph_BP_SitTarget
// 0x0048 (0x0048 - 0x0000)
struct BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5324[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5325[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBActorManager*                        CallFunc_GetActorManager_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5326[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorManager*                        CallFunc_GetActorManager_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget) == 0x000008, "Wrong alignment on BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget");
static_assert(sizeof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget) == 0x000048, "Wrong size on BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, EntryPoint) == 0x000000, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, K2Node_DynamicCast_AsSBGame_Instance) == 0x000010, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, CallFunc_GetGameInstance_ReturnValue_1) == 0x000020, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, CallFunc_GetActorManager_ReturnValue) == 0x000028, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::CallFunc_GetActorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x000030, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget, CallFunc_GetActorManager_ReturnValue_1) == 0x000040, "Member 'BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget::CallFunc_GetActorManager_ReturnValue_1' has a wrong offset!");

// Function BP_SitTarget.BP_SitTarget_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SitTarget_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SitTarget_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SitTarget_C_ReceiveEndPlay");
static_assert(sizeof(BP_SitTarget_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SitTarget_C_ReceiveEndPlay");
static_assert(offsetof(BP_SitTarget_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SitTarget_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SitTarget.BP_SitTarget_C.UserConstructionScript
// 0x01C4 (0x01C4 - 0x0000)
struct BP_SitTarget_C_UserConstructionScript final
{
public:
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x001C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x013C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SitTarget_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_SitTarget_C_UserConstructionScript");
static_assert(sizeof(BP_SitTarget_C_UserConstructionScript) == 0x0001C4, "Wrong size on BP_SitTarget_C_UserConstructionScript");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_FClamp_ReturnValue) == 0x000000, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000004, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00001C, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000A4, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_FClamp_ReturnValue_1) == 0x00012C, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue_1) == 0x000130, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SitTarget_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x00013C, "Member 'BP_SitTarget_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");

// Function BP_SitTarget.BP_SitTarget_C.Get Interaction Target Component
// 0x0008 (0x0008 - 0x0000)
struct BP_SitTarget_C_Get_Interaction_Target_Component final
{
public:
	class USBInteractionTargetComponent*          Comp;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SitTarget_C_Get_Interaction_Target_Component) == 0x000008, "Wrong alignment on BP_SitTarget_C_Get_Interaction_Target_Component");
static_assert(sizeof(BP_SitTarget_C_Get_Interaction_Target_Component) == 0x000008, "Wrong size on BP_SitTarget_C_Get_Interaction_Target_Component");
static_assert(offsetof(BP_SitTarget_C_Get_Interaction_Target_Component, Comp) == 0x000000, "Member 'BP_SitTarget_C_Get_Interaction_Target_Component::Comp' has a wrong offset!");

// Function BP_SitTarget.BP_SitTarget_C.GetSitTargetSoundType
// 0x0001 (0x0001 - 0x0000)
struct BP_SitTarget_C_GetSitTargetSoundType final
{
public:
	ESBSitTargetSoundType                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SitTarget_C_GetSitTargetSoundType) == 0x000001, "Wrong alignment on BP_SitTarget_C_GetSitTargetSoundType");
static_assert(sizeof(BP_SitTarget_C_GetSitTargetSoundType) == 0x000001, "Wrong size on BP_SitTarget_C_GetSitTargetSoundType");
static_assert(offsetof(BP_SitTarget_C_GetSitTargetSoundType, ReturnValue) == 0x000000, "Member 'BP_SitTarget_C_GetSitTargetSoundType::ReturnValue' has a wrong offset!");

}

