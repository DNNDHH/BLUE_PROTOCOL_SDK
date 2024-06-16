#pragma once

 

// Package: UMG_LiquidMemoryProductListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C
// 0x0210 (0x04C0 - 0x02B0)
class UUMG_LiquidMemoryProductListItem_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_ActivateInfo;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_PurchaseCountGrp;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryBottleStatus_C*        BottleStatus;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1HIt;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_BottleStatus;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Ticket;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_70;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RemainingUseTime;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxEfficacyNum;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LblCost;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Nodata;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PurchaseCountGrp;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PurchaseCountSwitcher;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Minus;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Plus;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Activated;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ActivateLevel;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyNum;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyNumTitle;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyTitle;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyType;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyValue;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyValueTitle;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_RemainingUseCount;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_RemainingUseTime;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCost;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPurchaseCount;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ActivateInfo;                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_63;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LiquidMemoryId;                                    // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cost;                                              // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseBottleNum;                                      // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalCost;                                         // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EFE[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnHovered;                                      // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBtnUnhovered;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          RepeatMinus;                                       // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatPlus;                                        // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EFF[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnSelected;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAdd;                                             // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSub;                                             // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         LimitNum;                                          // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDiscounted;                                      // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F00[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DiscountRate;                                      // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F01[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOveredAddNumMax;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsUsableBottleNumNone;                             // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F02[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPopupTokenList;                                  // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsInRange;                                         // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUseble;                                          // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F03[0x6];                                     // 0x047A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              Liquid_Memory_MasterData;                          // 0x0480(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ValueTypeId;                                       // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnOveredAddNumMax__DelegateSignature();
	void OnPopupTokenList__DelegateSignature(int32 Param_LiquidMemoryId, bool IsFullCharge);
	void ExecuteUbergraph_UMG_LiquidMemoryProductListItem(int32 EntryPoint);
	void BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature();
	void NumberPlus();
	void NumberMinus();
	void StartRepeatPlus();
	void StartRepeatMinus();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature();
	void SetPurchaseCountValue(int32 Count);
	void Init(const struct FSBLiquidMemoryMasterData& InLiquidMemoryMaster, int32 InUseBottleNum, bool InIsCostDiscount, float InCostDiscountRate, bool IsUsable);
	void Construct();
	void GetTotalCost(int32* OutPurchasePrice);
	void SetUsingBottleNum(int32 InBottleNum, bool Force);
	void GetUsingBottleNum(int32* OutPurchaseNum);
	void GetLiquidMemoryId(int32* OutProductItemIndex);
	void UpdateUsingBottleNumberInput(int32 InUsingBottleNum);
	void SetBtnSelected(bool bSelected);
	void GetRemainUsableBottleNum(int32* Remain);
	void ButtonUpdate();
	void SetLimit(int32 Param_LimitNum);
	void SetCostText(int32 InCost);
	void GetCurrUseBottleNum(int32* OutBottleNum);
	void GetCost(int32* OutCost);
	void SetTotalCost(int32 InTotalCost);
	void SetPurchaseEnable(bool InIsEnable);
	void SetLiquidMemoryActivated(bool bInIsActivated);
	void UpdateBottleStatus(int32 InLiquidMemoryId);
	void SetRemainingUseCount(int32 InCount);
	void CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** Widget);
	void SetTicketEnable(TArray<struct FSBLiquidMemoryAccumulateTokenInfo>& AccumlulateItemMaster, TArray<struct FSBTokenState>& InTokenList, bool IsActivate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryProductListItem_C">();
	}
	static class UUMG_LiquidMemoryProductListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryProductListItem_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryProductListItem_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryProductListItem_C");
