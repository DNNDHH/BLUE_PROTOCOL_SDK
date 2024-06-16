#pragma once

 

// Package: CharaCreateViewerTextBlock

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.ExecuteUbergraph_CharaCreateViewerTextBlock
// 0x0020 (0x0020 - 0x0000)
struct CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4603[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
};
static_assert(alignof(CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock) == 0x000008, "Wrong alignment on CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock");
static_assert(sizeof(CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock) == 0x000020, "Wrong size on CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock");
static_assert(offsetof(CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock, EntryPoint) == 0x000000, "Member 'CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock, K2Node_CustomEvent_InText) == 0x000008, "Member 'CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock::K2Node_CustomEvent_InText' has a wrong offset!");

// Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct CharaCreateViewerTextBlock_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CharaCreateViewerTextBlock_C_SetText) == 0x000008, "Wrong alignment on CharaCreateViewerTextBlock_C_SetText");
static_assert(sizeof(CharaCreateViewerTextBlock_C_SetText) == 0x000018, "Wrong size on CharaCreateViewerTextBlock_C_SetText");
static_assert(offsetof(CharaCreateViewerTextBlock_C_SetText, InText) == 0x000000, "Member 'CharaCreateViewerTextBlock_C_SetText::InText' has a wrong offset!");

}

