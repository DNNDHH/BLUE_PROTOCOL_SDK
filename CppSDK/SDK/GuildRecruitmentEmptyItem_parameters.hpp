#pragma once

 

// Package: GuildRecruitmentEmptyItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.ExecuteUbergraph_GuildRecruitmentEmptyItem
// 0x0004 (0x0004 - 0x0000)
struct GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem) == 0x000004, "Wrong alignment on GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem");
static_assert(sizeof(GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem) == 0x000004, "Wrong size on GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem, EntryPoint) == 0x000000, "Member 'GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem::EntryPoint' has a wrong offset!");

// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetMainMessageFromId
// 0x0030 (0x0030 - 0x0000)
struct GuildRecruitmentEmptyItem_C_SetMainMessageFromId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EC4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(GuildRecruitmentEmptyItem_C_SetMainMessageFromId) == 0x000008, "Wrong alignment on GuildRecruitmentEmptyItem_C_SetMainMessageFromId");
static_assert(sizeof(GuildRecruitmentEmptyItem_C_SetMainMessageFromId) == 0x000030, "Wrong size on GuildRecruitmentEmptyItem_C_SetMainMessageFromId");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_SetMainMessageFromId, TextId) == 0x000000, "Member 'GuildRecruitmentEmptyItem_C_SetMainMessageFromId::TextId' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_SetMainMessageFromId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'GuildRecruitmentEmptyItem_C_SetMainMessageFromId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_SetMainMessageFromId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GuildRecruitmentEmptyItem_C_SetMainMessageFromId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetGuildTutorialMessage
// 0x0028 (0x0028 - 0x0000)
struct GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage) == 0x000008, "Wrong alignment on GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage");
static_assert(sizeof(GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage) == 0x000028, "Wrong size on GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'GuildRecruitmentEmptyItem_C_SetGuildTutorialMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

