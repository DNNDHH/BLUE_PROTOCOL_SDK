#pragma once

 

// Package: InterruptQuestContributionIconM

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InterruptQuestContributionIconM.InterruptQuestContributionIconM_C
// 0x0028 (0x02A0 - 0x0278)
class UInterruptQuestContributionIconM_C final : public UUserWidget
{
public:
	class UImage*                                 Icon1;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon2;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon3;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EQuestContributionRank                        CurrentRank;                                       // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetRank(EQuestContributionRank InRank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InterruptQuestContributionIconM_C">();
	}
	static class UInterruptQuestContributionIconM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterruptQuestContributionIconM_C>();
	}
};
static_assert(alignof(UInterruptQuestContributionIconM_C) == 0x000008, "Wrong alignment on UInterruptQuestContributionIconM_C");
static_assert(sizeof(UInterruptQuestContributionIconM_C) == 0x0002A0, "Wrong size on UInterruptQuestContributionIconM_C");
static_assert(offsetof(UInterruptQuestContributionIconM_C, Icon1) == 0x000278, "Member 'UInterruptQuestContributionIconM_C::Icon1' has a wrong offset!");
static_assert(offsetof(UInterruptQuestContributionIconM_C, Icon2) == 0x000280, "Member 'UInterruptQuestContributionIconM_C::Icon2' has a wrong offset!");
static_assert(offsetof(UInterruptQuestContributionIconM_C, Icon3) == 0x000288, "Member 'UInterruptQuestContributionIconM_C::Icon3' has a wrong offset!");
static_assert(offsetof(UInterruptQuestContributionIconM_C, SwitchIcon) == 0x000290, "Member 'UInterruptQuestContributionIconM_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UInterruptQuestContributionIconM_C, CurrentRank) == 0x000298, "Member 'UInterruptQuestContributionIconM_C::CurrentRank' has a wrong offset!");

}

