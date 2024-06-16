#pragma once

 

// Package: UMG_MatchingImage_RecommendedBattleScore

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C.SetRecommendedBattleScore
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore final
{
public:
	int32                                         RecommendedBattleScore;                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D50[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore) == 0x000008, "Wrong alignment on UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore");
static_assert(sizeof(UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore) == 0x000020, "Wrong size on UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore");
static_assert(offsetof(UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore, RecommendedBattleScore) == 0x000000, "Member 'UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore::RecommendedBattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

