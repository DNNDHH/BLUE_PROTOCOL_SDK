#pragma once

 

// Package: GashaMenu_ProductListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaMenu_ProductListItem.GashaMenu_ProductListItem_C
// 0x0010 (0x0288 - 0x0278)
class UGashaMenu_ProductListItem_C final : public UUserWidget
{
public:
	class UFlatShop_ProductItem_DescItem_C*       FlatShop_ProductItem_DescItem;                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtRate;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(int32 ItemId, ESBRewardItemType RewardItemType, int32 Amount, float Rate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaMenu_ProductListItem_C">();
	}
	static class UGashaMenu_ProductListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaMenu_ProductListItem_C>();
	}
};
static_assert(alignof(UGashaMenu_ProductListItem_C) == 0x000008, "Wrong alignment on UGashaMenu_ProductListItem_C");
static_assert(sizeof(UGashaMenu_ProductListItem_C) == 0x000288, "Wrong size on UGashaMenu_ProductListItem_C");
static_assert(offsetof(UGashaMenu_ProductListItem_C, FlatShop_ProductItem_DescItem) == 0x000278, "Member 'UGashaMenu_ProductListItem_C::FlatShop_ProductItem_DescItem' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListItem_C, TxtRate) == 0x000280, "Member 'UGashaMenu_ProductListItem_C::TxtRate' has a wrong offset!");

}

