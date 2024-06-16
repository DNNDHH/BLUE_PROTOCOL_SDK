#pragma once

 

// Package: CmnClose03

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnClose03.CmnClose03_C.ExecuteUbergraph_CmnClose03
// 0x0004 (0x0004 - 0x0000)
struct CmnClose03_C_ExecuteUbergraph_CmnClose03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnClose03_C_ExecuteUbergraph_CmnClose03) == 0x000004, "Wrong alignment on CmnClose03_C_ExecuteUbergraph_CmnClose03");
static_assert(sizeof(CmnClose03_C_ExecuteUbergraph_CmnClose03) == 0x000004, "Wrong size on CmnClose03_C_ExecuteUbergraph_CmnClose03");
static_assert(offsetof(CmnClose03_C_ExecuteUbergraph_CmnClose03, EntryPoint) == 0x000000, "Member 'CmnClose03_C_ExecuteUbergraph_CmnClose03::EntryPoint' has a wrong offset!");

// Function CmnClose03.CmnClose03_C.SetEnableBtn
// 0x0001 (0x0001 - 0x0000)
struct CmnClose03_C_SetEnableBtn final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnClose03_C_SetEnableBtn) == 0x000001, "Wrong alignment on CmnClose03_C_SetEnableBtn");
static_assert(sizeof(CmnClose03_C_SetEnableBtn) == 0x000001, "Wrong size on CmnClose03_C_SetEnableBtn");
static_assert(offsetof(CmnClose03_C_SetEnableBtn, bInIsEnabled) == 0x000000, "Member 'CmnClose03_C_SetEnableBtn::bInIsEnabled' has a wrong offset!");

}

