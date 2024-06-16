#pragma once

 

// Package: WBP_InventoryItemBagStorageDescription

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C
// 0x0280 (0x04F8 - 0x0278)
class UWBP_InventoryItemBagStorageDescription_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect1;                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect2;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelForStorageWeaponSkin;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescVB;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EffectsVB;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FusionItemEffectsVB;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_46;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_160;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgForStorageWeaponSkinModel;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescription_ItemIconL_C*               ItemIconL_1;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemIntervalVB;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemLvVB;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemNameVB;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemTypeName;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NeedSlotCountVB;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  StorageCmnOperationRotate;                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageWeaponStickerIconBg;                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_IntervalMax;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemLv;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_NeedSlotCountValue;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtEffect;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName1;                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName2;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue1;                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue2;                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ItemType;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bRegisterMode;                                     // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTrashable;                                        // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E8[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bInventory;                                        // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E9[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x03C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FItemMasterData                        ItemMaster;                                        // 0x0420(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsWeaponSticker;                                  // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFusionItem;                                     // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void SetItem(const struct FInventoryData& Param_InventoryItemData);
	void CheckUseItemFlag(bool* NoUse);
	void SetIsIntervalTimeVisible(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryItemBagStorageDescription_C">();
	}
	static class UWBP_InventoryItemBagStorageDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryItemBagStorageDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryItemBagStorageDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryItemBagStorageDescription_C");
static_assert(sizeof(UWBP_InventoryItemBagStorageDescription_C) == 0x0004F8, "Wrong size on UWBP_InventoryItemBagStorageDescription_C");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, CanvasPanel_FusionItemEffect1) == 0x000278, "Member 'UWBP_InventoryItemBagStorageDescription_C::CanvasPanel_FusionItemEffect1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, CanvasPanel_FusionItemEffect2) == 0x000280, "Member 'UWBP_InventoryItemBagStorageDescription_C::CanvasPanel_FusionItemEffect2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, CanvasPanelForStorageWeaponSkin) == 0x000288, "Member 'UWBP_InventoryItemBagStorageDescription_C::CanvasPanelForStorageWeaponSkin' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, CmnIcon_KeyItem) == 0x000290, "Member 'UWBP_InventoryItemBagStorageDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, DescVB) == 0x000298, "Member 'UWBP_InventoryItemBagStorageDescription_C::DescVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, EffectsVB) == 0x0002A0, "Member 'UWBP_InventoryItemBagStorageDescription_C::EffectsVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, FusionItemEffectsVB) == 0x0002A8, "Member 'UWBP_InventoryItemBagStorageDescription_C::FusionItemEffectsVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Image) == 0x0002B0, "Member 'UWBP_InventoryItemBagStorageDescription_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Image_46) == 0x0002B8, "Member 'UWBP_InventoryItemBagStorageDescription_C::Image_46' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Image_116) == 0x0002C0, "Member 'UWBP_InventoryItemBagStorageDescription_C::Image_116' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Image_160) == 0x0002C8, "Member 'UWBP_InventoryItemBagStorageDescription_C::Image_160' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Image_LockIcon) == 0x0002D0, "Member 'UWBP_InventoryItemBagStorageDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ImgForStorageWeaponSkinModel) == 0x0002D8, "Member 'UWBP_InventoryItemBagStorageDescription_C::ImgForStorageWeaponSkinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, InventoryLimitGrp) == 0x0002E0, "Member 'UWBP_InventoryItemBagStorageDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, InventoryTagBPP) == 0x0002E8, "Member 'UWBP_InventoryItemBagStorageDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, InventoryTagSale) == 0x0002F0, "Member 'UWBP_InventoryItemBagStorageDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemIconL_1) == 0x0002F8, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemIconL_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemIntervalVB) == 0x000300, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemIntervalVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemLvVB) == 0x000308, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemLvVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemName) == 0x000310, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemNameVB) == 0x000318, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemNameVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemTypeName) == 0x000320, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemTypeName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, NeedSlotCountVB) == 0x000328, "Member 'UWBP_InventoryItemBagStorageDescription_C::NeedSlotCountVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, StorageCmnOperationRotate) == 0x000330, "Member 'UWBP_InventoryItemBagStorageDescription_C::StorageCmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, StorageWeaponStickerIconBg) == 0x000338, "Member 'UWBP_InventoryItemBagStorageDescription_C::StorageWeaponStickerIconBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Txt_IntervalMax) == 0x000340, "Member 'UWBP_InventoryItemBagStorageDescription_C::Txt_IntervalMax' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Txt_ItemLv) == 0x000348, "Member 'UWBP_InventoryItemBagStorageDescription_C::Txt_ItemLv' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, Txt_NeedSlotCountValue) == 0x000350, "Member 'UWBP_InventoryItemBagStorageDescription_C::Txt_NeedSlotCountValue' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtDesc) == 0x000358, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtEffect) == 0x000360, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtEffect' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtFusionItemEffectName1) == 0x000368, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtFusionItemEffectName1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtFusionItemEffectName2) == 0x000370, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtFusionItemEffectName2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtFusionItemEffectValue1) == 0x000378, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtFusionItemEffectValue1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, TxtFusionItemEffectValue2) == 0x000380, "Member 'UWBP_InventoryItemBagStorageDescription_C::TxtFusionItemEffectValue2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, WidgetSwitcher_ItemType) == 0x000388, "Member 'UWBP_InventoryItemBagStorageDescription_C::WidgetSwitcher_ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, OnButtonClicked) == 0x000390, "Member 'UWBP_InventoryItemBagStorageDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, bRegisterMode) == 0x0003A0, "Member 'UWBP_InventoryItemBagStorageDescription_C::bRegisterMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, bTrashable) == 0x0003A1, "Member 'UWBP_InventoryItemBagStorageDescription_C::bTrashable' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, UniqueId) == 0x0003A8, "Member 'UWBP_InventoryItemBagStorageDescription_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, bInventory) == 0x0003B8, "Member 'UWBP_InventoryItemBagStorageDescription_C::bInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, InventoryItemData) == 0x0003C0, "Member 'UWBP_InventoryItemBagStorageDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, ItemMaster) == 0x000420, "Member 'UWBP_InventoryItemBagStorageDescription_C::ItemMaster' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, bIsWeaponSticker) == 0x0004F0, "Member 'UWBP_InventoryItemBagStorageDescription_C::bIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemBagStorageDescription_C, bIsFusionItem) == 0x0004F1, "Member 'UWBP_InventoryItemBagStorageDescription_C::bIsFusionItem' has a wrong offset!");

}

