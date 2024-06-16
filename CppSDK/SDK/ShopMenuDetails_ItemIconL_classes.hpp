#pragma once

 

// Package: ShopMenuDetails_ItemIconL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C
// 0x0020 (0x0298 - 0x0278)
class UShopMenuDetails_ItemIconL_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Item;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94DF[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ItemMat;                                           // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShopMenuDetails_ItemIconL(int32 EntryPoint);
	void SetRewardData(ESBRewardItemType RewardType, int32 ItemIndex);
	void SetItem(int32 InItemIndex);
	void OnLoaded_F007825A4510AF00D498C5946084418E(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetails_ItemIconL_C">();
	}
	static class UShopMenuDetails_ItemIconL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetails_ItemIconL_C>();
	}
};
static_assert(alignof(UShopMenuDetails_ItemIconL_C) == 0x000008, "Wrong alignment on UShopMenuDetails_ItemIconL_C");
static_assert(sizeof(UShopMenuDetails_ItemIconL_C) == 0x000298, "Wrong size on UShopMenuDetails_ItemIconL_C");
static_assert(offsetof(UShopMenuDetails_ItemIconL_C, UberGraphFrame) == 0x000278, "Member 'UShopMenuDetails_ItemIconL_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetails_ItemIconL_C, Item) == 0x000280, "Member 'UShopMenuDetails_ItemIconL_C::Item' has a wrong offset!");
static_assert(offsetof(UShopMenuDetails_ItemIconL_C, ItemId) == 0x000288, "Member 'UShopMenuDetails_ItemIconL_C::ItemId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetails_ItemIconL_C, ItemMat) == 0x000290, "Member 'UShopMenuDetails_ItemIconL_C::ItemMat' has a wrong offset!");

}

