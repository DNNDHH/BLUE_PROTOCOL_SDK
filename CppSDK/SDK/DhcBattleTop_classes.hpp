#pragma once

 

// Package: DhcBattleTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTop.DhcBattleTop_C
// 0x0128 (0x03D8 - 0x02B0)
class UDhcBattleTop_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimParamAndScore;                                 // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn01_C*                            BackBtn;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BattleSetBg;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopBattleSetHeading_C*        BattleSetHeading;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopBattleSetInfo_C*           BattleSetInfo;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFullScreenForDetailedAttrResistStatus;          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconXL_C*                         ClassIconXL;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          DetailedAttrResistStatus;                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            GotoDhcMapBtn;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoDataImage1;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoDataImage2;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoDataImage3;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoDataImage4;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoDataImage5;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopClassTypeList_C*           PlayerClassTypeList;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LeftSideParameters_C*      PlayerStatusParam;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ScoreNotMeasuredVB_1;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedScoreBg;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectedScoreHB;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedScoreTxt;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleIcon;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleImage;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleLine;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsTerm;                                           // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5D[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempRetCode;                                       // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bGoToNext;                                         // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5E[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDhcBattleAttributeResistanceInfo> SelectedAttrResistInfos;                           // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsDetailedAttrResistStatusActive;                 // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDhcMapMode;                                     // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnClose__DelegateSignature(bool InGoToNext);
	void ExecuteUbergraph_DhcBattleTop(int32 EntryPoint);
	void PartyWarpEndEvent();
	void WarpEnd();
	void UnbindDetailedAttrResistStatusEvents();
	void EscDetailedStatus();
	void BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnCloseDetailedAttrResistStatus();
	void ActivateBtnFullScreenForDetailedAttrResistStatus(bool InActivate);
	void BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature();
	void UpdateClassTypeListItemSelected(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty);
	void OnSelectDialogResult(const int32 SelectIndex);
	void BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty);
	void BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void UnbindOnLoadHighScoreInfoDelegate();
	void BindOnLoadHighScoreInfoDelegate();
	void Destruct();
	void ActivateUIBlockerFrontRow(bool InActivate);
	void OnLoadHighScoreInfoDelegate(const int32 InRetCode, const struct FSBDhcBattleInfo& InInfo);
	void OnPress_Cancel();
	void BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Construct();
	void Open();
	void Close();
	void SetupInfo(const struct FSBDhcBattleInfo& InInfo);
	void SetLayout(bool InIsScoreMeasured);
	void SetSelectedClassTypeAndScore(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty);
	void SetGoToDhcMapBtnTextId(int32 InTextID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTop_C">();
	}
	static class UDhcBattleTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTop_C>();
	}
};
static_assert(alignof(UDhcBattleTop_C) == 0x000008, "Wrong alignment on UDhcBattleTop_C");
static_assert(sizeof(UDhcBattleTop_C) == 0x0003D8, "Wrong size on UDhcBattleTop_C");
static_assert(offsetof(UDhcBattleTop_C, UberGraphFrame) == 0x0002B0, "Member 'UDhcBattleTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, AnimParamAndScore) == 0x0002B8, "Member 'UDhcBattleTop_C::AnimParamAndScore' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, AnimIn) == 0x0002C0, "Member 'UDhcBattleTop_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, BackBtn) == 0x0002C8, "Member 'UDhcBattleTop_C::BackBtn' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, BattleSetBg) == 0x0002D0, "Member 'UDhcBattleTop_C::BattleSetBg' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, BattleSetHeading) == 0x0002D8, "Member 'UDhcBattleTop_C::BattleSetHeading' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, BattleSetInfo) == 0x0002E0, "Member 'UDhcBattleTop_C::BattleSetInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, Bg01) == 0x0002E8, "Member 'UDhcBattleTop_C::Bg01' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, BtnFullScreenForDetailedAttrResistStatus) == 0x0002F0, "Member 'UDhcBattleTop_C::BtnFullScreenForDetailedAttrResistStatus' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, CanvasPanel_0) == 0x0002F8, "Member 'UDhcBattleTop_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, ClassIconXL) == 0x000300, "Member 'UDhcBattleTop_C::ClassIconXL' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, CmnBtnBack) == 0x000308, "Member 'UDhcBattleTop_C::CmnBtnBack' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, DetailedAttrResistStatus) == 0x000310, "Member 'UDhcBattleTop_C::DetailedAttrResistStatus' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, GotoDhcMapBtn) == 0x000318, "Member 'UDhcBattleTop_C::GotoDhcMapBtn' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, NoDataImage1) == 0x000320, "Member 'UDhcBattleTop_C::NoDataImage1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, NoDataImage2) == 0x000328, "Member 'UDhcBattleTop_C::NoDataImage2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, NoDataImage3) == 0x000330, "Member 'UDhcBattleTop_C::NoDataImage3' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, NoDataImage4) == 0x000338, "Member 'UDhcBattleTop_C::NoDataImage4' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, NoDataImage5) == 0x000340, "Member 'UDhcBattleTop_C::NoDataImage5' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, PlayerClassTypeList) == 0x000348, "Member 'UDhcBattleTop_C::PlayerClassTypeList' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, PlayerStatusParam) == 0x000350, "Member 'UDhcBattleTop_C::PlayerStatusParam' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, ScoreNotMeasuredVB_1) == 0x000358, "Member 'UDhcBattleTop_C::ScoreNotMeasuredVB_1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, SelectedScoreBg) == 0x000360, "Member 'UDhcBattleTop_C::SelectedScoreBg' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, SelectedScoreHB) == 0x000368, "Member 'UDhcBattleTop_C::SelectedScoreHB' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, SelectedScoreTxt) == 0x000370, "Member 'UDhcBattleTop_C::SelectedScoreTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, ShowTutorialHelpBtn) == 0x000378, "Member 'UDhcBattleTop_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, TitleIcon) == 0x000380, "Member 'UDhcBattleTop_C::TitleIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, TitleImage) == 0x000388, "Member 'UDhcBattleTop_C::TitleImage' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, TitleLine) == 0x000390, "Member 'UDhcBattleTop_C::TitleLine' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, UIBlockerFrontRow) == 0x000398, "Member 'UDhcBattleTop_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, bIsTerm) == 0x0003A0, "Member 'UDhcBattleTop_C::bIsTerm' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, TempRetCode) == 0x0003A4, "Member 'UDhcBattleTop_C::TempRetCode' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, OnClose) == 0x0003A8, "Member 'UDhcBattleTop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, bGoToNext) == 0x0003B8, "Member 'UDhcBattleTop_C::bGoToNext' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, SelectedAttrResistInfos) == 0x0003C0, "Member 'UDhcBattleTop_C::SelectedAttrResistInfos' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, bIsDetailedAttrResistStatusActive) == 0x0003D0, "Member 'UDhcBattleTop_C::bIsDetailedAttrResistStatusActive' has a wrong offset!");
static_assert(offsetof(UDhcBattleTop_C, bIsDhcMapMode) == 0x0003D1, "Member 'UDhcBattleTop_C::bIsDhcMapMode' has a wrong offset!");

}

