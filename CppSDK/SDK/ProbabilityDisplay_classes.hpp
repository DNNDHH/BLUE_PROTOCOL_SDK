#pragma once

 

// Package: ProbabilityDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay.ProbabilityDisplay_C
// 0x0268 (0x04E0 - 0x0278)
class UProbabilityDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BgBlur;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_92;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonList;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionTextBottom;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionTextTop;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemListVerticalBox;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCount_C*                            LapCount;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_ItemCraftTopItem_C* ProbabilityDisplay_ItemCraftTopItem;               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_ItemCraftTopItem_C* ProbabilityDisplay_ItemCraftTopItem_116;           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_WeaponFusionListItem_C* ProbabilityDisplay_WeaponFusionListItem;           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_WeaponTuningTopItem_C* ProbabilityDisplay_WeaponTuningTopItem;            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplayButton_C*            ProbabilityDisplayButton_1;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplayButton_C*            ProbabilityDisplayButton_2;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepList_Gasha_C*                      StepList_Gasha;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubtitleText;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                ListItemPadding;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USBTextTableAsset*                      TextTable;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftMasterData                       CraftMaster;                                       // 0x0328(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBTextTableAsset*                      AbilityTexttable;                                  // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                ButtonListPadding;                                 // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClosing;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         GashaBonusNum;                                     // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Anim;                                              // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStepUpGasha;                                      // 0x03DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9496[0x2];                                     // 0x03DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ButtonListSelectId;                                // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9497[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaBonusListInfo                  GashaBonusListInfo;                                // 0x03E8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBGashaBonusListInfo                  GashaCurrencyBonusListInfo;                        // 0x0430(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ItemId;                                            // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PerkPickId;                                        // 0x047C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9498[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SlotRateArray;                                     // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMasterImaginePerkTable                ImaginePerk;                                       // 0x0498(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClosing__DelegateSignature();
	void ExecuteUbergraph_ProbabilityDisplay(int32 EntryPoint);
	void SetupImagineCraftByLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward);
	void SetupImagineCraft_Internal();
	void OnCancelKey();
	void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0();
	void BndEvt__ProbabilityDisplay_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void SetupGashaBonus(const struct FSBGashaInfo& Gasha_Info, bool IsReload, int32 Step);
	void SetupWeaponTuning(const struct FSBWeaponItemData& SBWeaponItemData);
	void SetupWeaonFusion(const struct FSBMasterFusionItem& MasterFusionItem);
	void SetupImagineCraft(const struct FSBMasterImagine& MasterImagine);
	void OnClose();
	void BndEvt__ProbabilityDisplay_Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetupItemCraft(const struct FCraftMasterData& Param_CraftMaster);
	void Construct();
	void BndEvt__ProbabilityDisplay_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
	void SetUp_Gasha(int32 Step);
	void ChangeGashaItemList();
	void UpdateSelectButton(int32 ButtonId);
	void OnClick_Common();
	void OnClick_RoseOrb();
	void SetupGasha_ButtonList();
	void SetupWeaponCraft(const struct FCraftMasterData& Param_CraftMaster);
	void SetupWeaponCraft_Internal();
	void SetupWeaponCraftByLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward);
	void SetupWeaponCraftSlot();
	void SetupWeaponCraftPerk();
	void GetWeaponPerkRates(TArray<struct FSBWeaponKillerPerkPickMasterData>& List, TArray<float>* Rate);
	void SetFang_expedition(const struct FSBFang_expeditionRewardData& Fang_expeditionRewardData, const class FString& AreaName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_C">();
	}
	static class UProbabilityDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_C");
