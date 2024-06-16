#pragma once

 

// Package: AdventurerRank_BenefitList

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRank_BenefitList.AdventurerRank_BenefitList_C
// 0x0020 (0x02D0 - 0x02B0)
class UAdventurerRank_BenefitList_C final : public USBUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_RankUpBenefits;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtRankUpBenefits;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTxtRankUpBenefits(int32 InRank, bool IsRankup);
	void AddTextBenefitList_(const class FText& InText);
	void ResetBenefitList_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRank_BenefitList_C">();
	}
	static class UAdventurerRank_BenefitList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRank_BenefitList_C>();
	}
};
static_assert(alignof(UAdventurerRank_BenefitList_C) == 0x000008, "Wrong alignment on UAdventurerRank_BenefitList_C");
static_assert(sizeof(UAdventurerRank_BenefitList_C) == 0x0002D0, "Wrong size on UAdventurerRank_BenefitList_C");
static_assert(offsetof(UAdventurerRank_BenefitList_C, CanvasPanel_RankUpBenefits) == 0x0002B0, "Member 'UAdventurerRank_BenefitList_C::CanvasPanel_RankUpBenefits' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_BenefitList_C, Line) == 0x0002B8, "Member 'UAdventurerRank_BenefitList_C::Line' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_BenefitList_C, ScrollBox) == 0x0002C0, "Member 'UAdventurerRank_BenefitList_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_BenefitList_C, TxtRankUpBenefits) == 0x0002C8, "Member 'UAdventurerRank_BenefitList_C::TxtRankUpBenefits' has a wrong offset!");

}

