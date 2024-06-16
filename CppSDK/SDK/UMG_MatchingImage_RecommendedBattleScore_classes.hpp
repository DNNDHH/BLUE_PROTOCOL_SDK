#pragma once

 

// Package: UMG_MatchingImage_RecommendedBattleScore

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C
// 0x0008 (0x0280 - 0x0278)
class UUMG_MatchingImage_RecommendedBattleScore_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextRecommendedBattleScore;                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetRecommendedBattleScore(int32 RecommendedBattleScore);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingImage_RecommendedBattleScore_C">();
	}
	static class UUMG_MatchingImage_RecommendedBattleScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingImage_RecommendedBattleScore_C>();
	}
};
static_assert(alignof(UUMG_MatchingImage_RecommendedBattleScore_C) == 0x000008, "Wrong alignment on UUMG_MatchingImage_RecommendedBattleScore_C");
static_assert(sizeof(UUMG_MatchingImage_RecommendedBattleScore_C) == 0x000280, "Wrong size on UUMG_MatchingImage_RecommendedBattleScore_C");
static_assert(offsetof(UUMG_MatchingImage_RecommendedBattleScore_C, TextRecommendedBattleScore) == 0x000278, "Member 'UUMG_MatchingImage_RecommendedBattleScore_C::TextRecommendedBattleScore' has a wrong offset!");

}

