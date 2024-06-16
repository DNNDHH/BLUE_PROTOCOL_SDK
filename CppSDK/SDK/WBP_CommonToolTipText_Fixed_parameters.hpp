#pragma once

 

// Package: WBP_CommonToolTipText_Fixed

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.ExecuteUbergraph_WBP_CommonToolTipText_Fixed
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CEF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed");
static_assert(sizeof(WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed) == 0x000020, "Wrong size on WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed");
static_assert(offsetof(WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed, EntryPoint) == 0x000000, "Member 'WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed, K2Node_CustomEvent_InText) == 0x000008, "Member 'WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed::K2Node_CustomEvent_InText' has a wrong offset!");

// Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonToolTipText_Fixed_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipText_Fixed_C_SetText) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Fixed_C_SetText");
static_assert(sizeof(WBP_CommonToolTipText_Fixed_C_SetText) == 0x000018, "Wrong size on WBP_CommonToolTipText_Fixed_C_SetText");
static_assert(offsetof(WBP_CommonToolTipText_Fixed_C_SetText, InText) == 0x000000, "Member 'WBP_CommonToolTipText_Fixed_C_SetText::InText' has a wrong offset!");

}

