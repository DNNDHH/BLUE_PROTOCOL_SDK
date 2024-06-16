#pragma once

 

// Package: US_SetPartyStrategy

#include "Basic.hpp"


namespace SDK::Params
{

// Function US_SetPartyStrategy.US_SetPartyStrategy_C.ExecuteUbergraph_US_SetPartyStrategy
// 0x0030 (0x0030 - 0x0000)
struct US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EDA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFwBlackboardComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy) == 0x000008, "Wrong alignment on US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy");
static_assert(sizeof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy) == 0x000030, "Wrong size on US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, EntryPoint) == 0x000000, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::EntryPoint' has a wrong offset!");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, CallFunc_MakeLiteralString_ReturnValue) == 0x000008, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

