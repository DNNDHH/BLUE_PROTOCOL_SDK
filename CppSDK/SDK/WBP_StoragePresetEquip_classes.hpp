#pragma once

 

// Package: WBP_StoragePresetEquip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StoragePresetEquip.WBP_StoragePresetEquip_C
// 0x0100 (0x03B0 - 0x02B0)
class UWBP_StoragePresetEquip_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_BattleSet_C*               BattleSet;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_BattleSet;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn1_BattleSet;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn2_CostumeSet;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabGrp;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSelectedTab;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_BattleSet;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowBG_3;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEnd;                                              // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TickCheck;                                         // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A0[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemIconBtn_C*>                 SelectItemList;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bDebugMode;                                        // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBPlayerPresetType                           PresetType;                                        // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79A1[0x6];                                     // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDetailedStatusFlag;                               // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsBattleSetChildWidgetOpened;                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A2[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_Studio_C*      PlayerAvatarStudio;                                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrAvatarPoseStateNo;                             // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TempIsChangeCostumeProcStart;                      // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerAvatarImageReuploadFlag;                     // 0x039D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A3[0x2];                                     // 0x039E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                SBCharaCreateComponent;                            // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_C*             TmpBPPlayerSceneCapture2D;                         // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_StoragePresetEquip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void FreeBattleSet();
	void InitBattleSet();
	void OnChangeStateByCostumeChange(const class FString& InPrevStateName, const class FString& InNextStateName);
	void OnCharaPartsLoadedDelegate_ByChangeCostume_____(bool Result);
	void SetUIBlockerFrontRowVisibility(bool InIsVisible);
	void OnCostumeChangeOccured();
	void StartOpenMenuAnimation();
	void OnChangeState(const class FString& InPrevStateName, const class FString& InNextStateName);
	void OnPlayerAvatarLoaded();
	void OnCalcEquipStatusDiff();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void Destruct();
	void Construct();
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden);
	void OnClickedDetailedStatus();
	void EscDetailedStatus();
	void BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnClicked_BattleSet_DetailedStatus();
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature();
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature();
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive);
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened);
	void BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void OnPress_Cancel();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	void SetPresetType(ESBPlayerPresetType InPresetType);
	void SetCmnBackBtnVIsibility(bool InIsVisible);
	void FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform);
	void SetPlayerAvatarCurrentModeMotion();
	void SetPlayerAvatarRotateActive(bool InIsRotateActive);
	void SetPlayerAvatarStudioHidden(bool InIsHidden);
	void SetUIBlockerForBattleSetVisibility(bool InIsVisible);
	void SetBattleSetPlayerAvatarVisibility(bool bInIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StoragePresetEquip_C">();
	}
	static class UWBP_StoragePresetEquip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StoragePresetEquip_C>();
	}
};
static_assert(alignof(UWBP_StoragePresetEquip_C) == 0x000008, "Wrong alignment on UWBP_StoragePresetEquip_C");
static_assert(sizeof(UWBP_StoragePresetEquip_C) == 0x0003B0, "Wrong size on UWBP_StoragePresetEquip_C");
static_assert(offsetof(UWBP_StoragePresetEquip_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_StoragePresetEquip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, AnimLight2) == 0x0002B8, "Member 'UWBP_StoragePresetEquip_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, AnimLight1) == 0x0002C0, "Member 'UWBP_StoragePresetEquip_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, AnimOut) == 0x0002C8, "Member 'UWBP_StoragePresetEquip_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, AnimIn) == 0x0002D0, "Member 'UWBP_StoragePresetEquip_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, BattleSet) == 0x0002D8, "Member 'UWBP_StoragePresetEquip_C::BattleSet' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, ButtonFullScreen_BattleSet) == 0x0002E0, "Member 'UWBP_StoragePresetEquip_C::ButtonFullScreen_BattleSet' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, CmnBack) == 0x0002E8, "Member 'UWBP_StoragePresetEquip_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, IconShop) == 0x0002F0, "Member 'UWBP_StoragePresetEquip_C::IconShop' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, LogoBG) == 0x0002F8, "Member 'UWBP_StoragePresetEquip_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, RetainerBox_0) == 0x000300, "Member 'UWBP_StoragePresetEquip_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, ShopMenu_InAnime) == 0x000308, "Member 'UWBP_StoragePresetEquip_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TabBtn1_BattleSet) == 0x000310, "Member 'UWBP_StoragePresetEquip_C::TabBtn1_BattleSet' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TabBtn2_CostumeSet) == 0x000318, "Member 'UWBP_StoragePresetEquip_C::TabBtn2_CostumeSet' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TabGrp) == 0x000320, "Member 'UWBP_StoragePresetEquip_C::TabGrp' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, Title) == 0x000328, "Member 'UWBP_StoragePresetEquip_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TxtSelectedTab) == 0x000330, "Member 'UWBP_StoragePresetEquip_C::TxtSelectedTab' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, UIBlocker_BattleSet) == 0x000338, "Member 'UWBP_StoragePresetEquip_C::UIBlocker_BattleSet' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, UIBlockerFrontRow) == 0x000340, "Member 'UWBP_StoragePresetEquip_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, WindowBG_3) == 0x000348, "Member 'UWBP_StoragePresetEquip_C::WindowBG_3' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, OnClose) == 0x000350, "Member 'UWBP_StoragePresetEquip_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, bEnd) == 0x000360, "Member 'UWBP_StoragePresetEquip_C::bEnd' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TickCheck) == 0x000361, "Member 'UWBP_StoragePresetEquip_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, SelectItemList) == 0x000368, "Member 'UWBP_StoragePresetEquip_C::SelectItemList' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, bDebugMode) == 0x000378, "Member 'UWBP_StoragePresetEquip_C::bDebugMode' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, PresetType) == 0x000379, "Member 'UWBP_StoragePresetEquip_C::PresetType' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, UIBlocker_0) == 0x000380, "Member 'UWBP_StoragePresetEquip_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, bDetailedStatusFlag) == 0x000388, "Member 'UWBP_StoragePresetEquip_C::bDetailedStatusFlag' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, bIsBattleSetChildWidgetOpened) == 0x000389, "Member 'UWBP_StoragePresetEquip_C::bIsBattleSetChildWidgetOpened' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, PlayerAvatarStudio) == 0x000390, "Member 'UWBP_StoragePresetEquip_C::PlayerAvatarStudio' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, CurrAvatarPoseStateNo) == 0x000398, "Member 'UWBP_StoragePresetEquip_C::CurrAvatarPoseStateNo' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TempIsChangeCostumeProcStart) == 0x00039C, "Member 'UWBP_StoragePresetEquip_C::TempIsChangeCostumeProcStart' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, PlayerAvatarImageReuploadFlag) == 0x00039D, "Member 'UWBP_StoragePresetEquip_C::PlayerAvatarImageReuploadFlag' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, SBCharaCreateComponent) == 0x0003A0, "Member 'UWBP_StoragePresetEquip_C::SBCharaCreateComponent' has a wrong offset!");
static_assert(offsetof(UWBP_StoragePresetEquip_C, TmpBPPlayerSceneCapture2D) == 0x0003A8, "Member 'UWBP_StoragePresetEquip_C::TmpBPPlayerSceneCapture2D' has a wrong offset!");

}

