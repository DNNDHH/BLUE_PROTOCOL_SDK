#pragma once

 

// Package: UD_NpcCanWander

#include "Basic.hpp"


namespace SDK::Params
{

// Function UD_NpcCanWander.UD_NpcCanWander_C.ExecuteUbergraph_UD_NpcCanWander
// 0x0058 (0x0058 - 0x0000)
struct UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bCanWander)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8569[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUtilityBrainComponent*               K2Node_Event_OwnerComponent;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCanWander;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_856A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_DynamicCast_AsController;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_856B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander) == 0x000008, "Wrong alignment on UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander");
static_assert(sizeof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander) == 0x000058, "Wrong size on UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, EntryPoint) == 0x000000, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::EntryPoint' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_Event_OwnerComponent) == 0x000018, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_Event_OwnerComponent' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_CustomEvent_bCanWander) == 0x000020, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_CustomEvent_bCanWander' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_DynamicCast_AsController) == 0x000030, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_DynamicCast_AsController' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_DynamicCast_AsSBMob_Character) == 0x000048, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UD_NpcCanWander.UD_NpcCanWander_C.OnWanderingModeChanged
// 0x0001 (0x0001 - 0x0000)
struct UD_NpcCanWander_C_OnWanderingModeChanged final
{
public:
	bool                                          bCanWander;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UD_NpcCanWander_C_OnWanderingModeChanged) == 0x000001, "Wrong alignment on UD_NpcCanWander_C_OnWanderingModeChanged");
static_assert(sizeof(UD_NpcCanWander_C_OnWanderingModeChanged) == 0x000001, "Wrong size on UD_NpcCanWander_C_OnWanderingModeChanged");
static_assert(offsetof(UD_NpcCanWander_C_OnWanderingModeChanged, bCanWander) == 0x000000, "Member 'UD_NpcCanWander_C_OnWanderingModeChanged::bCanWander' has a wrong offset!");

// Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveInitialize
// 0x0008 (0x0008 - 0x0000)
struct UD_NpcCanWander_C_ReceiveInitialize final
{
public:
	class USBUtilityBrainComponent*               OwnerComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UD_NpcCanWander_C_ReceiveInitialize) == 0x000008, "Wrong alignment on UD_NpcCanWander_C_ReceiveInitialize");
static_assert(sizeof(UD_NpcCanWander_C_ReceiveInitialize) == 0x000008, "Wrong size on UD_NpcCanWander_C_ReceiveInitialize");
static_assert(offsetof(UD_NpcCanWander_C_ReceiveInitialize, OwnerComponent) == 0x000000, "Member 'UD_NpcCanWander_C_ReceiveInitialize::OwnerComponent' has a wrong offset!");

// Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveFetchValue
// 0x0008 (0x0008 - 0x0000)
struct UD_NpcCanWander_C_ReceiveFetchValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UD_NpcCanWander_C_ReceiveFetchValue) == 0x000004, "Wrong alignment on UD_NpcCanWander_C_ReceiveFetchValue");
static_assert(sizeof(UD_NpcCanWander_C_ReceiveFetchValue) == 0x000008, "Wrong size on UD_NpcCanWander_C_ReceiveFetchValue");
static_assert(offsetof(UD_NpcCanWander_C_ReceiveFetchValue, ReturnValue) == 0x000000, "Member 'UD_NpcCanWander_C_ReceiveFetchValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(UD_NpcCanWander_C_ReceiveFetchValue, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UD_NpcCanWander_C_ReceiveFetchValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

