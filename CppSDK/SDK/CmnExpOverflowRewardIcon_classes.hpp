#pragma once

 

// Package: CmnExpOverflowRewardIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C
// 0x0020 (0x0298 - 0x0278)
class UCmnExpOverflowRewardIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IconImage;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTooltipCreated;                                 // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsClassLevelCounterStop;                          // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsClassLevelLimit;                                // 0x0292(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsClassLevelLimitSmallerThanCounterStop;          // 0x0293(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CmnExpOverflowRewardIcon(int32 EntryPoint);
	void Construct();
	void SetIconType(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop, bool bInIsNoTooltip);
	void CreateTooltip(bool bInUpdateTooltip, bool bInIsNoTooltip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnExpOverflowRewardIcon_C">();
	}
	static class UCmnExpOverflowRewardIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnExpOverflowRewardIcon_C>();
	}
};
static_assert(alignof(UCmnExpOverflowRewardIcon_C) == 0x000008, "Wrong alignment on UCmnExpOverflowRewardIcon_C");
static_assert(sizeof(UCmnExpOverflowRewardIcon_C) == 0x000298, "Wrong size on UCmnExpOverflowRewardIcon_C");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, UberGraphFrame) == 0x000278, "Member 'UCmnExpOverflowRewardIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, IconImage) == 0x000280, "Member 'UCmnExpOverflowRewardIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, CachedToolTipWidget) == 0x000288, "Member 'UCmnExpOverflowRewardIcon_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, bIsTooltipCreated) == 0x000290, "Member 'UCmnExpOverflowRewardIcon_C::bIsTooltipCreated' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, bIsClassLevelCounterStop) == 0x000291, "Member 'UCmnExpOverflowRewardIcon_C::bIsClassLevelCounterStop' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, bIsClassLevelLimit) == 0x000292, "Member 'UCmnExpOverflowRewardIcon_C::bIsClassLevelLimit' has a wrong offset!");
static_assert(offsetof(UCmnExpOverflowRewardIcon_C, bIsClassLevelLimitSmallerThanCounterStop) == 0x000293, "Member 'UCmnExpOverflowRewardIcon_C::bIsClassLevelLimitSmallerThanCounterStop' has a wrong offset!");

}

