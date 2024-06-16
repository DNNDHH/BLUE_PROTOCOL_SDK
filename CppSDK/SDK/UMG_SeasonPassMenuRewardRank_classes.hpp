#pragma once

 

// Package: UMG_SeasonPassMenuRewardRank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C
// 0x0090 (0x0308 - 0x0278)
class UUMG_SeasonPassMenuRewardRank_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1Nomal;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1Pickup;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardItem_C*        FreeRewardIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NewIcon_Normal;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NewIcon_Pickup;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardItem_C*        SubscribedRewardIcon1;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardItem_C*        SubscribedRewardIcon2;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuRewardItem_C*        SubscribedRewardIcon3;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchPaid;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchPickup;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_Max;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_RankNormal;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_RankPickup;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickItemIcon;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDesignCheck;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bPaidPlanSubscribed;                               // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsPickupReward;                                   // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsAchieved;                                       // 0x02FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsShowMax;                                        // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsShowNewIcon;                                    // 0x02FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D18[0x2];                                     // 0x02FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardRankData*        Data;                                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void ExecuteUbergraph_UMG_SeasonPassMenuRewardRank(int32 EntryPoint);
	void DesignCheck(bool Param_bPaidPlanSubscribed);
	void UpdateDesignAndData();
	void OnUpdateData();
	void UpdateDesign();
	void BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void SetData(class USBSeasonPassMenuRewardRankData* Param_Data);
	void PreConstruct(bool IsDesignTime);
	void SetRewardData(class USBSeasonPassMenuRewardRankData* Param_Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuRewardRank_C">();
	}
	static class UUMG_SeasonPassMenuRewardRank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuRewardRank_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuRewardRank_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuRewardRank_C");
static_assert(sizeof(UUMG_SeasonPassMenuRewardRank_C) == 0x000308, "Wrong size on UUMG_SeasonPassMenuRewardRank_C");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuRewardRank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, Bg1Nomal) == 0x000280, "Member 'UUMG_SeasonPassMenuRewardRank_C::Bg1Nomal' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, Bg1Pickup) == 0x000288, "Member 'UUMG_SeasonPassMenuRewardRank_C::Bg1Pickup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, FreeRewardIcon) == 0x000290, "Member 'UUMG_SeasonPassMenuRewardRank_C::FreeRewardIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, Image_NewIcon_Normal) == 0x000298, "Member 'UUMG_SeasonPassMenuRewardRank_C::Image_NewIcon_Normal' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, Image_NewIcon_Pickup) == 0x0002A0, "Member 'UUMG_SeasonPassMenuRewardRank_C::Image_NewIcon_Pickup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, SubscribedRewardIcon1) == 0x0002A8, "Member 'UUMG_SeasonPassMenuRewardRank_C::SubscribedRewardIcon1' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, SubscribedRewardIcon2) == 0x0002B0, "Member 'UUMG_SeasonPassMenuRewardRank_C::SubscribedRewardIcon2' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, SubscribedRewardIcon3) == 0x0002B8, "Member 'UUMG_SeasonPassMenuRewardRank_C::SubscribedRewardIcon3' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, SwitchPaid) == 0x0002C0, "Member 'UUMG_SeasonPassMenuRewardRank_C::SwitchPaid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, SwitchPickup) == 0x0002C8, "Member 'UUMG_SeasonPassMenuRewardRank_C::SwitchPickup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, TextBlock_Max) == 0x0002D0, "Member 'UUMG_SeasonPassMenuRewardRank_C::TextBlock_Max' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, TextBlock_RankNormal) == 0x0002D8, "Member 'UUMG_SeasonPassMenuRewardRank_C::TextBlock_RankNormal' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, TextBlock_RankPickup) == 0x0002E0, "Member 'UUMG_SeasonPassMenuRewardRank_C::TextBlock_RankPickup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, OnClickItemIcon) == 0x0002E8, "Member 'UUMG_SeasonPassMenuRewardRank_C::OnClickItemIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bDesignCheck) == 0x0002F8, "Member 'UUMG_SeasonPassMenuRewardRank_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bPaidPlanSubscribed) == 0x0002F9, "Member 'UUMG_SeasonPassMenuRewardRank_C::bPaidPlanSubscribed' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bIsPickupReward) == 0x0002FA, "Member 'UUMG_SeasonPassMenuRewardRank_C::bIsPickupReward' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bIsAchieved) == 0x0002FB, "Member 'UUMG_SeasonPassMenuRewardRank_C::bIsAchieved' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bIsShowMax) == 0x0002FC, "Member 'UUMG_SeasonPassMenuRewardRank_C::bIsShowMax' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, bIsShowNewIcon) == 0x0002FD, "Member 'UUMG_SeasonPassMenuRewardRank_C::bIsShowNewIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRank_C, Data) == 0x000300, "Member 'UUMG_SeasonPassMenuRewardRank_C::Data' has a wrong offset!");

}

