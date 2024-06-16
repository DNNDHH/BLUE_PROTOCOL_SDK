#pragma once

 

// Package: SelectMaterial

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SortTypeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectMaterial.SelectMaterial_C
// 0x02E8 (0x0560 - 0x0278)
class USelectMaterial_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UContainerGridView_C*                   BagGrid;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Selected;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_MaterialTicketUse;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_SelectAlert;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_895;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1405;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1791;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1906;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageVLineWhite01;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageVLineWhite01_1;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Lock;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDropInfo_C*                        ItemDropInfo;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContainerGridView_C*                   MaterialGrid;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        StorageFilter;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContainerGridView_C*                   StorageGrid;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPagerWidget_C*                   StoragePager;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             StorageSort;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnSelected;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_HasAmount;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Luno;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedNum;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedSupportNum;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NowSelectNum;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SupportItemName;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketHas;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketNeed;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketNum;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           TargetItem;                                        // 0x0390(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USBTemporallyStorage*                   MaterialStorage;                                   // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBMasterData                    StackBoostMasterData;                              // 0x04B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBStackBTicketData                    MaterialToken;                                     // 0x0500(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBStackBUseTicket                     SBStack_BUse_Ticket;                               // 0x051C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_3E8E[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Dialog;                                            // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 AlertText;                                         // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bDisplayAlert;                                     // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bItemMaterialLocked;                               // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWeaponMaterialLocked;                             // 0x0542(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8F[0x5];                                     // 0x0543(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   BeginSelectedMaterials;                            // 0x0548(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bBeginUseTicket;                                   // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnClose__DelegateSignature();
	void OnSelected__DelegateSignature(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket);
	void ExecuteUbergraph_SelectMaterial(int32 EntryPoint);
	void BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 PageCurrent);
	void OnCloseDialog(EDialogResult Result);
	void BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void Destruct();
	void RequestClose();
	void Construct();
	void OnEndBattleContains(EDialogResult Result);
	void BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void OnSectedLockedItems(EDialogResult Result);
	void BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void OnEndDialog(EDialogResult Result);
	void BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
	void BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize();
	void UpdateMaterialView();
	void HasMaterialStorage(const struct FOwnItemInfo& ItemInfo, bool* bOutExist);
	void RemoveMaterial(const struct FOwnItemInfo& OwnItemInfo);
	void TextInitialize();
	void InitializeTickets();
	void CacheTicketData();
	void UpdateTicketData();
	void TicketTextUpdate();
	void UpdateSelectButton();
	void Update();
	const TArray<struct FOwnItemInfo> GenerateUIDs();
	void CalclateRewardBoostSupportItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount);
	void CalculateRewardBoostMoney(int32 SupportItemId, int32 BasicNeedLuno, int32* CalculatedMoney);
	void CalculateLiquidMemoryMoneyDiscount(int32 BaseMoney, int32* CalclatedMoney);
	void SetFilterType(EFilter_Type FilterType);
	void RequestWalletShow();
	void IsMoneyAmount(bool* IsAmount);
	void UpdateText();
	class UWidget* Get_HB_SelectAlert_ToolTipWidget_0();
	void UpdateSelectAlert();

	void IsMaterialFull(bool* IsOk) const;
	bool IsNeedMoreMaterial() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectMaterial_C">();
	}
	static class USelectMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectMaterial_C>();
	}
};
static_assert(alignof(USelectMaterial_C) == 0x000008, "Wrong alignment on USelectMaterial_C");
static_assert(sizeof(USelectMaterial_C) == 0x000560, "Wrong size on USelectMaterial_C");
static_assert(offsetof(USelectMaterial_C, UberGraphFrame) == 0x000278, "Member 'USelectMaterial_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, OutAnim) == 0x000280, "Member 'USelectMaterial_C::OutAnim' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, BtnAnim) == 0x000288, "Member 'USelectMaterial_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, InAnim) == 0x000290, "Member 'USelectMaterial_C::InAnim' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, BagGrid) == 0x000298, "Member 'USelectMaterial_C::BagGrid' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Btn_Selected) == 0x0002A0, "Member 'USelectMaterial_C::Btn_Selected' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, CB_MaterialTicketUse) == 0x0002A8, "Member 'USelectMaterial_C::CB_MaterialTicketUse' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, CmnClose03) == 0x0002B0, "Member 'USelectMaterial_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, HB_SelectAlert) == 0x0002B8, "Member 'USelectMaterial_C::HB_SelectAlert' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_2) == 0x0002C0, "Member 'USelectMaterial_C::Image_2' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_415) == 0x0002C8, "Member 'USelectMaterial_C::Image_415' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_895) == 0x0002D0, "Member 'USelectMaterial_C::Image_895' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_1405) == 0x0002D8, "Member 'USelectMaterial_C::Image_1405' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_1791) == 0x0002E0, "Member 'USelectMaterial_C::Image_1791' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Image_1906) == 0x0002E8, "Member 'USelectMaterial_C::Image_1906' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, ImageVLineWhite01) == 0x0002F0, "Member 'USelectMaterial_C::ImageVLineWhite01' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, ImageVLineWhite01_1) == 0x0002F8, "Member 'USelectMaterial_C::ImageVLineWhite01_1' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Img_Lock) == 0x000300, "Member 'USelectMaterial_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, ItemDropInfo) == 0x000308, "Member 'USelectMaterial_C::ItemDropInfo' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, MaterialGrid) == 0x000310, "Member 'USelectMaterial_C::MaterialGrid' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, MyWalletWidget) == 0x000318, "Member 'USelectMaterial_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, StorageFilter) == 0x000320, "Member 'USelectMaterial_C::StorageFilter' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, StorageGrid) == 0x000328, "Member 'USelectMaterial_C::StorageGrid' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, StoragePager) == 0x000330, "Member 'USelectMaterial_C::StoragePager' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, StorageSort) == 0x000338, "Member 'USelectMaterial_C::StorageSort' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_BtnSelected) == 0x000340, "Member 'USelectMaterial_C::Txt_BtnSelected' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_HasAmount) == 0x000348, "Member 'USelectMaterial_C::Txt_HasAmount' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_Luno) == 0x000350, "Member 'USelectMaterial_C::Txt_Luno' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_NeedNum) == 0x000358, "Member 'USelectMaterial_C::Txt_NeedNum' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_NeedSupportNum) == 0x000360, "Member 'USelectMaterial_C::Txt_NeedSupportNum' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_NowSelectNum) == 0x000368, "Member 'USelectMaterial_C::Txt_NowSelectNum' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_SupportItemName) == 0x000370, "Member 'USelectMaterial_C::Txt_SupportItemName' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_TicketHas) == 0x000378, "Member 'USelectMaterial_C::Txt_TicketHas' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_TicketNeed) == 0x000380, "Member 'USelectMaterial_C::Txt_TicketNeed' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Txt_TicketNum) == 0x000388, "Member 'USelectMaterial_C::Txt_TicketNum' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, TargetItem) == 0x000390, "Member 'USelectMaterial_C::TargetItem' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, MaterialStorage) == 0x0004A8, "Member 'USelectMaterial_C::MaterialStorage' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, StackBoostMasterData) == 0x0004B0, "Member 'USelectMaterial_C::StackBoostMasterData' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, OnClose) == 0x0004E0, "Member 'USelectMaterial_C::OnClose' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, OnSelected) == 0x0004F0, "Member 'USelectMaterial_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, MaterialToken) == 0x000500, "Member 'USelectMaterial_C::MaterialToken' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, SBStack_BUse_Ticket) == 0x00051C, "Member 'USelectMaterial_C::SBStack_BUse_Ticket' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, Dialog) == 0x000528, "Member 'USelectMaterial_C::Dialog' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, AlertText) == 0x000530, "Member 'USelectMaterial_C::AlertText' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, bDisplayAlert) == 0x000540, "Member 'USelectMaterial_C::bDisplayAlert' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, bItemMaterialLocked) == 0x000541, "Member 'USelectMaterial_C::bItemMaterialLocked' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, bWeaponMaterialLocked) == 0x000542, "Member 'USelectMaterial_C::bWeaponMaterialLocked' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, BeginSelectedMaterials) == 0x000548, "Member 'USelectMaterial_C::BeginSelectedMaterials' has a wrong offset!");
static_assert(offsetof(USelectMaterial_C, bBeginUseTicket) == 0x000558, "Member 'USelectMaterial_C::bBeginUseTicket' has a wrong offset!");

}

