#pragma once

 

// Package: GuildNpcSelectMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildNpcSelectMode.GuildNpcSelectMode_C.ExecuteUbergraph_GuildNpcSelectMode
// 0x0048 (0x0048 - 0x0000)
struct GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B94[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_BannerText;                     // 0x0008(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode) == 0x000008, "Wrong alignment on GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode");
static_assert(sizeof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode) == 0x000048, "Wrong size on GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode");
static_assert(offsetof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode, EntryPoint) == 0x000000, "Member 'GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode, K2Node_CustomEvent_BannerText) == 0x000008, "Member 'GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode::K2Node_CustomEvent_BannerText' has a wrong offset!");
static_assert(offsetof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildNpcSelectMode.GuildNpcSelectMode_C.SetBannerText
// 0x0018 (0x0018 - 0x0000)
struct GuildNpcSelectMode_C_SetBannerText final
{
public:
	class FText                                   BannerText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildNpcSelectMode_C_SetBannerText) == 0x000008, "Wrong alignment on GuildNpcSelectMode_C_SetBannerText");
static_assert(sizeof(GuildNpcSelectMode_C_SetBannerText) == 0x000018, "Wrong size on GuildNpcSelectMode_C_SetBannerText");
static_assert(offsetof(GuildNpcSelectMode_C_SetBannerText, BannerText) == 0x000000, "Member 'GuildNpcSelectMode_C_SetBannerText::BannerText' has a wrong offset!");

}

