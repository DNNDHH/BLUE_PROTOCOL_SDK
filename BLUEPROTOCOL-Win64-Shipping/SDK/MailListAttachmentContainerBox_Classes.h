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
	 * WidgetBlueprintGeneratedClass MailListAttachmentContainerBox.MailListAttachmentContainerBox_C
	 * Size -> 0x00BC (FullSize[0x0334] - InheritedSize[0x0278])
	 */
	class UMailListAttachmentContainerBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGridPanel*                                          Grid_Items;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bag;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bag_Equip;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bag_Item;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_OrnamentStorage;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Other;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Storage;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_StorageName;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_StorageType;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    WidgetNum;                                               // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2IQ8[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOwnItemInfo>                                OwnItemInfos;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBMailAttachment>                           RewardData;                                              // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               RewardNewIcon;                                           // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FOwnItemInfo>                                SallItemInfos;                                           // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBMailAttachment>                           VanishData;                                              // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            VanishAcceptIndex;                                       // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SellMoneyNum;                                            // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetOrnamentStorage();
		void AddSallItemInfo(const struct FOwnItemInfo& SallInfo);
		void AddRewardType(const struct FSBMailAttachment& NewItem, bool IsNew);
		void AddItemInfo(const struct FOwnItemInfo& NewItem);
		void AddVanishData(const struct FSBMailAttachment& VanishItem);
		void SetOther();
		void SetBag(bool bEquip);
		void SetStorage();
		void SetStorageText(const class FText& InText, int32_t Index);
		void IsDuplicateType(ESBRewardItemType ItemType, bool* Duplicate);
		void UpdateVanishedTooltip(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData, bool* IsTooltipChange);
		void SetSoldProfit(class UCommonIcon_C* Icon, const struct FSBMailAttachment& MailData);
		void ItemTooltipCheck(const struct FOwnItemInfo& ItemInfo, class UCommonIcon_C* Icon);
		void SetMailExtraData(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData);
		void CreateIcon(int32_t A, const struct FSBMailAttachment& Attachment, class UCommonIcon_C** Icon);
		void GenerateItemIcons();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MailListAttachmentContainerBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
