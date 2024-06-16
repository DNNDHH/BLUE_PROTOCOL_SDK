#pragma once

 

// Package: UMG_SeasonPassMenuGeneral

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuGeneral.UMG_SeasonPassMenuGeneral_C
// 0x0170 (0x03E8 - 0x0278)
class UUMG_SeasonPassMenuGeneral_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RankupButtonGuide;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuBtn1_C*              BtnBuyRankUp;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuBtn1_C*              BtnPointShop;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnRankUp;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            BtnSeasonPassQuest;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSeasonPassRewardAll;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_SeasonPeriod;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RankupButtonGuide;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_SeasonPeriodValue;             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_SeasonReceivePeriodValue;      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBTextButton_ToOfficialSite;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_NeedPointValue;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_RankPointValue;                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_RankPurchaseDescription;                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_RankUpDescription;                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_RankUpNeedPoint;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_RankValue;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SeasonName;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_SeasonQuest;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ToOfficialSitetext;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassInfoIcon_C*              UMG_SeasonPassInfoIcon;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassInfoIcon_C*              UMG_SeasonPassInfoIcon_1;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassInfoIcon_C*              UMG_SeasonPassInfoIcon_2;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SeasonPassTiming;                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickUpgrade;                                    // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDesignCheck;                                      // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C3[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PassName;                                          // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Point;                                             // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NeedPoint;                                         // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AutoRankupRank;                                    // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShopOpened;                                     // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsMaxRank;                                        // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCanRankUp;                                        // 0x037A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsPaidPlan;                                       // 0x037B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         PaidPlanIndex;                                     // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickRankUp;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickPointShop;                                  // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickBuyRankUp;                                  // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBPlayerSeasonPassComponent*           Comp;                                              // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsProgressValid;                                  // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValidDiscount;                                   // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C4[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickQuest;                                      // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsValidTiming;                                    // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C5[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SeasonPassTiming;                                  // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickSeasonPassRewardAll;                        // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickUpgrade__DelegateSignature();
	void OnClickRankUp__DelegateSignature();
	void OnClickPointShop__DelegateSignature();
	void OnClickBuyRankUp__DelegateSignature();
	void OnClickQuest__DelegateSignature();
	void OnClickSeasonPassRewardAll__DelegateSignature();
	void ExecuteUbergraph_UMG_SeasonPassMenuGeneral(int32 EntryPoint);
	void Construct();
	void UpdateDesignAndData();
	void OnUpdateData();
	void UpdateDesign();
	void SetData();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UMG_SeasonPassMenuGeneral_SBTextButton_C_72_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuGeneral_BtnCollectivelyReceives_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuGeneral_BtnSeasonPassQuest_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnBuyRankUp_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuBtn1_146_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void IsPointShop(bool* OutValue);
	void IsBuyRankUp(bool* OutValue);
	void UpdateRewardAllButtonState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuGeneral_C">();
	}
	static class UUMG_SeasonPassMenuGeneral_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuGeneral_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuGeneral_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuGeneral_C");
