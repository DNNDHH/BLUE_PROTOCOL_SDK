#pragma once

 

// Package: CmnBonusCommon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBonusCommon.CmnBonusCommon_C
// 0x0008 (0x0280 - 0x0278)
class UCmnBonusCommon_C : public UUserWidget
{
public:
	class UUMG_RewardBoostTooltip_C*              RewardBoostTooltip;                                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateStackB(const struct FOwnItemInfo& OwnItemInfo, ESBRewardBoostStackBItemType InItemType);
	ESBRewardBoostStackBItemType GetStackBItemType(const struct FOwnItemInfo& OwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBonusCommon_C">();
	}
	static class UCmnBonusCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBonusCommon_C>();
	}
};
static_assert(alignof(UCmnBonusCommon_C) == 0x000008, "Wrong alignment on UCmnBonusCommon_C");
static_assert(sizeof(UCmnBonusCommon_C) == 0x000280, "Wrong size on UCmnBonusCommon_C");
static_assert(offsetof(UCmnBonusCommon_C, RewardBoostTooltip) == 0x000278, "Member 'UCmnBonusCommon_C::RewardBoostTooltip' has a wrong offset!");

}