static_assert(sizeof(UUMG_LiquidMemoryProductListItem_C) == 0x0004C0, "Wrong size on UUMG_LiquidMemoryProductListItem_C");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_LiquidMemoryProductListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, BG) == 0x0002B8, "Member 'UUMG_LiquidMemoryProductListItem_C::BG' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, BG_1) == 0x0002C0, "Member 'UUMG_LiquidMemoryProductListItem_C::BG_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Bg_ActivateInfo) == 0x0002C8, "Member 'UUMG_LiquidMemoryProductListItem_C::Bg_ActivateInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Bg_PurchaseCountGrp) == 0x0002D0, "Member 'UUMG_LiquidMemoryProductListItem_C::Bg_PurchaseCountGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, BottleStatus) == 0x0002D8, "Member 'UUMG_LiquidMemoryProductListItem_C::BottleStatus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Btn1HIt) == 0x0002E0, "Member 'UUMG_LiquidMemoryProductListItem_C::Btn1HIt' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Btn_BottleStatus) == 0x0002E8, "Member 'UUMG_LiquidMemoryProductListItem_C::Btn_BottleStatus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Btn_Ticket) == 0x0002F0, "Member 'UUMG_LiquidMemoryProductListItem_C::Btn_Ticket' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, CanvasPanel_70) == 0x0002F8, "Member 'UUMG_LiquidMemoryProductListItem_C::CanvasPanel_70' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, HorizontalBox_RemainingUseTime) == 0x000300, "Member 'UUMG_LiquidMemoryProductListItem_C::HorizontalBox_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, HorizontalBoxEfficacyNum) == 0x000308, "Member 'UUMG_LiquidMemoryProductListItem_C::HorizontalBoxEfficacyNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, LblCost) == 0x000310, "Member 'UUMG_LiquidMemoryProductListItem_C::LblCost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Line1) == 0x000318, "Member 'UUMG_LiquidMemoryProductListItem_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Line2) == 0x000320, "Member 'UUMG_LiquidMemoryProductListItem_C::Line2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, LineImage) == 0x000328, "Member 'UUMG_LiquidMemoryProductListItem_C::LineImage' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Nodata) == 0x000330, "Member 'UUMG_LiquidMemoryProductListItem_C::Nodata' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, PurchaseCountGrp) == 0x000338, "Member 'UUMG_LiquidMemoryProductListItem_C::PurchaseCountGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, PurchaseCountSwitcher) == 0x000340, "Member 'UUMG_LiquidMemoryProductListItem_C::PurchaseCountSwitcher' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, SBButton_Minus) == 0x000348, "Member 'UUMG_LiquidMemoryProductListItem_C::SBButton_Minus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, SBButton_Plus) == 0x000350, "Member 'UUMG_LiquidMemoryProductListItem_C::SBButton_Plus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_Activated) == 0x000358, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_Activated' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_ActivateLevel) == 0x000360, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_ActivateLevel' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyNum) == 0x000368, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyNumTitle) == 0x000370, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyNumTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyTitle) == 0x000378, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyType) == 0x000380, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyType' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyValue) == 0x000388, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyValue' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_EfficacyValueTitle) == 0x000390, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_EfficacyValueTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_RemainingUseCount) == 0x000398, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_RemainingUseCount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Txt_RemainingUseTime) == 0x0003A0, "Member 'UUMG_LiquidMemoryProductListItem_C::Txt_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, TxtCost) == 0x0003A8, "Member 'UUMG_LiquidMemoryProductListItem_C::TxtCost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, TxtPurchaseCount) == 0x0003B0, "Member 'UUMG_LiquidMemoryProductListItem_C::TxtPurchaseCount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, VerticalBox_ActivateInfo) == 0x0003B8, "Member 'UUMG_LiquidMemoryProductListItem_C::VerticalBox_ActivateInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, WidgetSwitcher_63) == 0x0003C0, "Member 'UUMG_LiquidMemoryProductListItem_C::WidgetSwitcher_63' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, LiquidMemoryId) == 0x0003C8, "Member 'UUMG_LiquidMemoryProductListItem_C::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Cost) == 0x0003CC, "Member 'UUMG_LiquidMemoryProductListItem_C::Cost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, UseBottleNum) == 0x0003D0, "Member 'UUMG_LiquidMemoryProductListItem_C::UseBottleNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, TotalCost) == 0x0003D4, "Member 'UUMG_LiquidMemoryProductListItem_C::TotalCost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, IsSelected) == 0x0003D8, "Member 'UUMG_LiquidMemoryProductListItem_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnBtnHovered) == 0x0003E0, "Member 'UUMG_LiquidMemoryProductListItem_C::OnBtnHovered' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnBtnUnhovered) == 0x0003F0, "Member 'UUMG_LiquidMemoryProductListItem_C::OnBtnUnhovered' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, RepeatMinus) == 0x000400, "Member 'UUMG_LiquidMemoryProductListItem_C::RepeatMinus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, RepeatPlus) == 0x000401, "Member 'UUMG_LiquidMemoryProductListItem_C::RepeatPlus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnBtnSelected) == 0x000408, "Member 'UUMG_LiquidMemoryProductListItem_C::OnBtnSelected' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnAdd) == 0x000418, "Member 'UUMG_LiquidMemoryProductListItem_C::OnAdd' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnSub) == 0x000428, "Member 'UUMG_LiquidMemoryProductListItem_C::OnSub' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, LimitNum) == 0x000438, "Member 'UUMG_LiquidMemoryProductListItem_C::LimitNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, IsDiscounted) == 0x00043C, "Member 'UUMG_LiquidMemoryProductListItem_C::IsDiscounted' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, DiscountRate) == 0x000440, "Member 'UUMG_LiquidMemoryProductListItem_C::DiscountRate' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, CachedToolTipWidget) == 0x000448, "Member 'UUMG_LiquidMemoryProductListItem_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnOveredAddNumMax) == 0x000450, "Member 'UUMG_LiquidMemoryProductListItem_C::OnOveredAddNumMax' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, IsUsableBottleNumNone) == 0x000460, "Member 'UUMG_LiquidMemoryProductListItem_C::IsUsableBottleNumNone' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, OnPopupTokenList) == 0x000468, "Member 'UUMG_LiquidMemoryProductListItem_C::OnPopupTokenList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, IsInRange) == 0x000478, "Member 'UUMG_LiquidMemoryProductListItem_C::IsInRange' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, IsUseble) == 0x000479, "Member 'UUMG_LiquidMemoryProductListItem_C::IsUseble' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, Liquid_Memory_MasterData) == 0x000480, "Member 'UUMG_LiquidMemoryProductListItem_C::Liquid_Memory_MasterData' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryProductListItem_C, ValueTypeId) == 0x0004B8, "Member 'UUMG_LiquidMemoryProductListItem_C::ValueTypeId' has a wrong offset!");

}

