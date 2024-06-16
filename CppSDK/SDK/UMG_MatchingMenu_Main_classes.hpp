#pragma once

 

// Package: UMG_MatchingMenu_Main

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C
// 0x0258 (0x04D0 - 0x0278)
class UUMG_MatchingMenu_Main_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UApplyButtonList_C*                     ApplyButtonList;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_ContentInfo_C*        ContentInfo;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerPartyLevelInfo_C*                PlayerPartyLevelInfo;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardPlusCountTicketInfo_C*           RewardPlusCountTicketInfo;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartMatchmaking;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosingMenu;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bVisible;                                          // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D5[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             DungeonInfo;                                       // 0x02D8(0x01E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsUnlimit;                                         // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D6[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickSupplyIcon;                                 // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit);
	void OnClose__DelegateSignature();
	void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void ExecuteUbergraph_UMG_MatchingMenu_Main(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature();
	void BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature();
	void PartyRecruitCancel();
	void OnCancelRecruit(const bool bWasSuccessful, const int32 IRetCode);
	void PartyRecruitCancel_YesNoDialog(const EYesNoDialogResult Result);
	void DoMatching();
	void BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
	void ShowNoLeaderAlert();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void Init(class FName InitDungeonId);
	void CloseMenu();
	void InAnimation();
	void OutAnimation();
	void RequestPreLoad(TArray<struct FSBMapInfo>& InDungeonMapInfos);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Main_C">();
	}
	static class UUMG_MatchingMenu_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Main_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Main_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Main_C");
static_assert(sizeof(UUMG_MatchingMenu_Main_C) == 0x0004D0, "Wrong size on UUMG_MatchingMenu_Main_C");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, AnimOut) == 0x000280, "Member 'UUMG_MatchingMenu_Main_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, AnimIn) == 0x000288, "Member 'UUMG_MatchingMenu_Main_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, ApplyButtonList) == 0x000290, "Member 'UUMG_MatchingMenu_Main_C::ApplyButtonList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, ContentInfo) == 0x000298, "Member 'UUMG_MatchingMenu_Main_C::ContentInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, PlayerPartyLevelInfo) == 0x0002A0, "Member 'UUMG_MatchingMenu_Main_C::PlayerPartyLevelInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, RewardPlusCountTicketInfo) == 0x0002A8, "Member 'UUMG_MatchingMenu_Main_C::RewardPlusCountTicketInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, OnStartMatchmaking) == 0x0002B0, "Member 'UUMG_MatchingMenu_Main_C::OnStartMatchmaking' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, OnClose) == 0x0002C0, "Member 'UUMG_MatchingMenu_Main_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, IsClosingMenu) == 0x0002D0, "Member 'UUMG_MatchingMenu_Main_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, bVisible) == 0x0002D1, "Member 'UUMG_MatchingMenu_Main_C::bVisible' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, DungeonInfo) == 0x0002D8, "Member 'UUMG_MatchingMenu_Main_C::DungeonInfo' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, IsUnlimit) == 0x0004B8, "Member 'UUMG_MatchingMenu_Main_C::IsUnlimit' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Main_C, OnClickSupplyIcon) == 0x0004C0, "Member 'UUMG_MatchingMenu_Main_C::OnClickSupplyIcon' has a wrong offset!");

}

