#pragma once

 

// Package: QuestRewardIconInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct QuestRewardIconInfo.QuestRewardIconInfo
// 0x0028 (0x0028 - 0x0000)
struct FQuestRewardIconInfo final
{
public:
	class FString                                 UniqueId_12_1B8537F4442B7E24DEC00DBE1736E232;      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ID_6_FAFFDDC7484DF33E96C9E9B5F090905C;             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_8_BC2483594C8EC5B567662793D30E1CB9;         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNumber_17_AE7E503F44472A490FA2268A0B4674CE; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType_3_DA63F19D4DD72E5BBAD060B44DFD6099; // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E41[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TeamBonusPercent_19_D3567CB748E3D0A7EE85EFB98CC48C67; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FQuestRewardIconInfo) == 0x000008, "Wrong alignment on FQuestRewardIconInfo");
static_assert(sizeof(FQuestRewardIconInfo) == 0x000028, "Wrong size on FQuestRewardIconInfo");
static_assert(offsetof(FQuestRewardIconInfo, UniqueId_12_1B8537F4442B7E24DEC00DBE1736E232) == 0x000000, "Member 'FQuestRewardIconInfo::UniqueId_12_1B8537F4442B7E24DEC00DBE1736E232' has a wrong offset!");
static_assert(offsetof(FQuestRewardIconInfo, ID_6_FAFFDDC7484DF33E96C9E9B5F090905C) == 0x000010, "Member 'FQuestRewardIconInfo::ID_6_FAFFDDC7484DF33E96C9E9B5F090905C' has a wrong offset!");
static_assert(offsetof(FQuestRewardIconInfo, Amount_8_BC2483594C8EC5B567662793D30E1CB9) == 0x000014, "Member 'FQuestRewardIconInfo::Amount_8_BC2483594C8EC5B567662793D30E1CB9' has a wrong offset!");
static_assert(offsetof(FQuestRewardIconInfo, StorageNumber_17_AE7E503F44472A490FA2268A0B4674CE) == 0x000018, "Member 'FQuestRewardIconInfo::StorageNumber_17_AE7E503F44472A490FA2268A0B4674CE' has a wrong offset!");
static_assert(offsetof(FQuestRewardIconInfo, RewardItemType_3_DA63F19D4DD72E5BBAD060B44DFD6099) == 0x00001C, "Member 'FQuestRewardIconInfo::RewardItemType_3_DA63F19D4DD72E5BBAD060B44DFD6099' has a wrong offset!");
static_assert(offsetof(FQuestRewardIconInfo, TeamBonusPercent_19_D3567CB748E3D0A7EE85EFB98CC48C67) == 0x000020, "Member 'FQuestRewardIconInfo::TeamBonusPercent_19_D3567CB748E3D0A7EE85EFB98CC48C67' has a wrong offset!");

}

