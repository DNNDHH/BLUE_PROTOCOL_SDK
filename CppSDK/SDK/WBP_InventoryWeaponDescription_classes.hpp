#pragma once

 

// Package: WBP_InventoryWeaponDescription

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C
// 0x03D0 (0x0648 - 0x0278)
class UWBP_InventoryWeaponDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       Attribute1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnBg;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnDemolition;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnEquip;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Inventory;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Storage;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock2;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash2;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     CommonWeaponAbilityInfoSlotList;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionGrp;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpGrp;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_WeaponModel;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_WeaponModel_1;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_WeaponModel_2;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagStackB;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_AbilityDetail;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFooter;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttribute;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtClassName;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCp;                                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExp;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExpTotal;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvMax;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSpecialName;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSpecialNum;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerDescColumn2_C*  WeaponStickerDescColumn;                           // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 UniqueId;                                          // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SortedIndex;                                       // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInventory;                                      // 0x0444(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStorageMode;                                      // 0x0445(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7722[0x2];                                     // 0x0446(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0448(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 AbilityPerkDList;                                  // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBWeaponItemData                      WeaponItemData;                                    // 0x04B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnWeaponStickerButtonPressed;                      // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWeaponStickerInUseButtonPressed;                 // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bBagStorageViewMode;                               // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7723[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OwnData;                                           // 0x0530(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
	void OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
	void ExecuteUbergraph_WBP_InventoryWeaponDescription(int32 EntryPoint);
	void Destruct();
	void OnBtnWeaponStickerRemoveButtonClicked();
	void BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetItem(const struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode);
	void RefleshButton();
	void InitBtn();
	void IsNowJob(bool* IsEquipable);
	void SetSwitcher(int32 Param_Index);
	class UWidget* GetAbility1DescToolTipWidget();
	class UWidget* GetAbility2DescToolTipWidget();
	class UWidget* GetAbility3DescToolTipWidget();
	class UWidget* GetAbility4DescToolTipWidget();
	void GetAbilityDescToolTipWidget(int32 Param_Index, class UCommonToolTip_AbilityPerk_C** AbilityDescToolTip);
	void SetWeaponStickerInUseButtonIsInUse(bool InIsInUse);
	void SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled);
	void SetOperationRotateBtnVisibility(bool InIsVisible);
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryWeaponDescription_C">();
	}
	static class UWBP_InventoryWeaponDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryWeaponDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryWeaponDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryWeaponDescription_C");
