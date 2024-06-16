#pragma once

 

// Package: US_SetDefaultWait

#include "Basic.hpp"


namespace SDK::Params
{

// Function US_SetDefaultWait.US_SetDefaultWait_C.ExecuteUbergraph_US_SetDefaultWait
// 0x0020 (0x0020 - 0x0000)
struct US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EDB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFwBlackboardComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait) == 0x000008, "Wrong alignment on US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait");
static_assert(sizeof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait) == 0x000020, "Wrong size on US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait");
static_assert(offsetof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait, EntryPoint) == 0x000000, "Member 'US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait::EntryPoint' has a wrong offset!");
static_assert(offsetof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

