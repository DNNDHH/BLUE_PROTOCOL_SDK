#pragma once

 

// Package: WBP_InventoryItemDescription

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryItemDescription.WBP_InventoryItemDescription_C
// 0x0388 (0x0600 - 0x0278)
class UWBP_InventoryItemDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnDetail_1;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Inventory;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Storage;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock2;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale1;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash2;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnUse;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnUse2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_171;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect1;                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect2;                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelForInventoryWeaponSkin;                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelForSKYCoinWeaponSkin;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelForStorageWeaponSkin;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionGrp;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescVB;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EffectsVB;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FusionItemEffectsVB;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_6;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_276;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgForInventoryWeaponSkinModel;                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgForSKYCoinWeaponSkinModel;                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgForStorageWeaponSkinModel;                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  InventoryCmnOperationRotate;                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InventoryWeaponStickerIconBg;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescription_ItemIconL_C*               ItemIconL;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescription_ItemIconL_C*               ItemIconL_1;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescription_ItemIconL_C*               ItemIconL_2;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemIntervalVB;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemLvVB;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemNameVB;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemTypeName;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NeedSlotCountVB;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutCoolTime_C*                    ShortcutCoolTime;                                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxDetail;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  SKYCoinCmnOperationRotate;                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  StorageCmnOperationRotate;                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageWeaponStickerIconBg;                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageWeaponStickerIconBg_1;                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFooter;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_750;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_IntervalMax;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemLv;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_NeedSlotCountValue;                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtEffect;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName1;                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName2;                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue1;                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue2;                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ItemType;                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bRegisterMode;                                     // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTrashable;                                        // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B2[0x6];                                     // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bInventory;                                        // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B3[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x04C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bStorageMode;                                      // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWeaponSticker;                                  // 0x0521(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWeaponStickerRemoveItem;                        // 0x0522(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B4[0x5];                                     // 0x0523(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        MasterData;                                        // 0x0528(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsFusionItem;                                     // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B5[0x3];                                     // 0x05F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwitchIndex;                                       // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void ExecuteUbergraph_WBP_InventoryItemDescription(int32 EntryPoint);
	void BndEvt__WBP_InventoryItemDescription_BtnUse2_1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__WBP_InventoryItemDescription_BtnTakeOut_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__BtnUse2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void UpdetaRecastTime();
	void BndEvt__BtnSale1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RefleshButton();
	void BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnUse_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetItem(const struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode);
	void Set_Register_Mode(bool bIsRegiserMode);
	void CheckUseItemFlag(bool* NoUse);
	void SetSwitcher(int32 Param_Index);
	void IsCanUse_ItemBox(bool* Result);
	void SetIsIntervalTimeVisible(bool InIsVisible);
	void UpdateIcon();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryItemDescription_C">();
	}
	static class UWBP_InventoryItemDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryItemDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryItemDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryItemDescription_C");
