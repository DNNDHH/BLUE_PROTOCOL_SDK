#pragma once

 

// Package: BP_InteractionSwBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.Interaction__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_InteractionSwBase_C_Interaction__DelegateSignature final
{
public:
	class AActor*                                 Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractionSwBase_C_Interaction__DelegateSignature) == 0x000008, "Wrong alignment on BP_InteractionSwBase_C_Interaction__DelegateSignature");
static_assert(sizeof(BP_InteractionSwBase_C_Interaction__DelegateSignature) == 0x000018, "Wrong size on BP_InteractionSwBase_C_Interaction__DelegateSignature");
static_assert(offsetof(BP_InteractionSwBase_C_Interaction__DelegateSignature, Other_Actor) == 0x000000, "Member 'BP_InteractionSwBase_C_Interaction__DelegateSignature::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_Interaction__DelegateSignature, View_Rotation) == 0x000008, "Member 'BP_InteractionSwBase_C_Interaction__DelegateSignature::View_Rotation' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.ExecuteUbergraph_BP_InteractionSwBase
// 0x0090 (0x0090 - 0x0000)
struct BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFieldStatus                                  K2Node_CustomEvent_newStatus;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AE[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStatus_ReturnValue;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStatus_ReturnValue_1;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStatus_ReturnValue_2;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AF[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Rotator;                              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B1[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsAliveHitPoint_self_CastInput;           // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAliveHitPoint_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B2[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFieldStatus NewStatus)>       K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase) == 0x000008, "Wrong alignment on BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase");
static_assert(sizeof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase) == 0x000090, "Wrong size on BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, EntryPoint) == 0x000000, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_CustomEvent_newStatus) == 0x000004, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_CustomEvent_newStatus' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_Event_InOtherActor) == 0x000010, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_Event_ViewRotation) == 0x000018, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_DynamicCast_AsBP_Player_Controller) == 0x000028, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_DynamicCast_AsBP_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_Event_DeltaSeconds) == 0x000034, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_SetStatus_ReturnValue) == 0x000039, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_SetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_SetStatus_ReturnValue_1) == 0x00003A, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_SetStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_SetStatus_ReturnValue_2) == 0x00003B, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_SetStatus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_IsStandalone_ReturnValue) == 0x00003C, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_Event_OtherActor) == 0x000040, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_Event_Rotator) == 0x000048, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_Event_Rotator' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_DynamicCast_AsSBCharacter) == 0x000058, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_IsAliveHitPoint_self_CastInput) == 0x000068, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_IsAliveHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_IsAliveHitPoint_ReturnValue) == 0x000078, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_IsAliveHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteractionSw
// 0x0018 (0x0018 - 0x0000)
struct BP_InteractionSwBase_C_OnInteractionSw final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotator;                                           // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractionSwBase_C_OnInteractionSw) == 0x000008, "Wrong alignment on BP_InteractionSwBase_C_OnInteractionSw");
static_assert(sizeof(BP_InteractionSwBase_C_OnInteractionSw) == 0x000018, "Wrong size on BP_InteractionSwBase_C_OnInteractionSw");
static_assert(offsetof(BP_InteractionSwBase_C_OnInteractionSw, OtherActor) == 0x000000, "Member 'BP_InteractionSwBase_C_OnInteractionSw::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_OnInteractionSw, Rotator) == 0x000008, "Member 'BP_InteractionSwBase_C_OnInteractionSw::Rotator' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_InteractionSwBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractionSwBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_InteractionSwBase_C_ReceiveTick");
static_assert(sizeof(BP_InteractionSwBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_InteractionSwBase_C_ReceiveTick");
static_assert(offsetof(BP_InteractionSwBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_InteractionSwBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteraction
// 0x0018 (0x0018 - 0x0000)
struct BP_InteractionSwBase_C_OnInteraction final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractionSwBase_C_OnInteraction) == 0x000008, "Wrong alignment on BP_InteractionSwBase_C_OnInteraction");
static_assert(sizeof(BP_InteractionSwBase_C_OnInteraction) == 0x000018, "Wrong size on BP_InteractionSwBase_C_OnInteraction");
static_assert(offsetof(BP_InteractionSwBase_C_OnInteraction, InOtherActor) == 0x000000, "Member 'BP_InteractionSwBase_C_OnInteraction::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_OnInteraction, ViewRotation) == 0x000008, "Member 'BP_InteractionSwBase_C_OnInteraction::ViewRotation' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.CleanupBlocker
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractionSwBase_C_CleanupBlocker final
{
public:
	EFieldStatus                                  NewStatus;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractionSwBase_C_CleanupBlocker) == 0x000001, "Wrong alignment on BP_InteractionSwBase_C_CleanupBlocker");
static_assert(sizeof(BP_InteractionSwBase_C_CleanupBlocker) == 0x000001, "Wrong size on BP_InteractionSwBase_C_CleanupBlocker");
static_assert(offsetof(BP_InteractionSwBase_C_CleanupBlocker, NewStatus) == 0x000000, "Member 'BP_InteractionSwBase_C_CleanupBlocker::NewStatus' has a wrong offset!");

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.IsInteractionDisable
// 0x0010 (0x0010 - 0x0000)
struct BP_InteractionSwBase_C_IsInteractionDisable final
{
public:
	const class AActor*                           InOtherActor;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractionSwBase_C_IsInteractionDisable) == 0x000008, "Wrong alignment on BP_InteractionSwBase_C_IsInteractionDisable");
static_assert(sizeof(BP_InteractionSwBase_C_IsInteractionDisable) == 0x000010, "Wrong size on BP_InteractionSwBase_C_IsInteractionDisable");
static_assert(offsetof(BP_InteractionSwBase_C_IsInteractionDisable, InOtherActor) == 0x000000, "Member 'BP_InteractionSwBase_C_IsInteractionDisable::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteractionSwBase_C_IsInteractionDisable, ReturnValue) == 0x000008, "Member 'BP_InteractionSwBase_C_IsInteractionDisable::ReturnValue' has a wrong offset!");

}

