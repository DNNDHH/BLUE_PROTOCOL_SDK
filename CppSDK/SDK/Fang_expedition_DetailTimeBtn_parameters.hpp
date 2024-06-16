#pragma once

 

// Package: Fang_expedition_DetailTimeBtn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.ExecuteUbergraph_Fang_expedition_DetailTimeBtn
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DE6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn) == 0x000008, "Wrong alignment on Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn");
static_assert(sizeof(Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn) == 0x000058, "Wrong size on Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_DetailTimeBtn_C_SetText final
{
public:
	class FText                                   TimeText;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DetailTimeBtn_C_SetText) == 0x000008, "Wrong alignment on Fang_expedition_DetailTimeBtn_C_SetText");
static_assert(sizeof(Fang_expedition_DetailTimeBtn_C_SetText) == 0x000018, "Wrong size on Fang_expedition_DetailTimeBtn_C_SetText");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_SetText, TimeText) == 0x000000, "Member 'Fang_expedition_DetailTimeBtn_C_SetText::TimeText' has a wrong offset!");

// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_DetailTimeBtn_C_SetBtnSelected final
{
public:
	bool                                          Param_BtnSelected;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DE7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(Fang_expedition_DetailTimeBtn_C_SetBtnSelected) == 0x000008, "Wrong alignment on Fang_expedition_DetailTimeBtn_C_SetBtnSelected");
static_assert(sizeof(Fang_expedition_DetailTimeBtn_C_SetBtnSelected) == 0x000058, "Wrong size on Fang_expedition_DetailTimeBtn_C_SetBtnSelected");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_SetBtnSelected, Param_BtnSelected) == 0x000000, "Member 'Fang_expedition_DetailTimeBtn_C_SetBtnSelected::Param_BtnSelected' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'Fang_expedition_DetailTimeBtn_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailTimeBtn_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'Fang_expedition_DetailTimeBtn_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

