#pragma once

 

// Package: UMG_MatchingMenu_AfterApplying

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C
// 0x0790 (0x0A08 - 0x0278)
class UUMG_MatchingMenu_AfterApplying_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailHide;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailShow;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonDetail;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelOpacity;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MissionDetail_bg;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerPartyLevelInfo_C*                PlayerPartyLevelInfo;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardPlusCountTicketInfo_C*           RewardPlusCountTicketInfo;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingImage_C*                   UMG_MatchingImage;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Confirm_C*            UMG_MatchingMenu_Confirm;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Headder_C*            UMG_MatchingMenu_Headder;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_MissionDetail_C*      UMG_MatchingMenu_MissionDetail;                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Term_C*               UMG_MatchingMenu_Term;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Wait_C*               UMG_MatchingMenu_Wait;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_84;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCancel;                                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCommandMenu;                                    // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bJustOut;                                          // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDetailShow;                                       // 0x0323(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              VisibilityTerm;                                    // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74C2[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickSupplyIcon;                                 // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           ButtonDetailStyle1;                                // 0x0338(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           ButtonDetailStyle2;                                // 0x05B0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMapInfo                             HelpMapInfo;                                       // 0x0828(0x01E0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature();
	void OnCancel__DelegateSignature();
	void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void ExecuteUbergraph_UMG_MatchingMenu_AfterApplying(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
	void Construct();
	void WaitIn();
	void ConfirmIn();
	void Out();
	void OutClose();
	void OutCancel();
	void WaitOut();
	void ConfirmOut();
	void SetHUDMode();
	void SetCommandMenuMode();
	void SetDungeonInfo(class FName GameContentId, int32 HelpMatchingModeId);
	void SetTerm(class FName EventTerm);
	void MakeHelpModeInfo(int32 ModeId);
	void GetHelpMatchingRequiredInfo(int32 ModeId, int32* BattleScore, int32* ClassLevel);
	void GetRewardSearchName(int32 ModeId, class FName* SearchName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_AfterApplying_C">();
	}
	static class UUMG_MatchingMenu_AfterApplying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_AfterApplying_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_AfterApplying_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_AfterApplying_C");
static_assert(sizeof(UUMG_MatchingMenu_AfterApplying_C) == 0x000A08, "Wrong size on UUMG_MatchingMenu_AfterApplying_C");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_AfterApplying_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, AnimDetailHide) == 0x000280, "Member 'UUMG_MatchingMenu_AfterApplying_C::AnimDetailHide' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, AnimDetailShow) == 0x000288, "Member 'UUMG_MatchingMenu_AfterApplying_C::AnimDetailShow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, AnimOut) == 0x000290, "Member 'UUMG_MatchingMenu_AfterApplying_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, AnimIn) == 0x000298, "Member 'UUMG_MatchingMenu_AfterApplying_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, ButtonDetail) == 0x0002A0, "Member 'UUMG_MatchingMenu_AfterApplying_C::ButtonDetail' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, CanvasPanelOpacity) == 0x0002A8, "Member 'UUMG_MatchingMenu_AfterApplying_C::CanvasPanelOpacity' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, MissionDetail_bg) == 0x0002B0, "Member 'UUMG_MatchingMenu_AfterApplying_C::MissionDetail_bg' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, PlayerPartyLevelInfo) == 0x0002B8, "Member 'UUMG_MatchingMenu_AfterApplying_C::PlayerPartyLevelInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, RewardPlusCountTicketInfo) == 0x0002C0, "Member 'UUMG_MatchingMenu_AfterApplying_C::RewardPlusCountTicketInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingImage) == 0x0002C8, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingImage' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingMenu_Confirm) == 0x0002D0, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingMenu_Confirm' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingMenu_Headder) == 0x0002D8, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingMenu_Headder' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingMenu_MissionDetail) == 0x0002E0, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingMenu_MissionDetail' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingMenu_Term) == 0x0002E8, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingMenu_Term' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, UMG_MatchingMenu_Wait) == 0x0002F0, "Member 'UUMG_MatchingMenu_AfterApplying_C::UMG_MatchingMenu_Wait' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, WidgetSwitcher_84) == 0x0002F8, "Member 'UUMG_MatchingMenu_AfterApplying_C::WidgetSwitcher_84' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, OnClose) == 0x000300, "Member 'UUMG_MatchingMenu_AfterApplying_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, OnCancel) == 0x000310, "Member 'UUMG_MatchingMenu_AfterApplying_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, bCancel) == 0x000320, "Member 'UUMG_MatchingMenu_AfterApplying_C::bCancel' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, bIsCommandMenu) == 0x000321, "Member 'UUMG_MatchingMenu_AfterApplying_C::bIsCommandMenu' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, bJustOut) == 0x000322, "Member 'UUMG_MatchingMenu_AfterApplying_C::bJustOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, bDetailShow) == 0x000323, "Member 'UUMG_MatchingMenu_AfterApplying_C::bDetailShow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, VisibilityTerm) == 0x000324, "Member 'UUMG_MatchingMenu_AfterApplying_C::VisibilityTerm' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, OnClickSupplyIcon) == 0x000328, "Member 'UUMG_MatchingMenu_AfterApplying_C::OnClickSupplyIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, ButtonDetailStyle1) == 0x000338, "Member 'UUMG_MatchingMenu_AfterApplying_C::ButtonDetailStyle1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, ButtonDetailStyle2) == 0x0005B0, "Member 'UUMG_MatchingMenu_AfterApplying_C::ButtonDetailStyle2' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_AfterApplying_C, HelpMapInfo) == 0x000828, "Member 'UUMG_MatchingMenu_AfterApplying_C::HelpMapInfo' has a wrong offset!");

}

