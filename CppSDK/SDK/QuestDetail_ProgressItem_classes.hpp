#pragma once

 

// Package: QuestDetail_ProgressItem

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_ProgressItem.QuestDetail_ProgressItem_C
// 0x0030 (0x02A8 - 0x0278)
class UQuestDetail_ProgressItem_C final : public UUserWidget
{
public:
	class UImage*                                 Image_1;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ProgressList;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ProgressListItem_C*        QuestDetail_ProgressListItem;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ProgressListItem_C*        QuestDetail_ProgressListItem_0;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ProgressListItem_C*        QuestDetail_ProgressListItem_1;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetProgress(int32 InQuestIndex, bool bInCompleted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_ProgressItem_C">();
	}
	static class UQuestDetail_ProgressItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_ProgressItem_C>();
	}
};
static_assert(alignof(UQuestDetail_ProgressItem_C) == 0x000008, "Wrong alignment on UQuestDetail_ProgressItem_C");
static_assert(sizeof(UQuestDetail_ProgressItem_C) == 0x0002A8, "Wrong size on UQuestDetail_ProgressItem_C");
static_assert(offsetof(UQuestDetail_ProgressItem_C, Image_1) == 0x000278, "Member 'UQuestDetail_ProgressItem_C::Image_1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressItem_C, Label_Title) == 0x000280, "Member 'UQuestDetail_ProgressItem_C::Label_Title' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressItem_C, ProgressList) == 0x000288, "Member 'UQuestDetail_ProgressItem_C::ProgressList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressItem_C, QuestDetail_ProgressListItem) == 0x000290, "Member 'UQuestDetail_ProgressItem_C::QuestDetail_ProgressListItem' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressItem_C, QuestDetail_ProgressListItem_0) == 0x000298, "Member 'UQuestDetail_ProgressItem_C::QuestDetail_ProgressListItem_0' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ProgressItem_C, QuestDetail_ProgressListItem_1) == 0x0002A0, "Member 'UQuestDetail_ProgressItem_C::QuestDetail_ProgressListItem_1' has a wrong offset!");

}

