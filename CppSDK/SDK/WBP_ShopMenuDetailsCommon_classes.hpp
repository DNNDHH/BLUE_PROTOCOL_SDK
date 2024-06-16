#pragma once

 

// Package: WBP_ShopMenuDetailsCommon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_ShopMenuDetailsCommon_C : public UUserWidget
{
public:
	class UWBP_ShopMenuDetailsNameParts_C*        _NameParts;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             _TagsParts;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetBonus(bool bBonus);
	void SetBppExchange(bool bCanBppExchange);
	void SetLotteryAbility(bool bLotteryAbility);
	void SetLotteryGroupsId(int32 LotteryGroupsId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShopMenuDetailsCommon_C">();
	}
	static class UWBP_ShopMenuDetailsCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShopMenuDetailsCommon_C>();
	}
};
static_assert(alignof(UWBP_ShopMenuDetailsCommon_C) == 0x000008, "Wrong alignment on UWBP_ShopMenuDetailsCommon_C");
static_assert(sizeof(UWBP_ShopMenuDetailsCommon_C) == 0x000288, "Wrong size on UWBP_ShopMenuDetailsCommon_C");
static_assert(offsetof(UWBP_ShopMenuDetailsCommon_C, _NameParts) == 0x000278, "Member 'UWBP_ShopMenuDetailsCommon_C::_NameParts' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsCommon_C, _TagsParts) == 0x000280, "Member 'UWBP_ShopMenuDetailsCommon_C::_TagsParts' has a wrong offset!");

}

