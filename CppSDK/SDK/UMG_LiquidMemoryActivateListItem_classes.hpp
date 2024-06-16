#pragma once

 

// Package: UMG_LiquidMemoryActivateListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C
// 0x0160 (0x0410 - 0x02B0)
class UUMG_LiquidMemoryActivateListItem_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_ActivateInfo;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryBottleStatus_C*        BottleStatus;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1HIt;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_BottleStatus;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_70;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RemainingUseTime;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Activated;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ActivateLevel;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyTitle;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyType;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyValue;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyValueTitle;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_RemainingUseCount;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_RemainingUseTime;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ActivateInfo;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_63;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LiquidMemoryId;                                    // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_501A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnHovered;                                      // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBtnUnhovered;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBtnSelected;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAdd;                                             // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSub;                                             // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOveredAddNumMax;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPopupTokenList;                                  // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBLiquidMemoryMasterData              Liquid_Memory_MasterData;                          // 0x03D0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ActivateLevel;                                     // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueTypeId;                                       // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnOveredAddNumMax__DelegateSignature();
	void OnPopupTokenList__DelegateSignature(int32 Param_LiquidMemoryId, bool IsFullCharge);
	void ExecuteUbergraph_UMG_LiquidMemoryActivateListItem(int32 EntryPoint);
	void Construct();
	void SetLiquidMemoryInfo(int32 ID, int32 Level);
	void UpdateBottleStatus(int32 InLiquidMemoryId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryActivateListItem_C">();
	}
	static class UUMG_LiquidMemoryActivateListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryActivateListItem_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryActivateListItem_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryActivateListItem_C");
static_assert(sizeof(UUMG_LiquidMemoryActivateListItem_C) == 0x000410, "Wrong size on UUMG_LiquidMemoryActivateListItem_C");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_LiquidMemoryActivateListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, BG) == 0x0002B8, "Member 'UUMG_LiquidMemoryActivateListItem_C::BG' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, BG_1) == 0x0002C0, "Member 'UUMG_LiquidMemoryActivateListItem_C::BG_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Bg_ActivateInfo) == 0x0002C8, "Member 'UUMG_LiquidMemoryActivateListItem_C::Bg_ActivateInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, BottleStatus) == 0x0002D0, "Member 'UUMG_LiquidMemoryActivateListItem_C::BottleStatus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Btn1HIt) == 0x0002D8, "Member 'UUMG_LiquidMemoryActivateListItem_C::Btn1HIt' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Btn_BottleStatus) == 0x0002E0, "Member 'UUMG_LiquidMemoryActivateListItem_C::Btn_BottleStatus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, CanvasPanel_70) == 0x0002E8, "Member 'UUMG_LiquidMemoryActivateListItem_C::CanvasPanel_70' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, HorizontalBox_RemainingUseTime) == 0x0002F0, "Member 'UUMG_LiquidMemoryActivateListItem_C::HorizontalBox_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, LineImage) == 0x0002F8, "Member 'UUMG_LiquidMemoryActivateListItem_C::LineImage' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_Activated) == 0x000300, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_Activated' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_ActivateLevel) == 0x000308, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_ActivateLevel' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_EfficacyTitle) == 0x000310, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_EfficacyTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_EfficacyType) == 0x000318, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_EfficacyType' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_EfficacyValue) == 0x000320, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_EfficacyValue' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_EfficacyValueTitle) == 0x000328, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_EfficacyValueTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_RemainingUseCount) == 0x000330, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_RemainingUseCount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Txt_RemainingUseTime) == 0x000338, "Member 'UUMG_LiquidMemoryActivateListItem_C::Txt_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, VerticalBox_ActivateInfo) == 0x000340, "Member 'UUMG_LiquidMemoryActivateListItem_C::VerticalBox_ActivateInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, WidgetSwitcher_63) == 0x000348, "Member 'UUMG_LiquidMemoryActivateListItem_C::WidgetSwitcher_63' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, LiquidMemoryId) == 0x000350, "Member 'UUMG_LiquidMemoryActivateListItem_C::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnBtnHovered) == 0x000358, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnBtnHovered' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnBtnUnhovered) == 0x000368, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnBtnUnhovered' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnBtnSelected) == 0x000378, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnBtnSelected' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnAdd) == 0x000388, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnAdd' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnSub) == 0x000398, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnSub' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, CachedToolTipWidget) == 0x0003A8, "Member 'UUMG_LiquidMemoryActivateListItem_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnOveredAddNumMax) == 0x0003B0, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnOveredAddNumMax' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, OnPopupTokenList) == 0x0003C0, "Member 'UUMG_LiquidMemoryActivateListItem_C::OnPopupTokenList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, Liquid_Memory_MasterData) == 0x0003D0, "Member 'UUMG_LiquidMemoryActivateListItem_C::Liquid_Memory_MasterData' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, ActivateLevel) == 0x000408, "Member 'UUMG_LiquidMemoryActivateListItem_C::ActivateLevel' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryActivateListItem_C, ValueTypeId) == 0x00040C, "Member 'UUMG_LiquidMemoryActivateListItem_C::ValueTypeId' has a wrong offset!");

}

