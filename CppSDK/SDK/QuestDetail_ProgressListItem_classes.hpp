#pragma once

 

// Package: QuestDetail_ProgressListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C
// 0x0018 (0x0290 - 0x0278)
class UQuestDetail_ProgressListItem_C final : public UUserWidget
{
public:
	class UQuestDetail_CheckIcon_C*               CheckIcon;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Label_Condition;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Progress;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const class FString& ConditionText, const class FString& ProgressText, bool bClear);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_ProgressListItem_C">();
	}
	static class UQuestDetail_ProgressListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_ProgressListItem_C>();
	}
};
static_assert(alignof(UQuestDetail_ProgressListItem_C) == 0x000008, "Wrong alignment on UQuestDetail_ProgressListItem_C");
static_assert(sizeof(UQuestDetail_ProgressListItem_C) == 0x000290, "Wrong size on UQuestDetail_ProgressListItem_C");
static_assert(offsetof(UQuestDetail_ProgressListItem_C, CheckIcon) == 0x000278, "Member 'UQuestDetail_ProgressListItem_C::CheckIcon' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressListItem_C, Label_Condition) == 0x000280, "Member 'UQuestDetail_ProgressListItem_C::Label_Condition' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressListItem_C, Label_Progress) == 0x000288, "Member 'UQuestDetail_ProgressListItem_C::Label_Progress' has a wrong offset!");

}

