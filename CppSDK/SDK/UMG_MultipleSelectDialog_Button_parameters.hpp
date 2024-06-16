#pragma once

 

// Package: UMG_MultipleSelectDialog_Button

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.OnSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature");
static_assert(sizeof(UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature) == 0x000004, "Wrong size on UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature");
static_assert(offsetof(UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature, SelectIndex) == 0x000000, "Member 'UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature::SelectIndex' has a wrong offset!");

// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.ExecuteUbergraph_UMG_MultipleSelectDialog_Button
// 0x0058 (0x0058 - 0x0000)
struct UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C04[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button) == 0x000008, "Wrong alignment on UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button");
static_assert(sizeof(UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button) == 0x000058, "Wrong size on UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button");
static_assert(offsetof(UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button, EntryPoint) == 0x000000, "Member 'UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

