#pragma once

 

// Package: BP_PlayerWarpComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ExecuteUbergraph_BP_PlayerWarpComponent
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D96[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWarpCountDown_C*                       CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D97[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRemainWarpWaitTime_ReturnValue;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent) == 0x000008, "Wrong alignment on BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent");
static_assert(sizeof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent) == 0x000020, "Wrong size on BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, CallFunc_IsValid_ReturnValue_2) == 0x000018, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent, CallFunc_GetRemainWarpWaitTime_ReturnValue) == 0x00001C, "Member 'BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent::CallFunc_GetRemainWarpWaitTime_ReturnValue' has a wrong offset!");

// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.TickComponentByActorEvent
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerWarpComponent_C_TickComponentByActorEvent final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerWarpComponent_C_TickComponentByActorEvent) == 0x000004, "Wrong alignment on BP_PlayerWarpComponent_C_TickComponentByActorEvent");
static_assert(sizeof(BP_PlayerWarpComponent_C_TickComponentByActorEvent) == 0x000004, "Wrong size on BP_PlayerWarpComponent_C_TickComponentByActorEvent");
static_assert(offsetof(BP_PlayerWarpComponent_C_TickComponentByActorEvent, DeltaTime) == 0x000000, "Member 'BP_PlayerWarpComponent_C_TickComponentByActorEvent::DeltaTime' has a wrong offset!");

// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.IsCountDownUICancelPressed
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerWarpComponent_C_IsCountDownUICancelPressed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerWarpComponent_C_IsCountDownUICancelPressed) == 0x000001, "Wrong alignment on BP_PlayerWarpComponent_C_IsCountDownUICancelPressed");
static_assert(sizeof(BP_PlayerWarpComponent_C_IsCountDownUICancelPressed) == 0x000003, "Wrong size on BP_PlayerWarpComponent_C_IsCountDownUICancelPressed");
static_assert(offsetof(BP_PlayerWarpComponent_C_IsCountDownUICancelPressed, ReturnValue) == 0x000000, "Member 'BP_PlayerWarpComponent_C_IsCountDownUICancelPressed::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_IsCountDownUICancelPressed, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerWarpComponent_C_IsCountDownUICancelPressed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerWarpComponent_C_IsCountDownUICancelPressed, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000002, "Member 'BP_PlayerWarpComponent_C_IsCountDownUICancelPressed::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

