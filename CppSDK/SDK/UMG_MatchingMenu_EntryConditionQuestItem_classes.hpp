#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionQuestItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionQuestItem.UMG_MatchingMenu_EntryConditionQuestItem_C
// 0x0068 (0x02E0 - 0x0278)
class UUMG_MatchingMenu_EntryConditionQuestItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_166;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_StepIcon;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LevelName;                                     // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NpcName;                                       // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_QuestName;                                     // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 QuestName;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 NpcName;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 LevelName;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         QuestStatus;                                       // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuestItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionQuestItem_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionQuestItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionQuestItem_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionQuestItem_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionQuestItem_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionQuestItem_C) == 0x0002E0, "Wrong size on UUMG_MatchingMenu_EntryConditionQuestItem_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, Image_166) == 0x000280, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::Image_166' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, Switch_StepIcon) == 0x000288, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::Switch_StepIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, Txt_LevelName) == 0x000290, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::Txt_LevelName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, Txt_NpcName) == 0x000298, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::Txt_NpcName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, Txt_QuestName) == 0x0002A0, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::Txt_QuestName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, QuestName) == 0x0002A8, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::QuestName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, NpcName) == 0x0002B8, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::NpcName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, LevelName) == 0x0002C8, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::LevelName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuestItem_C, QuestStatus) == 0x0002D8, "Member 'UUMG_MatchingMenu_EntryConditionQuestItem_C::QuestStatus' has a wrong offset!");

}

