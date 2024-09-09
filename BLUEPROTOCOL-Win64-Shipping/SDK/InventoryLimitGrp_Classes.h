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
	 * WidgetBlueprintGeneratedClass InventoryLimitGrp.InventoryLimitGrp_C
	 * Size -> 0x011D (FullSize[0x0395] - InheritedSize[0x0278])
	 */
	class UInventoryLimitGrp_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_LimitedMerk;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                SBDateTimeTextBlock_Duration;                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                SBDateTimeTextBlock_Limit;                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Heading;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcherForTime;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDateTime                                           EventEndTime;                                            // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FItemMasterData                                     ItemMasterData;                                          // 0x02B8(0x00D0) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CommentTextId;                                           // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsForShopProduct;                                        // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2E7E[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DurationMinutes;                                         // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  ItemType;                                                // 0x0394(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetItemType(EItemType ItemType);
		void SetHeadingMessage();
		ESBDateTimeTextRemainTimeFlag SetDateTimeText(const struct FDateTime& InDateTime);
		void SetIsForShopProduct(bool InIsForShopProduct);
		void SetDurationTimeFromMinutes(int32_t InDurationMinutes);
		void PreConstruct(bool IsDesignTime);
		void SetData(const struct FItemMasterData& ItemMasterData);
		void SetDataForCostume(const struct FDateTime& InExpiryDateTime);
		void SetDataForWeapon(const struct FDateTime& InExpiryDateTime);
		void SetDataForCostumeByDurationMinutes(int32_t InDurationMinutes);
		void SetDataForWeaponByDurationMinutes(int32_t InDurationMinutes);
		void SetDataForImagine(const struct FDateTime& InExpiryDateTime);
		void SetDataForMountImagine(const struct FDateTime& InExpiryDateTime);
		void ExecuteUbergraph_InventoryLimitGrp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
