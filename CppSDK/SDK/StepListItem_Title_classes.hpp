#pragma once

 

// Package: StepListItem_Title

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_Title.StepListItem_Title_C
// 0x0010 (0x02A8 - 0x0298)
class UStepListItem_Title_C final : public USBStepListTitle
{
public:
	class UQuestIconS_C*                          QuestIconS;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDebug;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTextDebug(const class FText& InText);
	void SetTextDebugVisible(bool Param_IsVisible);
	void OnSetIconQuest(int32 InQuestIndex);
	void OnSetIconWishList(EQuestStatus InQuestStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_Title_C">();
	}
	static class UStepListItem_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_Title_C>();
	}
};
static_assert(alignof(UStepListItem_Title_C) == 0x000008, "Wrong alignment on UStepListItem_Title_C");
static_assert(sizeof(UStepListItem_Title_C) == 0x0002A8, "Wrong size on UStepListItem_Title_C");
static_assert(offsetof(UStepListItem_Title_C, QuestIconS) == 0x000298, "Member 'UStepListItem_Title_C::QuestIconS' has a wrong offset!");
static_assert(offsetof(UStepListItem_Title_C, TextDebug) == 0x0002A0, "Member 'UStepListItem_Title_C::TextDebug' has a wrong offset!");

}

