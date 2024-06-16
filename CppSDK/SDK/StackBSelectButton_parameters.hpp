#pragma once

 

// Package: StackBSelectButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StackBSelectButton.StackBSelectButton_C.ExecuteUbergraph_StackBSelectButton
// 0x0190 (0x0190 - 0x0000)
struct StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E8A[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0050(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0070)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0130(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0158(0x0028)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton) == 0x000008, "Wrong alignment on StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton");
static_assert(sizeof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton) == 0x000190, "Wrong size on StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, EntryPoint) == 0x000000, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_Event_MyGeometry) == 0x000014, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_Event_MouseEvent_1) == 0x000050, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_Event_MouseEvent) == 0x0000C0, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_MakeStruct_SlateColor) == 0x000130, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_MakeStruct_SlateColor_1) == 0x000158, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton, K2Node_MakeStruct_LinearColor_1) == 0x000180, "Member 'StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function StackBSelectButton.StackBSelectButton_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct StackBSelectButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(StackBSelectButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on StackBSelectButton_C_OnMouseLeave");
static_assert(sizeof(StackBSelectButton_C_OnMouseLeave) == 0x000070, "Wrong size on StackBSelectButton_C_OnMouseLeave");
static_assert(offsetof(StackBSelectButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'StackBSelectButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function StackBSelectButton.StackBSelectButton_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct StackBSelectButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(StackBSelectButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on StackBSelectButton_C_OnMouseEnter");
static_assert(sizeof(StackBSelectButton_C_OnMouseEnter) == 0x0000A8, "Wrong size on StackBSelectButton_C_OnMouseEnter");
static_assert(offsetof(StackBSelectButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'StackBSelectButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(StackBSelectButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'StackBSelectButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

}

