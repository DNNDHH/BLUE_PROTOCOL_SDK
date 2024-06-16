#pragma once

 

// Package: Fang_expedition_BreakButton2

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.ExecuteUbergraph_Fang_expedition_BreakButton2
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2) == 0x000004, "Wrong alignment on Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2");
static_assert(sizeof(Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2) == 0x000004, "Wrong size on Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2");
static_assert(offsetof(Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2, EntryPoint) == 0x000000, "Member 'Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2::EntryPoint' has a wrong offset!");

// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.Init
// 0x0028 (0x0028 - 0x0000)
struct Fang_expedition_BreakButton2_C_Init final
{
public:
	int32                                         Token;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E3F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E40[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_BreakButton2_C_Init) == 0x000008, "Wrong alignment on Fang_expedition_BreakButton2_C_Init");
static_assert(sizeof(Fang_expedition_BreakButton2_C_Init) == 0x000028, "Wrong size on Fang_expedition_BreakButton2_C_Init");
static_assert(offsetof(Fang_expedition_BreakButton2_C_Init, Token) == 0x000000, "Member 'Fang_expedition_BreakButton2_C_Init::Token' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton2_C_Init, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Fang_expedition_BreakButton2_C_Init::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton2_C_Init, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_BreakButton2_C_Init::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton2_C_Init, CallFunc_GetTokenAmount_ReturnValue) == 0x000024, "Member 'Fang_expedition_BreakButton2_C_Init::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");

// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.SetButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_BreakButton2_C_SetButtonEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_BreakButton2_C_SetButtonEnabled) == 0x000001, "Wrong alignment on Fang_expedition_BreakButton2_C_SetButtonEnabled");
static_assert(sizeof(Fang_expedition_BreakButton2_C_SetButtonEnabled) == 0x000001, "Wrong size on Fang_expedition_BreakButton2_C_SetButtonEnabled");
static_assert(offsetof(Fang_expedition_BreakButton2_C_SetButtonEnabled, Enabled) == 0x000000, "Member 'Fang_expedition_BreakButton2_C_SetButtonEnabled::Enabled' has a wrong offset!");

}

