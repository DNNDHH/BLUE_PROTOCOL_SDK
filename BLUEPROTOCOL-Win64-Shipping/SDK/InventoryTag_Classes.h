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
	 * WidgetBlueprintGeneratedClass InventoryTag.InventoryTag_C
	 * Size -> 0x022D (FullSize[0x04A5] - InheritedSize[0x0278])
	 */
	class UInventoryTag_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_182;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_269;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              InfoIcon;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_90;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_193;                                             // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchBPP;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchFusion;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchSale;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchStackB;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchType;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_StackBMax;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_InventoryTagType                                         TagType;                                                 // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTooltipEnable;                                          // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EToolTipType                                               ToolTipType;                                             // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RXJL[0x1];                                   // 0x02DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemId;                                                  // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         CachedToolTip;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x02E8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsOwnItem;                                              // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDR8[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RecipiId;                                                // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0440(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    LotteryGroupsId;                                         // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActivateToolTip;                                        // 0x04A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetVisibleInfoIcon(bool IsVisible);
		void SetLotteryGroupsId(int32_t InLotteryGroupsId);
		void UpdateOwnItemInfobyStorageNumber(int32_t InStorageNumber, const class FString& InUniqueId, EItemType InItemType);
		void SetRecipiId(int32_t InRecipiId);
		void InitOwnItemInfos(const struct FOwnItemInfo& NewOwnItemInfo);
		void UpdateWeaponStackBMaxToolTip();
		void UpdateImagineStackBMaxToolTip();
		class UWidget* GetToolTipWidget_1();
		void CreateToolTipWidgetifNeeded(class UUserWidget** OutTooltip);
		void SetStackBMaxToolTipCreateInfos(int32_t ItemId, EToolTipType ToolTipType);
		void SetStackBMaxVisible(bool bStackBEnable);
		void SetOwnItemInfo(const struct FOwnItemInfo& Info);
		void SetStackBMaxValue(int32_t Value);
		void SetStackBMax(const class FString& StackBId);
		void SetInventoryItemData(const struct FInventoryItemData& InventoryItemData);
		void SetMasterOrnament(const struct FSBMasterOrnament& Master, bool Used, bool IsBppIrredeemable);
		void SetMasterMountImagine(const struct FSBMasterMountImagine& MasterMountImagine, bool Used, bool IsBppIrredeemable);
		void SetMasterImagine(const struct FSBMasterImagine& MasterImagine, bool Used, bool IsBppIrredeemable);
		void SetMasterCostume(const struct FSBMasterCostume& MasterCostume, bool Used, bool IsBppIrredeemable);
		void SetWeaponMaster(const struct FSBWeaponMasterData& WeaponMaster, bool Used, bool IsBppIrredeemable);
		void SetItemMasterData(const struct FItemMasterData& ItemMasterData, bool IsBppIrredeemable);
		void SetBppChange(ESBRewardItemType RewardType, int32_t ItemId, bool Used, bool IsBppIrredeemable);
		void SetPossibility(bool bPossible, int32_t InParam);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_InventoryTag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
