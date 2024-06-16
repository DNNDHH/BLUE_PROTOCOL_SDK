#pragma once

 

// Package: HateAlert

#include "Basic.hpp"


namespace SDK::Params
{

// Function HateAlert.HateAlert_C.ExecuteUbergraph_HateAlert
// 0x0008 (0x0008 - 0x0000)
struct HateAlert_C_ExecuteUbergraph_HateAlert final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlert_C_ExecuteUbergraph_HateAlert) == 0x000004, "Wrong alignment on HateAlert_C_ExecuteUbergraph_HateAlert");
static_assert(sizeof(HateAlert_C_ExecuteUbergraph_HateAlert) == 0x000008, "Wrong size on HateAlert_C_ExecuteUbergraph_HateAlert");
static_assert(offsetof(HateAlert_C_ExecuteUbergraph_HateAlert, EntryPoint) == 0x000000, "Member 'HateAlert_C_ExecuteUbergraph_HateAlert::EntryPoint' has a wrong offset!");
static_assert(offsetof(HateAlert_C_ExecuteUbergraph_HateAlert, K2Node_Event_InDeltaTime) == 0x000004, "Member 'HateAlert_C_ExecuteUbergraph_HateAlert::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function HateAlert.HateAlert_C.ParentsCallTick
// 0x0004 (0x0004 - 0x0000)
struct HateAlert_C_ParentsCallTick final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlert_C_ParentsCallTick) == 0x000004, "Wrong alignment on HateAlert_C_ParentsCallTick");
static_assert(sizeof(HateAlert_C_ParentsCallTick) == 0x000004, "Wrong size on HateAlert_C_ParentsCallTick");
static_assert(offsetof(HateAlert_C_ParentsCallTick, InDeltaTime) == 0x000000, "Member 'HateAlert_C_ParentsCallTick::InDeltaTime' has a wrong offset!");

}

