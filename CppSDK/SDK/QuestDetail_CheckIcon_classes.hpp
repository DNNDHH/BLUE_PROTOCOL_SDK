#pragma once

 

// Package: QuestDetail_CheckIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_CheckIcon.QuestDetail_CheckIcon_C
// 0x0020 (0x0298 - 0x0278)
class UQuestDetail_CheckIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Icon;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_1;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bCheck;                                            // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetCheck(bool bFlag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_CheckIcon_C">();
	}
	static class UQuestDetail_CheckIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_CheckIcon_C>();
	}
};
static_assert(alignof(UQuestDetail_CheckIcon_C) == 0x000008, "Wrong alignment on UQuestDetail_CheckIcon_C");
static_assert(sizeof(UQuestDetail_CheckIcon_C) == 0x000298, "Wrong size on UQuestDetail_CheckIcon_C");
static_assert(offsetof(UQuestDetail_CheckIcon_C, Icon) == 0x000278, "Member 'UQuestDetail_CheckIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UQuestDetail_CheckIcon_C, Icon_1) == 0x000280, "Member 'UQuestDetail_CheckIcon_C::Icon_1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_CheckIcon_C, WidgetSwitcher_0) == 0x000288, "Member 'UQuestDetail_CheckIcon_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UQuestDetail_CheckIcon_C, bCheck) == 0x000290, "Member 'UQuestDetail_CheckIcon_C::bCheck' has a wrong offset!");

}

