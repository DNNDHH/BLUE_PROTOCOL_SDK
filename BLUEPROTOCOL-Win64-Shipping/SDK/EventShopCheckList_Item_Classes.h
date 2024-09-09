#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass EventShopCheckList_Item.EventShopCheckList_Item_C
	 * Size -> 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
	 */
	class UEventShopCheckList_Item_C : public UUserWidget
	{
	public:
		class UEventShopCheckList_Item_Bag_C*                      EventShopCheckList_Item_Bag;                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCheckList_Item_Reward1_C*                  EventShopCheckList_Item_Reward1;                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCheckList_Item_Reward2_C*                  EventShopCheckList_Item_Reward2;                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCheckList_Item_Reward3_C*                  EventShopCheckList_Item_Reward3;                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCheckList_Item_Storage_C*                  EventShopCheckList_Item_Storage;                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ActiveWidget;                                            // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBag;                                                   // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_C0OT[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBTemporallyStorage*                                Inventory_ItemBag;                                       // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTemporallyStorage*                                Inventory_CharaStorage;                                  // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTemporallyStorage*                                Inventory_EquipBag;                                      // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTemporallyStorage*                                Inventory_EquipStorage;                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIconOver();
		void Initialize();
		void SetStorage();
		void GetCheckListType(ESBRewardItemType RewardItemType, EventShopCheckList_ItemType* CheckListType);
		void SetItemInfo(ESBRewardItemType RewardItemType, const class FString& ItemName, int32_t NumExchange, int32_t NumHave, int32_t NumLimit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
