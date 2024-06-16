#pragma once

 

// Package: SelectMenuItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SelectMenuItem.SelectMenuItem_C.OnSelectItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SelectMenuItem_C_OnSelectItem__DelegateSignature final
{
public:
	class USelectMenuItem_C*                      SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenuItem_C_OnSelectItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectMenuItem_C_OnSelectItem__DelegateSignature");
static_assert(sizeof(SelectMenuItem_C_OnSelectItem__DelegateSignature) == 0x000008, "Wrong size on SelectMenuItem_C_OnSelectItem__DelegateSignature");
static_assert(offsetof(SelectMenuItem_C_OnSelectItem__DelegateSignature, SelectItem) == 0x000000, "Member 'SelectMenuItem_C_OnSelectItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function SelectMenuItem.SelectMenuItem_C.ExecuteUbergraph_SelectMenuItem
// 0x0004 (0x0004 - 0x0000)
struct SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem) == 0x000004, "Wrong alignment on SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem");
static_assert(sizeof(SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem) == 0x000004, "Wrong size on SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem");
static_assert(offsetof(SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem, EntryPoint) == 0x000000, "Member 'SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem::EntryPoint' has a wrong offset!");

// Function SelectMenuItem.SelectMenuItem_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct SelectMenuItem_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_763E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(SelectMenuItem_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on SelectMenuItem_C_Set_Menu_Focus");
static_assert(sizeof(SelectMenuItem_C_Set_Menu_Focus) == 0x000058, "Wrong size on SelectMenuItem_C_Set_Menu_Focus");
static_assert(offsetof(SelectMenuItem_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'SelectMenuItem_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(SelectMenuItem_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'SelectMenuItem_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectMenuItem_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'SelectMenuItem_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

