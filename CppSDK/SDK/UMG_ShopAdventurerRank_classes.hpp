#pragma once

 

// Package: UMG_ShopAdventurerRank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C
// 0x0098 (0x0348 - 0x02B0)
class UUMG_ShopAdventurerRank_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAdventurerRankCommonInfo_C*            AdventurerRankCommonInfo;                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            BattleStartBtn;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Parts;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack_1;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopAdventurerRank_Bg_C*               ShopAdventurerRank_Bg;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClose;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRankUpFlow;                                      // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A48[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBattleStart;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBattleStart;                                     // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMatchingClose;                                   // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A49[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_C*                    MatchingMenu;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameContentId;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnBattleStart__DelegateSignature();
	void ExecuteUbergraph_UMG_ShopAdventurerRank(int32 EntryPoint);
	void OnCancelRecruit(const bool bWasSuccessful, const int32 IRetCode);
	void PartyRecruitCancel_YesNoDialog(const EYesNoDialogResult Result);
	void StartBattle();
	void PartyRecruitCancel();
	void OnClose_Event_2(class UUMG_MatchingMenu_C* Sender);
	void BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void OnGuideMessageVisibility_Event(bool InVisibility);
	void Close();
	void OnPress_Cancel();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void InAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ShopAdventurerRank_C">();
	}
	static class UUMG_ShopAdventurerRank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ShopAdventurerRank_C>();
	}
};
static_assert(alignof(UUMG_ShopAdventurerRank_C) == 0x000008, "Wrong alignment on UUMG_ShopAdventurerRank_C");
static_assert(sizeof(UUMG_ShopAdventurerRank_C) == 0x000348, "Wrong size on UUMG_ShopAdventurerRank_C");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_ShopAdventurerRank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, AnimOut) == 0x0002B8, "Member 'UUMG_ShopAdventurerRank_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, AnimIn) == 0x0002C0, "Member 'UUMG_ShopAdventurerRank_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, AdventurerRankCommonInfo) == 0x0002C8, "Member 'UUMG_ShopAdventurerRank_C::AdventurerRankCommonInfo' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, BattleStartBtn) == 0x0002D0, "Member 'UUMG_ShopAdventurerRank_C::BattleStartBtn' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, CanvasPanel_Parts) == 0x0002D8, "Member 'UUMG_ShopAdventurerRank_C::CanvasPanel_Parts' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, CmnBtnBack_1) == 0x0002E0, "Member 'UUMG_ShopAdventurerRank_C::CmnBtnBack_1' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, ShopAdventurerRank_Bg) == 0x0002E8, "Member 'UUMG_ShopAdventurerRank_C::ShopAdventurerRank_Bg' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, ShopMenu_InAnime) == 0x0002F0, "Member 'UUMG_ShopAdventurerRank_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, ShowTutorialHelpBtn) == 0x0002F8, "Member 'UUMG_ShopAdventurerRank_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, UIBlocker) == 0x000300, "Member 'UUMG_ShopAdventurerRank_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, OnClose) == 0x000308, "Member 'UUMG_ShopAdventurerRank_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, IsClose) == 0x000318, "Member 'UUMG_ShopAdventurerRank_C::IsClose' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, IsRankUpFlow) == 0x000319, "Member 'UUMG_ShopAdventurerRank_C::IsRankUpFlow' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, OnBattleStart) == 0x000320, "Member 'UUMG_ShopAdventurerRank_C::OnBattleStart' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, IsBattleStart) == 0x000330, "Member 'UUMG_ShopAdventurerRank_C::IsBattleStart' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, IsMatchingClose) == 0x000331, "Member 'UUMG_ShopAdventurerRank_C::IsMatchingClose' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, MatchingMenu) == 0x000338, "Member 'UUMG_ShopAdventurerRank_C::MatchingMenu' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_C, GameContentId) == 0x000340, "Member 'UUMG_ShopAdventurerRank_C::GameContentId' has a wrong offset!");

}

