#pragma once

 

// Package: Ribbon_PaidOnly

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.ExecuteUbergraph_Ribbon_PaidOnly
// 0x0008 (0x0008 - 0x0000)
struct Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly) == 0x000004, "Wrong alignment on Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly");
static_assert(sizeof(Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly) == 0x000008, "Wrong size on Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly");
static_assert(offsetof(Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly, EntryPoint) == 0x000000, "Member 'Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Ribbon_PaidOnly_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Ribbon_PaidOnly_C_PreConstruct) == 0x000001, "Wrong alignment on Ribbon_PaidOnly_C_PreConstruct");
static_assert(sizeof(Ribbon_PaidOnly_C_PreConstruct) == 0x000001, "Wrong size on Ribbon_PaidOnly_C_PreConstruct");
static_assert(offsetof(Ribbon_PaidOnly_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Ribbon_PaidOnly_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

