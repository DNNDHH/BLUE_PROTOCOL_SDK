#pragma once

 

// Package: EventShopCheckList_Item

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "EventShopCheckList_ItemType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCheckList_Item.EventShopCheckList_Item_C
// 0x0058 (0x02D0 - 0x0278)
class UEventShopCheckList_Item_C final : public UUserWidget
{
public:
	class UEventShopCheckList_Item_Bag_C*         EventShopCheckList_Item_Bag;                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward1_C*     EventShopCheckList_Item_Reward1;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward2_C*     EventShopCheckList_Item_Reward2;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Reward3_C*     EventShopCheckList_Item_Reward3;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCheckList_Item_Storage_C*     EventShopCheckList_Item_Storage;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ActiveWidget;                                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBag;                                             // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_63CC[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   Inventory_ItemBag;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_CharaStorage;                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_EquipBag;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_EquipStorage;                            // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetItemInfo(ESBRewardItemType RewardItemType, const class FString& ItemName, int32 NumExchange, int32 NumHave, int32 NumLimit);
	void GetCheckListType(ESBRewardItemType RewardItemType, EventShopCheckList_ItemType* CheckListType);
	void SetStorage();
	void Initialize();
	void SetIconOver();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCheckList_Item_C">();
	}
	static class UEventShopCheckList_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCheckList_Item_C>();
	}
};
static_assert(alignof(UEventShopCheckList_Item_C) == 0x000008, "Wrong alignment on UEventShopCheckList_Item_C");
static_assert(sizeof(UEventShopCheckList_Item_C) == 0x0002D0, "Wrong size on UEventShopCheckList_Item_C");
static_assert(offsetof(UEventShopCheckList_Item_C, EventShopCheckList_Item_Bag) == 0x000278, "Member 'UEventShopCheckList_Item_C::EventShopCheckList_Item_Bag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, EventShopCheckList_Item_Reward1) == 0x000280, "Member 'UEventShopCheckList_Item_C::EventShopCheckList_Item_Reward1' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, EventShopCheckList_Item_Reward2) == 0x000288, "Member 'UEventShopCheckList_Item_C::EventShopCheckList_Item_Reward2' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, EventShopCheckList_Item_Reward3) == 0x000290, "Member 'UEventShopCheckList_Item_C::EventShopCheckList_Item_Reward3' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, EventShopCheckList_Item_Storage) == 0x000298, "Member 'UEventShopCheckList_Item_C::EventShopCheckList_Item_Storage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, Switcher) == 0x0002A0, "Member 'UEventShopCheckList_Item_C::Switcher' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, ActiveWidget) == 0x0002A8, "Member 'UEventShopCheckList_Item_C::ActiveWidget' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, IsBag) == 0x0002A9, "Member 'UEventShopCheckList_Item_C::IsBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, Inventory_ItemBag) == 0x0002B0, "Member 'UEventShopCheckList_Item_C::Inventory_ItemBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, Inventory_CharaStorage) == 0x0002B8, "Member 'UEventShopCheckList_Item_C::Inventory_CharaStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, Inventory_EquipBag) == 0x0002C0, "Member 'UEventShopCheckList_Item_C::Inventory_EquipBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_C, Inventory_EquipStorage) == 0x0002C8, "Member 'UEventShopCheckList_Item_C::Inventory_EquipStorage' has a wrong offset!");

}

