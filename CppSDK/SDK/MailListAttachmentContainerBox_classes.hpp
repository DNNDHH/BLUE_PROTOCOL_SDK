#pragma once

 

// Package: MailListAttachmentContainerBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailListAttachmentContainerBox.MailListAttachmentContainerBox_C
// 0x00B8 (0x0330 - 0x0278)
class UMailListAttachmentContainerBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             Grid_Items;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Equip;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Item;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Other;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StorageName;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageType;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         WidgetNum;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8705[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   OwnItemInfos;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBMailAttachment>              RewardData;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  RewardNewIcon;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FOwnItemInfo>                   SallItemInfos;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBMailAttachment>              VanishData;                                        // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 VanishAcceptIndex;                                 // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SellMoneyNum;                                      // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MailListAttachmentContainerBox(int32 EntryPoint);
	void AddVanishData(const struct FSBMailAttachment& VanishItem);
	void AddSallItemInfo(const struct FOwnItemInfo& SallInfo);
	void Set_Other();
	void Set_Bag(bool bEquip);
	void Set_Storage();
	void Add_RewardType(const struct FSBMailAttachment& NewItem, bool IsNew);
	void AddItemInfo(const struct FOwnItemInfo& NewItem);
	void PreConstruct(bool IsDesignTime);
	void GenerateItemIcons();
	void CreateIcon(int32 A, const struct FSBMailAttachment& Attachment, class UCommonIcon_C** Icon);
	void SetMailExtraData(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData);
	void ItemTooltipCheck(const struct FOwnItemInfo& ItemInfo, class UCommonIcon_C* Icon);
	void SetSoldProfit(class UCommonIcon_C* Icon, const struct FSBMailAttachment& MailData);
	void ItemTypeToAttachmentType(EItemType InItemType, ESBRewardItemType* OutAttachmentType);
	void UpdateVanishedTooltip(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData, bool* IsTooltipChange);
	void IsDuplicateType(ESBRewardItemType ItemType, bool* Duplicate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailListAttachmentContainerBox_C">();
	}
	static class UMailListAttachmentContainerBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailListAttachmentContainerBox_C>();
	}
};
static_assert(alignof(UMailListAttachmentContainerBox_C) == 0x000008, "Wrong alignment on UMailListAttachmentContainerBox_C");
static_assert(sizeof(UMailListAttachmentContainerBox_C) == 0x000330, "Wrong size on UMailListAttachmentContainerBox_C");
static_assert(offsetof(UMailListAttachmentContainerBox_C, UberGraphFrame) == 0x000278, "Member 'UMailListAttachmentContainerBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Grid_Items) == 0x000280, "Member 'UMailListAttachmentContainerBox_C::Grid_Items' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Img_Bag) == 0x000288, "Member 'UMailListAttachmentContainerBox_C::Img_Bag' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Img_Bag_Equip) == 0x000290, "Member 'UMailListAttachmentContainerBox_C::Img_Bag_Equip' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Img_Bag_Item) == 0x000298, "Member 'UMailListAttachmentContainerBox_C::Img_Bag_Item' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Img_Other) == 0x0002A0, "Member 'UMailListAttachmentContainerBox_C::Img_Other' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Img_Storage) == 0x0002A8, "Member 'UMailListAttachmentContainerBox_C::Img_Storage' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, Txt_StorageName) == 0x0002B0, "Member 'UMailListAttachmentContainerBox_C::Txt_StorageName' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, WS_StorageType) == 0x0002B8, "Member 'UMailListAttachmentContainerBox_C::WS_StorageType' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, WidgetNum) == 0x0002C0, "Member 'UMailListAttachmentContainerBox_C::WidgetNum' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, OwnItemInfos) == 0x0002C8, "Member 'UMailListAttachmentContainerBox_C::OwnItemInfos' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, RewardData) == 0x0002D8, "Member 'UMailListAttachmentContainerBox_C::RewardData' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, RewardNewIcon) == 0x0002E8, "Member 'UMailListAttachmentContainerBox_C::RewardNewIcon' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, SallItemInfos) == 0x0002F8, "Member 'UMailListAttachmentContainerBox_C::SallItemInfos' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, VanishData) == 0x000308, "Member 'UMailListAttachmentContainerBox_C::VanishData' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, VanishAcceptIndex) == 0x000318, "Member 'UMailListAttachmentContainerBox_C::VanishAcceptIndex' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentContainerBox_C, SellMoneyNum) == 0x000328, "Member 'UMailListAttachmentContainerBox_C::SellMoneyNum' has a wrong offset!");

}