static_assert(sizeof(UProbabilityDisplay_C) == 0x0004E0, "Wrong size on UProbabilityDisplay_C");
static_assert(offsetof(UProbabilityDisplay_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, InAnim) == 0x000280, "Member 'UProbabilityDisplay_C::InAnim' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, BgBlur) == 0x000288, "Member 'UProbabilityDisplay_C::BgBlur' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, Button_92) == 0x000290, "Member 'UProbabilityDisplay_C::Button_92' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ButtonList) == 0x000298, "Member 'UProbabilityDisplay_C::ButtonList' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, CmnClose02) == 0x0002A0, "Member 'UProbabilityDisplay_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, DescriptionTextBottom) == 0x0002A8, "Member 'UProbabilityDisplay_C::DescriptionTextBottom' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, DescriptionTextTop) == 0x0002B0, "Member 'UProbabilityDisplay_C::DescriptionTextTop' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ItemListVerticalBox) == 0x0002B8, "Member 'UProbabilityDisplay_C::ItemListVerticalBox' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, LapCount) == 0x0002C0, "Member 'UProbabilityDisplay_C::LapCount' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplay_ItemCraftTopItem) == 0x0002C8, "Member 'UProbabilityDisplay_C::ProbabilityDisplay_ItemCraftTopItem' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplay_ItemCraftTopItem_116) == 0x0002D0, "Member 'UProbabilityDisplay_C::ProbabilityDisplay_ItemCraftTopItem_116' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplay_WeaponFusionListItem) == 0x0002D8, "Member 'UProbabilityDisplay_C::ProbabilityDisplay_WeaponFusionListItem' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplay_WeaponTuningTopItem) == 0x0002E0, "Member 'UProbabilityDisplay_C::ProbabilityDisplay_WeaponTuningTopItem' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplayButton_1) == 0x0002E8, "Member 'UProbabilityDisplay_C::ProbabilityDisplayButton_1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ProbabilityDisplayButton_2) == 0x0002F0, "Member 'UProbabilityDisplay_C::ProbabilityDisplayButton_2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, StepList_Gasha) == 0x0002F8, "Member 'UProbabilityDisplay_C::StepList_Gasha' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, SubtitleText) == 0x000300, "Member 'UProbabilityDisplay_C::SubtitleText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, TitleText) == 0x000308, "Member 'UProbabilityDisplay_C::TitleText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ListItemPadding) == 0x000310, "Member 'UProbabilityDisplay_C::ListItemPadding' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, TextTable) == 0x000320, "Member 'UProbabilityDisplay_C::TextTable' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, CraftMaster) == 0x000328, "Member 'UProbabilityDisplay_C::CraftMaster' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, AbilityTexttable) == 0x0003B0, "Member 'UProbabilityDisplay_C::AbilityTexttable' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ButtonListPadding) == 0x0003B8, "Member 'UProbabilityDisplay_C::ButtonListPadding' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, OnClosing) == 0x0003C8, "Member 'UProbabilityDisplay_C::OnClosing' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, GashaBonusNum) == 0x0003D8, "Member 'UProbabilityDisplay_C::GashaBonusNum' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, Anim) == 0x0003DC, "Member 'UProbabilityDisplay_C::Anim' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, bStepUpGasha) == 0x0003DD, "Member 'UProbabilityDisplay_C::bStepUpGasha' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ButtonListSelectId) == 0x0003E0, "Member 'UProbabilityDisplay_C::ButtonListSelectId' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, GashaBonusListInfo) == 0x0003E8, "Member 'UProbabilityDisplay_C::GashaBonusListInfo' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, GashaCurrencyBonusListInfo) == 0x000430, "Member 'UProbabilityDisplay_C::GashaCurrencyBonusListInfo' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ItemId) == 0x000478, "Member 'UProbabilityDisplay_C::ItemId' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, PerkPickId) == 0x00047C, "Member 'UProbabilityDisplay_C::PerkPickId' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, SlotRateArray) == 0x000488, "Member 'UProbabilityDisplay_C::SlotRateArray' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_C, ImaginePerk) == 0x000498, "Member 'UProbabilityDisplay_C::ImaginePerk' has a wrong offset!");

}

