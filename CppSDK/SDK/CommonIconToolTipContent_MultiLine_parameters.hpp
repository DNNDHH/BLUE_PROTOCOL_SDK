#pragma once

 

// Package: CommonIconToolTipContent_MultiLine

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_MultiLine.CommonIconToolTipContent_MultiLine_C.ExecuteUbergraph_CommonIconToolTipContent_MultiLine
// 0x0020 (0x0020 - 0x0000)
struct CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine) == 0x000008, "Wrong alignment on CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine");
static_assert(sizeof(CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine) == 0x000020, "Wrong size on CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine");
static_assert(offsetof(CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine, K2Node_CustomEvent_InText) == 0x000008, "Member 'CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine::K2Node_CustomEvent_InText' has a wrong offset!");

// Function CommonIconToolTipContent_MultiLine.CommonIconToolTipContent_MultiLine_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct CommonIconToolTipContent_MultiLine_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonIconToolTipContent_MultiLine_C_SetText) == 0x000008, "Wrong alignment on CommonIconToolTipContent_MultiLine_C_SetText");
static_assert(sizeof(CommonIconToolTipContent_MultiLine_C_SetText) == 0x000018, "Wrong size on CommonIconToolTipContent_MultiLine_C_SetText");
static_assert(offsetof(CommonIconToolTipContent_MultiLine_C_SetText, InText) == 0x000000, "Member 'CommonIconToolTipContent_MultiLine_C_SetText::InText' has a wrong offset!");

}

