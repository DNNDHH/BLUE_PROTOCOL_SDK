#pragma once

 

// Package: UMG_SeasonPassMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenu.UMG_SeasonPassMenu_C
// 0x00C8 (0x0370 - 0x02A8)
class UUMG_SeasonPassMenu_C final : public USBSeasonPassMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPageIn;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DebugButtons;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_168;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvas;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_BuyRankup;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_BuySeasonPass;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_GetInfo;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_GetRaward;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Rankup;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Rankup_1;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuInvalid_C*           UMG_SeasonPassMenuInvalid;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeasonPassMenuMain_C*              UMG_SeasonPassMenuMain;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_3;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bCheckAutoRankup;                                  // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFinishAnimPagein;                                 // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77F5[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OldRank;                                           // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugValue;                                        // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F6[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardData*            RewardData;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassItemReceiveMenu_C*       ItemReceiveMenu;                                   // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DebugText;                                         // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UMG_SeasonPassMenu(int32 EntryPoint);
	void OnCompleted(int32 InRetCode);
	void OnUpdateReceivedRewardInfo(class UObject* Sender, class UObject* Param);
	void OnUpdateSeasonPassInfo(class UObject* Sender, class UObject* Param);
	void Destruct();
	void Init();
	void BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnCompletedAmoutOfMoney(int32 InRetCode, int32 InFreeMoney, int32 InPaidMoney);
	void BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void EnableInput(bool bEnable);
	void CheckAutoRankup();
	void FinishAnimPagein();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature();
	void OnSuccessedReceiveApi();
	void OnClieckItemReceive(class USBSeasonPassMenuRewardItemData* Data);
	void OnCloseReceiveMenu(class UUMG_SeasonPassItemReceiveMenu_C* Sender);
	void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature();
	void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature();
	void BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature();
	void OnClickedRankupDialogOk(int32 UpRank);
	void OnGetSeasonPassRewardAllCompleted(int32 InRetCode);
	void RequestGetSeasonPassRewardAll();
	void OnCompletedGetInfo(int32 InRetCode);
	void ConfirmRequestRankupApi();
	void RequestGetInfo();
	void RequestAutoRankup();
	void OnComplateReceive(int32 InRetCode);
	void RequestReceiveApi(class USBSeasonPassMenuRewardItemData* Data);
	void OnCompleteRankup(int32 InRetCode);
	void RequestRankupApi(int32 UpRank);
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnRMShopClosed();
	void OnParentTerm();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenu_C">();
	}
	static class UUMG_SeasonPassMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenu_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenu_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenu_C");
static_assert(sizeof(UUMG_SeasonPassMenu_C) == 0x000370, "Wrong size on UUMG_SeasonPassMenu_C");
static_assert(offsetof(UUMG_SeasonPassMenu_C, UberGraphFrame) == 0x0002A8, "Member 'UUMG_SeasonPassMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, AnimPageIn) == 0x0002B0, "Member 'UUMG_SeasonPassMenu_C::AnimPageIn' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, AnimOut2) == 0x0002B8, "Member 'UUMG_SeasonPassMenu_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, AnimOut) == 0x0002C0, "Member 'UUMG_SeasonPassMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, CommandMenu_Line) == 0x0002C8, "Member 'UUMG_SeasonPassMenu_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, DebugButtons) == 0x0002D0, "Member 'UUMG_SeasonPassMenu_C::DebugButtons' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, EditableTextBox_168) == 0x0002D8, "Member 'UUMG_SeasonPassMenu_C::EditableTextBox_168' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, MenuCanvas) == 0x0002E0, "Member 'UUMG_SeasonPassMenu_C::MenuCanvas' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_BuyRankup) == 0x0002E8, "Member 'UUMG_SeasonPassMenu_C::SBButton_BuyRankup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_BuySeasonPass) == 0x0002F0, "Member 'UUMG_SeasonPassMenu_C::SBButton_BuySeasonPass' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_GetInfo) == 0x0002F8, "Member 'UUMG_SeasonPassMenu_C::SBButton_GetInfo' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_GetRaward) == 0x000300, "Member 'UUMG_SeasonPassMenu_C::SBButton_GetRaward' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_Rankup) == 0x000308, "Member 'UUMG_SeasonPassMenu_C::SBButton_Rankup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, SBButton_Rankup_1) == 0x000310, "Member 'UUMG_SeasonPassMenu_C::SBButton_Rankup_1' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, UIBlocker) == 0x000318, "Member 'UUMG_SeasonPassMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, UMG_SeasonPassMenuInvalid) == 0x000320, "Member 'UUMG_SeasonPassMenu_C::UMG_SeasonPassMenuInvalid' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, UMG_SeasonPassMenuMain) == 0x000328, "Member 'UUMG_SeasonPassMenu_C::UMG_SeasonPassMenuMain' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, WidgetSwitcher_3) == 0x000330, "Member 'UUMG_SeasonPassMenu_C::WidgetSwitcher_3' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, bCheckAutoRankup) == 0x000338, "Member 'UUMG_SeasonPassMenu_C::bCheckAutoRankup' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, bFinishAnimPagein) == 0x000339, "Member 'UUMG_SeasonPassMenu_C::bFinishAnimPagein' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, OldRank) == 0x00033C, "Member 'UUMG_SeasonPassMenu_C::OldRank' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, DebugValue) == 0x000340, "Member 'UUMG_SeasonPassMenu_C::DebugValue' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, RewardData) == 0x000348, "Member 'UUMG_SeasonPassMenu_C::RewardData' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, ItemReceiveMenu) == 0x000350, "Member 'UUMG_SeasonPassMenu_C::ItemReceiveMenu' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenu_C, DebugText) == 0x000358, "Member 'UUMG_SeasonPassMenu_C::DebugText' has a wrong offset!");

}