static_assert(sizeof(UWBP_InventoryItemDescription_C) == 0x000600, "Wrong size on UWBP_InventoryItemDescription_C");
static_assert(offsetof(UWBP_InventoryItemDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryItemDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnDetail_1) == 0x000280, "Member 'UWBP_InventoryItemDescription_C::BtnDetail_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnGrp_Inventory) == 0x000288, "Member 'UWBP_InventoryItemDescription_C::BtnGrp_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnGrp_Storage) == 0x000290, "Member 'UWBP_InventoryItemDescription_C::BtnGrp_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnLock) == 0x000298, "Member 'UWBP_InventoryItemDescription_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnLock2) == 0x0002A0, "Member 'UWBP_InventoryItemDescription_C::BtnLock2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnMove) == 0x0002A8, "Member 'UWBP_InventoryItemDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnSale1) == 0x0002B0, "Member 'UWBP_InventoryItemDescription_C::BtnSale1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnTrash) == 0x0002B8, "Member 'UWBP_InventoryItemDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnTrash2) == 0x0002C0, "Member 'UWBP_InventoryItemDescription_C::BtnTrash2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnUse) == 0x0002C8, "Member 'UWBP_InventoryItemDescription_C::BtnUse' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, BtnUse2) == 0x0002D0, "Member 'UWBP_InventoryItemDescription_C::BtnUse2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanel_171) == 0x0002D8, "Member 'UWBP_InventoryItemDescription_C::CanvasPanel_171' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanel_FusionItemEffect1) == 0x0002E0, "Member 'UWBP_InventoryItemDescription_C::CanvasPanel_FusionItemEffect1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanel_FusionItemEffect2) == 0x0002E8, "Member 'UWBP_InventoryItemDescription_C::CanvasPanel_FusionItemEffect2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanelForInventoryWeaponSkin) == 0x0002F0, "Member 'UWBP_InventoryItemDescription_C::CanvasPanelForInventoryWeaponSkin' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanelForSKYCoinWeaponSkin) == 0x0002F8, "Member 'UWBP_InventoryItemDescription_C::CanvasPanelForSKYCoinWeaponSkin' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CanvasPanelForStorageWeaponSkin) == 0x000300, "Member 'UWBP_InventoryItemDescription_C::CanvasPanelForStorageWeaponSkin' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, CmnIcon_KeyItem) == 0x000308, "Member 'UWBP_InventoryItemDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, DescriptionGrp) == 0x000310, "Member 'UWBP_InventoryItemDescription_C::DescriptionGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, DescVB) == 0x000318, "Member 'UWBP_InventoryItemDescription_C::DescVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, EffectsVB) == 0x000320, "Member 'UWBP_InventoryItemDescription_C::EffectsVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, FusionItemEffectsVB) == 0x000328, "Member 'UWBP_InventoryItemDescription_C::FusionItemEffectsVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, HorizontalBox) == 0x000330, "Member 'UWBP_InventoryItemDescription_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, HorizontalBox_1) == 0x000338, "Member 'UWBP_InventoryItemDescription_C::HorizontalBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, HorizontalBox_6) == 0x000340, "Member 'UWBP_InventoryItemDescription_C::HorizontalBox_6' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Image_116) == 0x000348, "Member 'UWBP_InventoryItemDescription_C::Image_116' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Image_117) == 0x000350, "Member 'UWBP_InventoryItemDescription_C::Image_117' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Image_183) == 0x000358, "Member 'UWBP_InventoryItemDescription_C::Image_183' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Image_276) == 0x000360, "Member 'UWBP_InventoryItemDescription_C::Image_276' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Image_LockIcon) == 0x000368, "Member 'UWBP_InventoryItemDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ImgForInventoryWeaponSkinModel) == 0x000370, "Member 'UWBP_InventoryItemDescription_C::ImgForInventoryWeaponSkinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ImgForSKYCoinWeaponSkinModel) == 0x000378, "Member 'UWBP_InventoryItemDescription_C::ImgForSKYCoinWeaponSkinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ImgForStorageWeaponSkinModel) == 0x000380, "Member 'UWBP_InventoryItemDescription_C::ImgForStorageWeaponSkinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryCmnOperationRotate) == 0x000388, "Member 'UWBP_InventoryItemDescription_C::InventoryCmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryLimitGrp) == 0x000390, "Member 'UWBP_InventoryItemDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryTagBPP) == 0x000398, "Member 'UWBP_InventoryItemDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryTagSale) == 0x0003A0, "Member 'UWBP_InventoryItemDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryWeaponStickerIconBg) == 0x0003A8, "Member 'UWBP_InventoryItemDescription_C::InventoryWeaponStickerIconBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemIconL) == 0x0003B0, "Member 'UWBP_InventoryItemDescription_C::ItemIconL' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemIconL_1) == 0x0003B8, "Member 'UWBP_InventoryItemDescription_C::ItemIconL_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemIconL_2) == 0x0003C0, "Member 'UWBP_InventoryItemDescription_C::ItemIconL_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemIntervalVB) == 0x0003C8, "Member 'UWBP_InventoryItemDescription_C::ItemIntervalVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemLvVB) == 0x0003D0, "Member 'UWBP_InventoryItemDescription_C::ItemLvVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemName) == 0x0003D8, "Member 'UWBP_InventoryItemDescription_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemNameVB) == 0x0003E0, "Member 'UWBP_InventoryItemDescription_C::ItemNameVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ItemTypeName) == 0x0003E8, "Member 'UWBP_InventoryItemDescription_C::ItemTypeName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, NeedSlotCountVB) == 0x0003F0, "Member 'UWBP_InventoryItemDescription_C::NeedSlotCountVB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, ShortcutCoolTime) == 0x0003F8, "Member 'UWBP_InventoryItemDescription_C::ShortcutCoolTime' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, SizeBoxDetail) == 0x000400, "Member 'UWBP_InventoryItemDescription_C::SizeBoxDetail' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, SKYCoinCmnOperationRotate) == 0x000408, "Member 'UWBP_InventoryItemDescription_C::SKYCoinCmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, StorageCmnOperationRotate) == 0x000410, "Member 'UWBP_InventoryItemDescription_C::StorageCmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, StorageWeaponStickerIconBg) == 0x000418, "Member 'UWBP_InventoryItemDescription_C::StorageWeaponStickerIconBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, StorageWeaponStickerIconBg_1) == 0x000420, "Member 'UWBP_InventoryItemDescription_C::StorageWeaponStickerIconBg_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, SwitchFooter) == 0x000428, "Member 'UWBP_InventoryItemDescription_C::SwitchFooter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, SwitchMode) == 0x000430, "Member 'UWBP_InventoryItemDescription_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TextBlock_750) == 0x000438, "Member 'UWBP_InventoryItemDescription_C::TextBlock_750' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Txt_IntervalMax) == 0x000440, "Member 'UWBP_InventoryItemDescription_C::Txt_IntervalMax' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Txt_ItemLv) == 0x000448, "Member 'UWBP_InventoryItemDescription_C::Txt_ItemLv' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, Txt_NeedSlotCountValue) == 0x000450, "Member 'UWBP_InventoryItemDescription_C::Txt_NeedSlotCountValue' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtDesc) == 0x000458, "Member 'UWBP_InventoryItemDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtEffect) == 0x000460, "Member 'UWBP_InventoryItemDescription_C::TxtEffect' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtFusionItemEffectName1) == 0x000468, "Member 'UWBP_InventoryItemDescription_C::TxtFusionItemEffectName1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtFusionItemEffectName2) == 0x000470, "Member 'UWBP_InventoryItemDescription_C::TxtFusionItemEffectName2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtFusionItemEffectValue1) == 0x000478, "Member 'UWBP_InventoryItemDescription_C::TxtFusionItemEffectValue1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, TxtFusionItemEffectValue2) == 0x000480, "Member 'UWBP_InventoryItemDescription_C::TxtFusionItemEffectValue2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, WidgetSwitcher_ItemType) == 0x000488, "Member 'UWBP_InventoryItemDescription_C::WidgetSwitcher_ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, OnButtonClicked) == 0x000490, "Member 'UWBP_InventoryItemDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bRegisterMode) == 0x0004A0, "Member 'UWBP_InventoryItemDescription_C::bRegisterMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bTrashable) == 0x0004A1, "Member 'UWBP_InventoryItemDescription_C::bTrashable' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, UniqueId) == 0x0004A8, "Member 'UWBP_InventoryItemDescription_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bInventory) == 0x0004B8, "Member 'UWBP_InventoryItemDescription_C::bInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, InventoryItemData) == 0x0004C0, "Member 'UWBP_InventoryItemDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bStorageMode) == 0x000520, "Member 'UWBP_InventoryItemDescription_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bIsWeaponSticker) == 0x000521, "Member 'UWBP_InventoryItemDescription_C::bIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bIsWeaponStickerRemoveItem) == 0x000522, "Member 'UWBP_InventoryItemDescription_C::bIsWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, MasterData) == 0x000528, "Member 'UWBP_InventoryItemDescription_C::MasterData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, bIsFusionItem) == 0x0005F8, "Member 'UWBP_InventoryItemDescription_C::bIsFusionItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryItemDescription_C, SwitchIndex) == 0x0005FC, "Member 'UWBP_InventoryItemDescription_C::SwitchIndex' has a wrong offset!");

}

