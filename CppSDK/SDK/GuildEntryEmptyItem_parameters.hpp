#pragma once

 

// Package: GuildEntryEmptyItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildEntryEmptyItem.GuildEntryEmptyItem_C.SetMessageFromId
// 0x0030 (0x0030 - 0x0000)
struct GuildEntryEmptyItem_C_SetMessageFromId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AE7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(GuildEntryEmptyItem_C_SetMessageFromId) == 0x000008, "Wrong alignment on GuildEntryEmptyItem_C_SetMessageFromId");
static_assert(sizeof(GuildEntryEmptyItem_C_SetMessageFromId) == 0x000030, "Wrong size on GuildEntryEmptyItem_C_SetMessageFromId");
static_assert(offsetof(GuildEntryEmptyItem_C_SetMessageFromId, TextId) == 0x000000, "Member 'GuildEntryEmptyItem_C_SetMessageFromId::TextId' has a wrong offset!");
static_assert(offsetof(GuildEntryEmptyItem_C_SetMessageFromId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'GuildEntryEmptyItem_C_SetMessageFromId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryEmptyItem_C_SetMessageFromId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GuildEntryEmptyItem_C_SetMessageFromId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

