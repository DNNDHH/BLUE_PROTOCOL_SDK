#pragma once

 

// Package: Fang_expedition_DetailItemListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C
// 0x0030 (0x02A8 - 0x0278)
class UFang_expedition_DetailItemListItem_C final : public UUserWidget
{
public:
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heart1;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heart2;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heart3;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NumText;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_80;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(ESBRewardItemType RewardType, int32 Param_Index, int32 Amount);
	void SetNum(int32 Num);
	void SetRandomReward(const struct FSBFang_expeditionRandomRewardData& Data, int32 FangValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailItemListItem_C">();
	}
	static class UFang_expedition_DetailItemListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailItemListItem_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailItemListItem_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailItemListItem_C");
static_assert(sizeof(UFang_expedition_DetailItemListItem_C) == 0x0002A8, "Wrong size on UFang_expedition_DetailItemListItem_C");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, CommonIcon) == 0x000278, "Member 'UFang_expedition_DetailItemListItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, Heart1) == 0x000280, "Member 'UFang_expedition_DetailItemListItem_C::Heart1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, Heart2) == 0x000288, "Member 'UFang_expedition_DetailItemListItem_C::Heart2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, Heart3) == 0x000290, "Member 'UFang_expedition_DetailItemListItem_C::Heart3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, NumText) == 0x000298, "Member 'UFang_expedition_DetailItemListItem_C::NumText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListItem_C, WidgetSwitcher_80) == 0x0002A0, "Member 'UFang_expedition_DetailItemListItem_C::WidgetSwitcher_80' has a wrong offset!");

}

