#pragma once

 

// Package: Fang_expedition_BreakButton1

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.ExecuteUbergraph_Fang_expedition_BreakButton1
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1) == 0x000004, "Wrong alignment on Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1");
static_assert(sizeof(Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1) == 0x000004, "Wrong size on Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1");
static_assert(offsetof(Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1, EntryPoint) == 0x000000, "Member 'Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1::EntryPoint' has a wrong offset!");

// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetCount
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_BreakButton1_C_SetCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E44[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(Fang_expedition_BreakButton1_C_SetCount) == 0x000008, "Wrong alignment on Fang_expedition_BreakButton1_C_SetCount");
static_assert(sizeof(Fang_expedition_BreakButton1_C_SetCount) == 0x000058, "Wrong size on Fang_expedition_BreakButton1_C_SetCount");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, Count) == 0x000000, "Member 'Fang_expedition_BreakButton1_C_SetCount::Count' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Fang_expedition_BreakButton1_C_SetCount::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'Fang_expedition_BreakButton1_C_SetCount::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, CallFunc_Replace_ReturnValue) == 0x000028, "Member 'Fang_expedition_BreakButton1_C_SetCount::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'Fang_expedition_BreakButton1_C_SetCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetCount, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'Fang_expedition_BreakButton1_C_SetCount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_BreakButton1_C_SetButtonEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_BreakButton1_C_SetButtonEnabled) == 0x000001, "Wrong alignment on Fang_expedition_BreakButton1_C_SetButtonEnabled");
static_assert(sizeof(Fang_expedition_BreakButton1_C_SetButtonEnabled) == 0x000001, "Wrong size on Fang_expedition_BreakButton1_C_SetButtonEnabled");
static_assert(offsetof(Fang_expedition_BreakButton1_C_SetButtonEnabled, Enabled) == 0x000000, "Member 'Fang_expedition_BreakButton1_C_SetButtonEnabled::Enabled' has a wrong offset!");

}

