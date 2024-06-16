#pragma once

 

// Package: BP_GimmickBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_GimmickBase.BP_GimmickBase_C.Interaction__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_GimmickBase_C_Interaction__DelegateSignature final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_Interaction__DelegateSignature) == 0x000008, "Wrong alignment on BP_GimmickBase_C_Interaction__DelegateSignature");
static_assert(sizeof(BP_GimmickBase_C_Interaction__DelegateSignature) == 0x000018, "Wrong size on BP_GimmickBase_C_Interaction__DelegateSignature");
static_assert(offsetof(BP_GimmickBase_C_Interaction__DelegateSignature, OtherActor) == 0x000000, "Member 'BP_GimmickBase_C_Interaction__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_Interaction__DelegateSignature, ViewRotation) == 0x000008, "Member 'BP_GimmickBase_C_Interaction__DelegateSignature::ViewRotation' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.ExecuteUbergraph_BP_GimmickBase
// 0x0060 (0x0060 - 0x0000)
struct BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFieldStatus                                  K2Node_CustomEvent_newStatus;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Active;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45EB[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Rotator;                              // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45EC[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor_1;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation_1;                       // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45ED[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(EFieldStatus NewStatus)>       K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase) == 0x000008, "Wrong alignment on BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase");
static_assert(sizeof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase) == 0x000060, "Wrong size on BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, EntryPoint) == 0x000000, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_CustomEvent_newStatus) == 0x000004, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_CustomEvent_newStatus' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_CustomEvent_Active) == 0x000006, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_CustomEvent_Active' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_Rotator) == 0x000010, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_Rotator' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_InOtherActor_1) == 0x000020, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_InOtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_ViewRotation_1) == 0x000028, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_ViewRotation_1' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_InOtherActor) == 0x000038, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_Event_ViewRotation) == 0x000040, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.OnInteraction
// 0x0018 (0x0018 - 0x0000)
struct BP_GimmickBase_C_OnInteraction final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_OnInteraction) == 0x000008, "Wrong alignment on BP_GimmickBase_C_OnInteraction");
static_assert(sizeof(BP_GimmickBase_C_OnInteraction) == 0x000018, "Wrong size on BP_GimmickBase_C_OnInteraction");
static_assert(offsetof(BP_GimmickBase_C_OnInteraction, InOtherActor) == 0x000000, "Member 'BP_GimmickBase_C_OnInteraction::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_OnInteraction, ViewRotation) == 0x000008, "Member 'BP_GimmickBase_C_OnInteraction::ViewRotation' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.EV_InteractionActive
// 0x0001 (0x0001 - 0x0000)
struct BP_GimmickBase_C_EV_InteractionActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_EV_InteractionActive) == 0x000001, "Wrong alignment on BP_GimmickBase_C_EV_InteractionActive");
static_assert(sizeof(BP_GimmickBase_C_EV_InteractionActive) == 0x000001, "Wrong size on BP_GimmickBase_C_EV_InteractionActive");
static_assert(offsetof(BP_GimmickBase_C_EV_InteractionActive, Active) == 0x000000, "Member 'BP_GimmickBase_C_EV_InteractionActive::Active' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.CleanupBlocker
// 0x0001 (0x0001 - 0x0000)
struct BP_GimmickBase_C_CleanupBlocker final
{
public:
	EFieldStatus                                  NewStatus;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickBase_C_CleanupBlocker) == 0x000001, "Wrong alignment on BP_GimmickBase_C_CleanupBlocker");
static_assert(sizeof(BP_GimmickBase_C_CleanupBlocker) == 0x000001, "Wrong size on BP_GimmickBase_C_CleanupBlocker");
static_assert(offsetof(BP_GimmickBase_C_CleanupBlocker, NewStatus) == 0x000000, "Member 'BP_GimmickBase_C_CleanupBlocker::NewStatus' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.OnInteractionSw
// 0x0018 (0x0018 - 0x0000)
struct BP_GimmickBase_C_OnInteractionSw final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotator;                                           // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_OnInteractionSw) == 0x000008, "Wrong alignment on BP_GimmickBase_C_OnInteractionSw");
static_assert(sizeof(BP_GimmickBase_C_OnInteractionSw) == 0x000018, "Wrong size on BP_GimmickBase_C_OnInteractionSw");
static_assert(offsetof(BP_GimmickBase_C_OnInteractionSw, OtherActor) == 0x000000, "Member 'BP_GimmickBase_C_OnInteractionSw::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_OnInteractionSw, Rotator) == 0x000008, "Member 'BP_GimmickBase_C_OnInteractionSw::Rotator' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.CustomEvent
// 0x0018 (0x0018 - 0x0000)
struct BP_GimmickBase_C_CustomEvent final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_CustomEvent) == 0x000008, "Wrong alignment on BP_GimmickBase_C_CustomEvent");
static_assert(sizeof(BP_GimmickBase_C_CustomEvent) == 0x000018, "Wrong size on BP_GimmickBase_C_CustomEvent");
static_assert(offsetof(BP_GimmickBase_C_CustomEvent, InOtherActor) == 0x000000, "Member 'BP_GimmickBase_C_CustomEvent::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_CustomEvent, ViewRotation) == 0x000008, "Member 'BP_GimmickBase_C_CustomEvent::ViewRotation' has a wrong offset!");

// Function BP_GimmickBase.BP_GimmickBase_C.IsInteractionDisable
// 0x0010 (0x0010 - 0x0000)
struct BP_GimmickBase_C_IsInteractionDisable final
{
public:
	const class AActor*                           InOtherActor;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickBase_C_IsInteractionDisable) == 0x000008, "Wrong alignment on BP_GimmickBase_C_IsInteractionDisable");
static_assert(sizeof(BP_GimmickBase_C_IsInteractionDisable) == 0x000010, "Wrong size on BP_GimmickBase_C_IsInteractionDisable");
static_assert(offsetof(BP_GimmickBase_C_IsInteractionDisable, InOtherActor) == 0x000000, "Member 'BP_GimmickBase_C_IsInteractionDisable::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickBase_C_IsInteractionDisable, ReturnValue) == 0x000008, "Member 'BP_GimmickBase_C_IsInteractionDisable::ReturnValue' has a wrong offset!");

}

