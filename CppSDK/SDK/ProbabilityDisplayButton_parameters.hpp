#pragma once

 

// Package: ProbabilityDisplayButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.ExecuteUbergraph_ProbabilityDisplayButton
// 0x0058 (0x0058 - 0x0000)
struct ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_948F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton) == 0x000008, "Wrong alignment on ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton");
static_assert(sizeof(ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton) == 0x000058, "Wrong size on ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton");
static_assert(offsetof(ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton, EntryPoint) == 0x000000, "Member 'ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct ProbabilityDisplayButton_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9490[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(ProbabilityDisplayButton_C_SetBtnSelected) == 0x000008, "Wrong alignment on ProbabilityDisplayButton_C_SetBtnSelected");
static_assert(sizeof(ProbabilityDisplayButton_C_SetBtnSelected) == 0x000058, "Wrong size on ProbabilityDisplayButton_C_SetBtnSelected");
static_assert(offsetof(ProbabilityDisplayButton_C_SetBtnSelected, bSelected) == 0x000000, "Member 'ProbabilityDisplayButton_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplayButton_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ProbabilityDisplayButton_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplayButton_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'ProbabilityDisplayButton_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

