#pragma once

 

// Package: CmnClose01

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnClose01.CmnClose01_C.ExecuteUbergraph_CmnClose01
// 0x0004 (0x0004 - 0x0000)
struct CmnClose01_C_ExecuteUbergraph_CmnClose01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnClose01_C_ExecuteUbergraph_CmnClose01) == 0x000004, "Wrong alignment on CmnClose01_C_ExecuteUbergraph_CmnClose01");
static_assert(sizeof(CmnClose01_C_ExecuteUbergraph_CmnClose01) == 0x000004, "Wrong size on CmnClose01_C_ExecuteUbergraph_CmnClose01");
static_assert(offsetof(CmnClose01_C_ExecuteUbergraph_CmnClose01, EntryPoint) == 0x000000, "Member 'CmnClose01_C_ExecuteUbergraph_CmnClose01::EntryPoint' has a wrong offset!");

// Function CmnClose01.CmnClose01_C.SetEnableBtn
// 0x0001 (0x0001 - 0x0000)
struct CmnClose01_C_SetEnableBtn final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnClose01_C_SetEnableBtn) == 0x000001, "Wrong alignment on CmnClose01_C_SetEnableBtn");
static_assert(sizeof(CmnClose01_C_SetEnableBtn) == 0x000001, "Wrong size on CmnClose01_C_SetEnableBtn");
static_assert(offsetof(CmnClose01_C_SetEnableBtn, bInIsEnabled) == 0x000000, "Member 'CmnClose01_C_SetEnableBtn::bInIsEnabled' has a wrong offset!");

}

