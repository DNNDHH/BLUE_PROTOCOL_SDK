#pragma once

 

// Package: SwitchingTitle

#include "Basic.hpp"


namespace SDK::Params
{

// Function SwitchingTitle.SwitchingTitle_C.ExecuteUbergraph_SwitchingTitle
// 0x0004 (0x0004 - 0x0000)
struct SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle) == 0x000004, "Wrong alignment on SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle");
static_assert(sizeof(SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle) == 0x000004, "Wrong size on SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle");
static_assert(offsetof(SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle, EntryPoint) == 0x000000, "Member 'SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle::EntryPoint' has a wrong offset!");

// Function SwitchingTitle.SwitchingTitle_C.OnPlaySE
// 0x000C (0x000C - 0x0000)
struct SwitchingTitle_C_OnPlaySE final
{
public:
	bool                                          IsOpen;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_791C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SwitchingTitle_C_OnPlaySE) == 0x000004, "Wrong alignment on SwitchingTitle_C_OnPlaySE");
static_assert(sizeof(SwitchingTitle_C_OnPlaySE) == 0x00000C, "Wrong size on SwitchingTitle_C_OnPlaySE");
static_assert(offsetof(SwitchingTitle_C_OnPlaySE, IsOpen) == 0x000000, "Member 'SwitchingTitle_C_OnPlaySE::IsOpen' has a wrong offset!");
static_assert(offsetof(SwitchingTitle_C_OnPlaySE, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'SwitchingTitle_C_OnPlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SwitchingTitle_C_OnPlaySE, CallFunc_PlaySE_ReturnValue_1) == 0x000008, "Member 'SwitchingTitle_C_OnPlaySE::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

}

