#pragma once

 

// Package: US_ToggleSenseMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function US_ToggleSenseMode.US_ToggleSenseMode_C.ExecuteUbergraph_US_ToggleSenseMode
// 0x0020 (0x0020 - 0x0000)
struct US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DE8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAIPerceptionComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode) == 0x000008, "Wrong alignment on US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode");
static_assert(sizeof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode) == 0x000020, "Wrong size on US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, EntryPoint) == 0x000000, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

