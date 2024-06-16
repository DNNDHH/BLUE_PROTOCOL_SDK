#pragma once

 

// Package: RewardIconItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RewardIconItem.RewardIconItem_C.SetRewardData
// 0x0048 (0x0048 - 0x0000)
struct RewardIconItem_C_SetRewardData final
{
public:
	struct FSBMasterReward                        InMasterReward;                                    // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         SwitchId;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5327[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
};
static_assert(alignof(RewardIconItem_C_SetRewardData) == 0x000008, "Wrong alignment on RewardIconItem_C_SetRewardData");
static_assert(sizeof(RewardIconItem_C_SetRewardData) == 0x000048, "Wrong size on RewardIconItem_C_SetRewardData");
static_assert(offsetof(RewardIconItem_C_SetRewardData, InMasterReward) == 0x000000, "Member 'RewardIconItem_C_SetRewardData::InMasterReward' has a wrong offset!");
static_assert(offsetof(RewardIconItem_C_SetRewardData, SwitchId) == 0x000014, "Member 'RewardIconItem_C_SetRewardData::SwitchId' has a wrong offset!");
static_assert(offsetof(RewardIconItem_C_SetRewardData, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'RewardIconItem_C_SetRewardData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(RewardIconItem_C_SetRewardData, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'RewardIconItem_C_SetRewardData::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

