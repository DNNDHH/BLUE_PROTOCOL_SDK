#pragma once

 

// Package: UMG_SeasonPassMenuMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C
// 0x00C0 (0x0338 - 0x0278)
class UUMG_SeasonPassMenuMain_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn01_C*                            BtnSeasonPassQuest;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_SeasonPeriod;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_SeasonPeriodValue;             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_SeasonReceivePeriodValue;      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SeasonName;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuReward_C*            UMG_SeasonPassMenuReward;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuGeneral_C*           WBP_SeasonPassMenuGeneral;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickUpgrade;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRewardItemIcon;                             // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRankUp;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickPointShop;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickBuyRankUp;                                  // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickQuest;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBPlayerSeasonPassComponent*           Comp;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSeasonPassProgressValid;                         // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA6[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickSeasonPassRewardAll;                        // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickUpgrade__DelegateSignature();
	void OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void OnClickRankUp__DelegateSignature();
	void OnClickPointShop__DelegateSignature();
	void OnClickBuyRankUp__DelegateSignature();
	void OnClickQuest__DelegateSignature();
	void OnClickSeasonPassRewardAll__DelegateSignature();
	void ExecuteUbergraph_UMG_SeasonPassMenuMain(int32 EntryPoint);
	void BndEvt__UMG_SeasonPassMenuMain_WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_9_OnClickSeasonPassRewardAll__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_7_OnClickUpgrade__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuMain_WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_5_OnClickQuest__DelegateSignature();
	void BndEvt__BtnSeasonPassQuest_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void OnUpdateData();
	void UpdateDesignAndData();
	void UpdateDesign();
	void BndEvt__WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature();
	void BndEvt__WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature();
	void BndEvt__WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_2_OnClickRankUp__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenuReward_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void BndEvt__WBP_SeasonPassMenuGeneral_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature();
	void SetData(class USBSeasonPassMenuRewardData* RewardData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuMain_C">();
	}
	static class UUMG_SeasonPassMenuMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuMain_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuMain_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuMain_C");
static_assert(sizeof(UUMG_SeasonPassMenuMain_C) == 0x000338, "Wrong size on UUMG_SeasonPassMenuMain_C");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, BtnSeasonPassQuest) == 0x000280, "Member 'UUMG_SeasonPassMenuMain_C::BtnSeasonPassQuest' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, CanvasPanel_SeasonPeriod) == 0x000288, "Member 'UUMG_SeasonPassMenuMain_C::CanvasPanel_SeasonPeriod' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, SBDateTimeTextBlock_SeasonPeriodValue) == 0x000290, "Member 'UUMG_SeasonPassMenuMain_C::SBDateTimeTextBlock_SeasonPeriodValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, SBDateTimeTextBlock_SeasonReceivePeriodValue) == 0x000298, "Member 'UUMG_SeasonPassMenuMain_C::SBDateTimeTextBlock_SeasonReceivePeriodValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, TextBlock_SeasonName) == 0x0002A0, "Member 'UUMG_SeasonPassMenuMain_C::TextBlock_SeasonName' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, UMG_SeasonPassMenuReward) == 0x0002A8, "Member 'UUMG_SeasonPassMenuMain_C::UMG_SeasonPassMenuReward' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, WBP_SeasonPassMenuGeneral) == 0x0002B0, "Member 'UUMG_SeasonPassMenuMain_C::WBP_SeasonPassMenuGeneral' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickUpgrade) == 0x0002B8, "Member 'UUMG_SeasonPassMenuMain_C::OnClickUpgrade' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickRewardItemIcon) == 0x0002C8, "Member 'UUMG_SeasonPassMenuMain_C::OnClickRewardItemIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickRankUp) == 0x0002D8, "Member 'UUMG_SeasonPassMenuMain_C::OnClickRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickPointShop) == 0x0002E8, "Member 'UUMG_SeasonPassMenuMain_C::OnClickPointShop' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickBuyRankUp) == 0x0002F8, "Member 'UUMG_SeasonPassMenuMain_C::OnClickBuyRankUp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickQuest) == 0x000308, "Member 'UUMG_SeasonPassMenuMain_C::OnClickQuest' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, Comp) == 0x000318, "Member 'UUMG_SeasonPassMenuMain_C::Comp' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, IsSeasonPassProgressValid) == 0x000320, "Member 'UUMG_SeasonPassMenuMain_C::IsSeasonPassProgressValid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuMain_C, OnClickSeasonPassRewardAll) == 0x000328, "Member 'UUMG_SeasonPassMenuMain_C::OnClickSeasonPassRewardAll' has a wrong offset!");

}