static_assert(sizeof(UWBP_InventoryWeaponDescription_C) == 0x000648, "Wrong size on UWBP_InventoryWeaponDescription_C");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryWeaponDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Attribute1) == 0x000280, "Member 'UWBP_InventoryWeaponDescription_C::Attribute1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnBg) == 0x000288, "Member 'UWBP_InventoryWeaponDescription_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnDemolition) == 0x000290, "Member 'UWBP_InventoryWeaponDescription_C::BtnDemolition' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnEquip) == 0x000298, "Member 'UWBP_InventoryWeaponDescription_C::BtnEquip' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnGrp_Inventory) == 0x0002A0, "Member 'UWBP_InventoryWeaponDescription_C::BtnGrp_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnGrp_Storage) == 0x0002A8, "Member 'UWBP_InventoryWeaponDescription_C::BtnGrp_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnLock) == 0x0002B0, "Member 'UWBP_InventoryWeaponDescription_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnLock2) == 0x0002B8, "Member 'UWBP_InventoryWeaponDescription_C::BtnLock2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnMove) == 0x0002C0, "Member 'UWBP_InventoryWeaponDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnSale) == 0x0002C8, "Member 'UWBP_InventoryWeaponDescription_C::BtnSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnTrash) == 0x0002D0, "Member 'UWBP_InventoryWeaponDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, BtnTrash2) == 0x0002D8, "Member 'UWBP_InventoryWeaponDescription_C::BtnTrash2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, CmnGauge1) == 0x0002E0, "Member 'UWBP_InventoryWeaponDescription_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, CmnIcon_KeyItem) == 0x0002E8, "Member 'UWBP_InventoryWeaponDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, CmnOperationRotate) == 0x0002F0, "Member 'UWBP_InventoryWeaponDescription_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, CommonWeaponAbilityInfoSlotList) == 0x0002F8, "Member 'UWBP_InventoryWeaponDescription_C::CommonWeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, DescriptionGrp) == 0x000300, "Member 'UWBP_InventoryWeaponDescription_C::DescriptionGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, ExpGrp) == 0x000308, "Member 'UWBP_InventoryWeaponDescription_C::ExpGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Image_183) == 0x000310, "Member 'UWBP_InventoryWeaponDescription_C::Image_183' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Image_LockIcon) == 0x000318, "Member 'UWBP_InventoryWeaponDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Img_WeaponModel) == 0x000320, "Member 'UWBP_InventoryWeaponDescription_C::Img_WeaponModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Img_WeaponModel_1) == 0x000328, "Member 'UWBP_InventoryWeaponDescription_C::Img_WeaponModel_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, Img_WeaponModel_2) == 0x000330, "Member 'UWBP_InventoryWeaponDescription_C::Img_WeaponModel_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryLimitGrp) == 0x000338, "Member 'UWBP_InventoryWeaponDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryTagBPP) == 0x000340, "Member 'UWBP_InventoryWeaponDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryTagSale) == 0x000348, "Member 'UWBP_InventoryWeaponDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryTagStackB) == 0x000350, "Member 'UWBP_InventoryWeaponDescription_C::InventoryTagStackB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryUsed) == 0x000358, "Member 'UWBP_InventoryWeaponDescription_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, SBButton_AbilityDetail) == 0x000360, "Member 'UWBP_InventoryWeaponDescription_C::SBButton_AbilityDetail' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, SwitchFooter) == 0x000368, "Member 'UWBP_InventoryWeaponDescription_C::SwitchFooter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, SwitchMode) == 0x000370, "Member 'UWBP_InventoryWeaponDescription_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TextBlock_1) == 0x000378, "Member 'UWBP_InventoryWeaponDescription_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtAttack) == 0x000380, "Member 'UWBP_InventoryWeaponDescription_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtAttribute) == 0x000388, "Member 'UWBP_InventoryWeaponDescription_C::TxtAttribute' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtClassName) == 0x000390, "Member 'UWBP_InventoryWeaponDescription_C::TxtClassName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtCp) == 0x000398, "Member 'UWBP_InventoryWeaponDescription_C::TxtCp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtDesc) == 0x0003A0, "Member 'UWBP_InventoryWeaponDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtDEX) == 0x0003A8, "Member 'UWBP_InventoryWeaponDescription_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtExp) == 0x0003B0, "Member 'UWBP_InventoryWeaponDescription_C::TxtExp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtExpTotal) == 0x0003B8, "Member 'UWBP_InventoryWeaponDescription_C::TxtExpTotal' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtINT) == 0x0003C0, "Member 'UWBP_InventoryWeaponDescription_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtLv) == 0x0003C8, "Member 'UWBP_InventoryWeaponDescription_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtLvMax) == 0x0003D0, "Member 'UWBP_InventoryWeaponDescription_C::TxtLvMax' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtMND) == 0x0003D8, "Member 'UWBP_InventoryWeaponDescription_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtName) == 0x0003E0, "Member 'UWBP_InventoryWeaponDescription_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtSpecialName) == 0x0003E8, "Member 'UWBP_InventoryWeaponDescription_C::TxtSpecialName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtSpecialNum) == 0x0003F0, "Member 'UWBP_InventoryWeaponDescription_C::TxtSpecialNum' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtSTR) == 0x0003F8, "Member 'UWBP_InventoryWeaponDescription_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, TxtVIT) == 0x000400, "Member 'UWBP_InventoryWeaponDescription_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, VLineImage) == 0x000408, "Member 'UWBP_InventoryWeaponDescription_C::VLineImage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, WBP_StackB_M) == 0x000410, "Member 'UWBP_InventoryWeaponDescription_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, WeaponStickerDescColumn) == 0x000418, "Member 'UWBP_InventoryWeaponDescription_C::WeaponStickerDescColumn' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, OnButtonClicked) == 0x000420, "Member 'UWBP_InventoryWeaponDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, UniqueId) == 0x000430, "Member 'UWBP_InventoryWeaponDescription_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, SortedIndex) == 0x000440, "Member 'UWBP_InventoryWeaponDescription_C::SortedIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, bIsInventory) == 0x000444, "Member 'UWBP_InventoryWeaponDescription_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, bStorageMode) == 0x000445, "Member 'UWBP_InventoryWeaponDescription_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, InventoryItemData) == 0x000448, "Member 'UWBP_InventoryWeaponDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, AbilityPerkDList) == 0x0004A8, "Member 'UWBP_InventoryWeaponDescription_C::AbilityPerkDList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, WeaponItemData) == 0x0004B8, "Member 'UWBP_InventoryWeaponDescription_C::WeaponItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, OnWeaponStickerButtonPressed) == 0x000508, "Member 'UWBP_InventoryWeaponDescription_C::OnWeaponStickerButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, OnWeaponStickerInUseButtonPressed) == 0x000518, "Member 'UWBP_InventoryWeaponDescription_C::OnWeaponStickerInUseButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, bBagStorageViewMode) == 0x000528, "Member 'UWBP_InventoryWeaponDescription_C::bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryWeaponDescription_C, OwnData) == 0x000530, "Member 'UWBP_InventoryWeaponDescription_C::OwnData' has a wrong offset!");

}

