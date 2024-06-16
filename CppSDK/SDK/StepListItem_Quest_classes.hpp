#pragma once

 

// Package: StepListItem_Quest

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_Quest.StepListItem_Quest_C
// 0x0000 (0x02B8 - 0x02B8)
class UStepListItem_Quest_C final : public USBStepListQuestItem
{
public:
	void OnSetQuestTitle(const struct FQuestMasterData& QuestMasterData);
	void OnSetInterruptQuestTitle();

	void GetTitle(class UStepListItem_Title_C** AsStep_List_Item_Title) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_Quest_C">();
	}
	static class UStepListItem_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_Quest_C>();
	}
};
static_assert(alignof(UStepListItem_Quest_C) == 0x000008, "Wrong alignment on UStepListItem_Quest_C");
static_assert(sizeof(UStepListItem_Quest_C) == 0x0002B8, "Wrong size on UStepListItem_Quest_C");

}

