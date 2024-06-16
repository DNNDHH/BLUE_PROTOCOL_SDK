#pragma once

 

// Package: Fang_expedition_DetailReleaseConditions

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C
// 0x0030 (0x02A8 - 0x0278)
class UFang_expedition_DetailReleaseConditions_C final : public UUserWidget
{
public:
	class UQuestDetail_CheckIcon_C*               CheckIcon;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Conditions_1;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Conditions_2;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Conditions_3;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(const struct FSBFang_expeditionLimitData& LimitData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailReleaseConditions_C">();
	}
	static class UFang_expedition_DetailReleaseConditions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailReleaseConditions_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailReleaseConditions_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailReleaseConditions_C");
static_assert(sizeof(UFang_expedition_DetailReleaseConditions_C) == 0x0002A8, "Wrong size on UFang_expedition_DetailReleaseConditions_C");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, CheckIcon) == 0x000278, "Member 'UFang_expedition_DetailReleaseConditions_C::CheckIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, Text_Conditions_1) == 0x000280, "Member 'UFang_expedition_DetailReleaseConditions_C::Text_Conditions_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, Text_Conditions_2) == 0x000288, "Member 'UFang_expedition_DetailReleaseConditions_C::Text_Conditions_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, Text_Conditions_3) == 0x000290, "Member 'UFang_expedition_DetailReleaseConditions_C::Text_Conditions_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, WidgetSwitcher_0) == 0x000298, "Member 'UFang_expedition_DetailReleaseConditions_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailReleaseConditions_C, TextTable) == 0x0002A0, "Member 'UFang_expedition_DetailReleaseConditions_C::TextTable' has a wrong offset!");

}

