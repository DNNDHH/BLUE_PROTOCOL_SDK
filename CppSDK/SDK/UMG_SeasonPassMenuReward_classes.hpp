#pragma once

 

// Package: UMG_SeasonPassMenuReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C
// 0x00A8 (0x0320 - 0x0278)
class UUMG_SeasonPassMenuReward_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_SeasonPassMenuBtn1_C*              BtnUpgrade;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Upgrade;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardRank_C*        PickupReward;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Content;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwichIconPaid;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBgPaid;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchPlan;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_PaidPlanUnsubscribed;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassInfoIcon_C*              UMG_SeasonPassInfoIcon;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           UpgradeDiscount;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bDesignCheck;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D28[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PaidPlanIndex;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPaidPlanSubscribed;                               // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsValidDiscount;                                  // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsValidSeasonProgress;                            // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D29[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardData*            Data;                                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_SeasonPassMenuRewardRankWrap_C*> RewardRankItemList;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClickRewardItemIcon;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentPickupItemIndex;                            // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PickupUnit;                                        // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickUpgrade;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void OnClickUpgrade__DelegateSignature();
	void ExecuteUbergraph_UMG_SeasonPassMenuReward(int32 EntryPoint);
	void BndEvt__UMG_SeasonPassMenuReward_BtnUpgrade_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void Destruct();
	void OnUpdateSeasonPassRank(class UObject* Sender, class UObject* Param);
	void PreConstruct(bool IsDesignTime);
	void UpdateDesignAndData();
	void UpdateDesign();
	void OnUpdateData();
	void ScrollToRank(int32 Rank, bool AnimateScroll);
	void Construct();
	void BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void OnClickRankRewardItemIcon(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void SetData(class USBSeasonPassMenuRewardData* Param_Data);
	void ClearRewardRankItem();
	void CreateRewardRankItem(class USBSeasonPassMenuRewardData* Param_Data, int32 Rank);
	void ChangePickupRewardIfNeeded(float ScrollOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuReward_C">();
	}
	static class UUMG_SeasonPassMenuReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuReward_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuReward_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuReward_C");
static_assert(sizeof(UUMG_SeasonPassMenuReward_C) == 0x000320, "Wrong size on UUMG_SeasonPassMenuReward_C");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, BtnUpgrade) == 0x000280, "Member 'UUMG_SeasonPassMenuReward_C::BtnUpgrade' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, CanvasPanel_Upgrade) == 0x000288, "Member 'UUMG_SeasonPassMenuReward_C::CanvasPanel_Upgrade' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, PickupReward) == 0x000290, "Member 'UUMG_SeasonPassMenuReward_C::PickupReward' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, ScrollBox_Content) == 0x000298, "Member 'UUMG_SeasonPassMenuReward_C::ScrollBox_Content' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, SwichIconPaid) == 0x0002A0, "Member 'UUMG_SeasonPassMenuReward_C::SwichIconPaid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, SwitchBgPaid) == 0x0002A8, "Member 'UUMG_SeasonPassMenuReward_C::SwitchBgPaid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, SwitchPlan) == 0x0002B0, "Member 'UUMG_SeasonPassMenuReward_C::SwitchPlan' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, TextBlock_PaidPlanUnsubscribed) == 0x0002B8, "Member 'UUMG_SeasonPassMenuReward_C::TextBlock_PaidPlanUnsubscribed' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, UMG_SeasonPassInfoIcon) == 0x0002C0, "Member 'UUMG_SeasonPassMenuReward_C::UMG_SeasonPassInfoIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, UpgradeDiscount) == 0x0002C8, "Member 'UUMG_SeasonPassMenuReward_C::UpgradeDiscount' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, bDesignCheck) == 0x0002D0, "Member 'UUMG_SeasonPassMenuReward_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, PaidPlanIndex) == 0x0002D4, "Member 'UUMG_SeasonPassMenuReward_C::PaidPlanIndex' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, bPaidPlanSubscribed) == 0x0002D8, "Member 'UUMG_SeasonPassMenuReward_C::bPaidPlanSubscribed' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, bIsValidDiscount) == 0x0002D9, "Member 'UUMG_SeasonPassMenuReward_C::bIsValidDiscount' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, bIsValidSeasonProgress) == 0x0002DA, "Member 'UUMG_SeasonPassMenuReward_C::bIsValidSeasonProgress' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, Data) == 0x0002E0, "Member 'UUMG_SeasonPassMenuReward_C::Data' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, RewardRankItemList) == 0x0002E8, "Member 'UUMG_SeasonPassMenuReward_C::RewardRankItemList' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, OnClickRewardItemIcon) == 0x0002F8, "Member 'UUMG_SeasonPassMenuReward_C::OnClickRewardItemIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, CurrentPickupItemIndex) == 0x000308, "Member 'UUMG_SeasonPassMenuReward_C::CurrentPickupItemIndex' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, PickupUnit) == 0x00030C, "Member 'UUMG_SeasonPassMenuReward_C::PickupUnit' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuReward_C, OnClickUpgrade) == 0x000310, "Member 'UUMG_SeasonPassMenuReward_C::OnClickUpgrade' has a wrong offset!");

}

