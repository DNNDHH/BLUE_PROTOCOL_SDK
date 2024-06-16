#pragma once

 

// Package: TextBlock

#include "Basic.hpp"


namespace SDK::Params
{

// Function TextBlock.TextBlock_C.ExecuteUbergraph_TextBlock
// 0x0030 (0x0030 - 0x0000)
struct TextBlock_C_ExecuteUbergraph_TextBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8930[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(TextBlock_C_ExecuteUbergraph_TextBlock) == 0x000008, "Wrong alignment on TextBlock_C_ExecuteUbergraph_TextBlock");
static_assert(sizeof(TextBlock_C_ExecuteUbergraph_TextBlock) == 0x000030, "Wrong size on TextBlock_C_ExecuteUbergraph_TextBlock");
static_assert(offsetof(TextBlock_C_ExecuteUbergraph_TextBlock, EntryPoint) == 0x000000, "Member 'TextBlock_C_ExecuteUbergraph_TextBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextBlock_C_ExecuteUbergraph_TextBlock, K2Node_CustomEvent_Text) == 0x000008, "Member 'TextBlock_C_ExecuteUbergraph_TextBlock::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(TextBlock_C_ExecuteUbergraph_TextBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'TextBlock_C_ExecuteUbergraph_TextBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TextBlock.TextBlock_C.SetText
// 0x0010 (0x0010 - 0x0000)
struct TextBlock_C_SetText final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TextBlock_C_SetText) == 0x000008, "Wrong alignment on TextBlock_C_SetText");
static_assert(sizeof(TextBlock_C_SetText) == 0x000010, "Wrong size on TextBlock_C_SetText");
static_assert(offsetof(TextBlock_C_SetText, Text) == 0x000000, "Member 'TextBlock_C_SetText::Text' has a wrong offset!");

}

