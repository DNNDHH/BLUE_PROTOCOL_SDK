#pragma once

 

// Package: AdventurerRank_BenefitListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRank_BenefitListItem.AdventurerRank_BenefitListItem_C
// 0x0008 (0x0280 - 0x0278)
class UAdventurerRank_BenefitListItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             Text1;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetBenefitText(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRank_BenefitListItem_C">();
	}
	static class UAdventurerRank_BenefitListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRank_BenefitListItem_C>();
	}
};
static_assert(alignof(UAdventurerRank_BenefitListItem_C) == 0x000008, "Wrong alignment on UAdventurerRank_BenefitListItem_C");
static_assert(sizeof(UAdventurerRank_BenefitListItem_C) == 0x000280, "Wrong size on UAdventurerRank_BenefitListItem_C");
static_assert(offsetof(UAdventurerRank_BenefitListItem_C, Text1) == 0x000278, "Member 'UAdventurerRank_BenefitListItem_C::Text1' has a wrong offset!");

}

