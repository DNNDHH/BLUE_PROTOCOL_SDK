#pragma once

 

// Package: BP_ExtraNpcCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ExecuteUbergraph_BP_ExtraNpcCharacter
// 0x0040 (0x0040 - 0x0000)
struct BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EB2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB3[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetScriptActorFastForwardFlag_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter) == 0x000008, "Wrong alignment on BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter");
static_assert(sizeof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter) == 0x000040, "Wrong size on BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, EntryPoint) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, K2Node_Event_InOtherActor) == 0x000010, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, K2Node_Event_ViewRotation) == 0x000018, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000028, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, K2Node_Event_DeltaSeconds) == 0x000034, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, CallFunc_GetScriptActorFastForwardFlag_ReturnValue) == 0x000038, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::CallFunc_GetScriptActorFastForwardFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter, CallFunc_SetTemporaryBool_ReturnValue) == 0x000039, "Member 'BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter::CallFunc_SetTemporaryBool_ReturnValue' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ExtraNpcCharacter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ExtraNpcCharacter_C_ReceiveTick");
static_assert(sizeof(BP_ExtraNpcCharacter_C_ReceiveTick) == 0x000004, "Wrong size on BP_ExtraNpcCharacter_C_ReceiveTick");
static_assert(offsetof(BP_ExtraNpcCharacter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.OnInteraction
// 0x0018 (0x0018 - 0x0000)
struct BP_ExtraNpcCharacter_C_OnInteraction final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_OnInteraction) == 0x000008, "Wrong alignment on BP_ExtraNpcCharacter_C_OnInteraction");
static_assert(sizeof(BP_ExtraNpcCharacter_C_OnInteraction) == 0x000018, "Wrong size on BP_ExtraNpcCharacter_C_OnInteraction");
static_assert(offsetof(BP_ExtraNpcCharacter_C_OnInteraction, InOtherActor) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_OnInteraction::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_OnInteraction, ViewRotation) == 0x000008, "Member 'BP_ExtraNpcCharacter_C_OnInteraction::ViewRotation' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsValidTargetFor
// 0x0010 (0x0010 - 0x0000)
struct BP_ExtraNpcCharacter_C_IsValidTargetFor final
{
public:
	class AActor*                                 TargetingActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_IsValidTargetFor) == 0x000008, "Wrong alignment on BP_ExtraNpcCharacter_C_IsValidTargetFor");
static_assert(sizeof(BP_ExtraNpcCharacter_C_IsValidTargetFor) == 0x000010, "Wrong size on BP_ExtraNpcCharacter_C_IsValidTargetFor");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsValidTargetFor, TargetingActor) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_IsValidTargetFor::TargetingActor' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsValidTargetFor, ReturnValue) == 0x000008, "Member 'BP_ExtraNpcCharacter_C_IsValidTargetFor::ReturnValue' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.GetTargetLocation
// 0x000C (0x000C - 0x0000)
struct BP_ExtraNpcCharacter_C_GetTargetLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_GetTargetLocation) == 0x000004, "Wrong alignment on BP_ExtraNpcCharacter_C_GetTargetLocation");
static_assert(sizeof(BP_ExtraNpcCharacter_C_GetTargetLocation) == 0x00000C, "Wrong size on BP_ExtraNpcCharacter_C_GetTargetLocation");
static_assert(offsetof(BP_ExtraNpcCharacter_C_GetTargetLocation, ReturnValue) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_GetTargetLocation::ReturnValue' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.CanBeTargetedNow
// 0x0001 (0x0001 - 0x0000)
struct BP_ExtraNpcCharacter_C_CanBeTargetedNow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_CanBeTargetedNow) == 0x000001, "Wrong alignment on BP_ExtraNpcCharacter_C_CanBeTargetedNow");
static_assert(sizeof(BP_ExtraNpcCharacter_C_CanBeTargetedNow) == 0x000001, "Wrong size on BP_ExtraNpcCharacter_C_CanBeTargetedNow");
static_assert(offsetof(BP_ExtraNpcCharacter_C_CanBeTargetedNow, ReturnValue) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_CanBeTargetedNow::ReturnValue' has a wrong offset!");

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsInteractionDisable
// 0x0020 (0x0020 - 0x0000)
struct BP_ExtraNpcCharacter_C_IsInteractionDisable final
{
public:
	const class AActor*                           InOtherActor;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTagsAny_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraNpcCharacter_C_IsInteractionDisable) == 0x000008, "Wrong alignment on BP_ExtraNpcCharacter_C_IsInteractionDisable");
static_assert(sizeof(BP_ExtraNpcCharacter_C_IsInteractionDisable) == 0x000020, "Wrong size on BP_ExtraNpcCharacter_C_IsInteractionDisable");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsInteractionDisable, InOtherActor) == 0x000000, "Member 'BP_ExtraNpcCharacter_C_IsInteractionDisable::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsInteractionDisable, ReturnValue) == 0x000008, "Member 'BP_ExtraNpcCharacter_C_IsInteractionDisable::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsInteractionDisable, K2Node_DynamicCast_AsBP_Player_Character) == 0x000010, "Member 'BP_ExtraNpcCharacter_C_IsInteractionDisable::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsInteractionDisable, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ExtraNpcCharacter_C_IsInteractionDisable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExtraNpcCharacter_C_IsInteractionDisable, CallFunc_HasAnimTagsAny_ReturnValue) == 0x000019, "Member 'BP_ExtraNpcCharacter_C_IsInteractionDisable::CallFunc_HasAnimTagsAny_ReturnValue' has a wrong offset!");

}