static_assert(sizeof(UUMG_SeasonPassMenuGeneral_C) == 0x0003E8, "Wrong size on UUMG_SeasonPassMenuGeneral_C");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuGeneral_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, RankupButtonGuide) == 0x000280, "Member 'UUMG_SeasonPassMenuGeneral_C::RankupButtonGuide' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, BtnBuyRankUp) == 0x000288, "Member 'UUMG_SeasonPassMenuGeneral_C::BtnBuyRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, BtnPointShop) == 0x000290, "Member 'UUMG_SeasonPassMenuGeneral_C::BtnPointShop' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, BtnRankUp) == 0x000298, "Member 'UUMG_SeasonPassMenuGeneral_C::BtnRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, BtnSeasonPassQuest) == 0x0002A0, "Member 'UUMG_SeasonPassMenuGeneral_C::BtnSeasonPassQuest' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, BtnSeasonPassRewardAll) == 0x0002A8, "Member 'UUMG_SeasonPassMenuGeneral_C::BtnSeasonPassRewardAll' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, CanvasPanel_SeasonPeriod) == 0x0002B0, "Member 'UUMG_SeasonPassMenuGeneral_C::CanvasPanel_SeasonPeriod' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, Image_RankupButtonGuide) == 0x0002B8, "Member 'UUMG_SeasonPassMenuGeneral_C::Image_RankupButtonGuide' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, SBDateTimeTextBlock_SeasonPeriodValue) == 0x0002C0, "Member 'UUMG_SeasonPassMenuGeneral_C::SBDateTimeTextBlock_SeasonPeriodValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, SBDateTimeTextBlock_SeasonReceivePeriodValue) == 0x0002C8, "Member 'UUMG_SeasonPassMenuGeneral_C::SBDateTimeTextBlock_SeasonReceivePeriodValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, SBTextButton_ToOfficialSite) == 0x0002D0, "Member 'UUMG_SeasonPassMenuGeneral_C::SBTextButton_ToOfficialSite' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_NeedPointValue) == 0x0002D8, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_NeedPointValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_RankPointValue) == 0x0002E0, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_RankPointValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_RankPurchaseDescription) == 0x0002E8, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_RankPurchaseDescription' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_RankUpDescription) == 0x0002F0, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_RankUpDescription' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_RankUpNeedPoint) == 0x0002F8, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_RankUpNeedPoint' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_RankValue) == 0x000300, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_RankValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_SeasonName) == 0x000308, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_SeasonName' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, TextBlock_SeasonQuest) == 0x000310, "Member 'UUMG_SeasonPassMenuGeneral_C::TextBlock_SeasonQuest' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, ToOfficialSitetext) == 0x000318, "Member 'UUMG_SeasonPassMenuGeneral_C::ToOfficialSitetext' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, UMG_SeasonPassInfoIcon) == 0x000320, "Member 'UUMG_SeasonPassMenuGeneral_C::UMG_SeasonPassInfoIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, UMG_SeasonPassInfoIcon_1) == 0x000328, "Member 'UUMG_SeasonPassMenuGeneral_C::UMG_SeasonPassInfoIcon_1' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, UMG_SeasonPassInfoIcon_2) == 0x000330, "Member 'UUMG_SeasonPassMenuGeneral_C::UMG_SeasonPassInfoIcon_2' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, WidgetSwitcher_SeasonPassTiming) == 0x000338, "Member 'UUMG_SeasonPassMenuGeneral_C::WidgetSwitcher_SeasonPassTiming' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickUpgrade) == 0x000340, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickUpgrade' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bDesignCheck) == 0x000350, "Member 'UUMG_SeasonPassMenuGeneral_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, PassName) == 0x000358, "Member 'UUMG_SeasonPassMenuGeneral_C::PassName' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, Rank) == 0x000368, "Member 'UUMG_SeasonPassMenuGeneral_C::Rank' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, Point) == 0x00036C, "Member 'UUMG_SeasonPassMenuGeneral_C::Point' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, NeedPoint) == 0x000370, "Member 'UUMG_SeasonPassMenuGeneral_C::NeedPoint' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, AutoRankupRank) == 0x000374, "Member 'UUMG_SeasonPassMenuGeneral_C::AutoRankupRank' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bIsShopOpened) == 0x000378, "Member 'UUMG_SeasonPassMenuGeneral_C::bIsShopOpened' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bIsMaxRank) == 0x000379, "Member 'UUMG_SeasonPassMenuGeneral_C::bIsMaxRank' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bCanRankUp) == 0x00037A, "Member 'UUMG_SeasonPassMenuGeneral_C::bCanRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bIsPaidPlan) == 0x00037B, "Member 'UUMG_SeasonPassMenuGeneral_C::bIsPaidPlan' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, PaidPlanIndex) == 0x00037C, "Member 'UUMG_SeasonPassMenuGeneral_C::PaidPlanIndex' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickRankUp) == 0x000380, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickPointShop) == 0x000390, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickPointShop' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickBuyRankUp) == 0x0003A0, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickBuyRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, Comp) == 0x0003B0, "Member 'UUMG_SeasonPassMenuGeneral_C::Comp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bIsProgressValid) == 0x0003B8, "Member 'UUMG_SeasonPassMenuGeneral_C::bIsProgressValid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, IsValidDiscount) == 0x0003B9, "Member 'UUMG_SeasonPassMenuGeneral_C::IsValidDiscount' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickQuest) == 0x0003C0, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickQuest' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, bIsValidTiming) == 0x0003D0, "Member 'UUMG_SeasonPassMenuGeneral_C::bIsValidTiming' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, SeasonPassTiming) == 0x0003D4, "Member 'UUMG_SeasonPassMenuGeneral_C::SeasonPassTiming' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuGeneral_C, OnClickSeasonPassRewardAll) == 0x0003D8, "Member 'UUMG_SeasonPassMenuGeneral_C::OnClickSeasonPassRewardAll' has a wrong offset!");

}

