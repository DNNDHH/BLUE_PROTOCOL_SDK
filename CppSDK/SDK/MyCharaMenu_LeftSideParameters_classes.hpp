#pragma once

 

// Package: MyCharaMenu_LeftSideParameters

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C
// 0x0318 (0x0590 - 0x0278)
class UMyCharaMenu_LeftSideParameters_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           AchievementAndCharaNameGrp;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AchievementAndCharaNameGrpBg01;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            AchievementChangeBtn;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AchievementLabel;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            AttackUpDown;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnDetailedStatus;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharaNameLabel;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ClassGrpBg01;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C* ClassInfoDiff;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ClassInfoTypeGrp;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ClassLevelTxtForLevelSync;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassLevelValueTxt;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassLevelValueTxtForLevelSync;                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassNameTxt;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            CriticalRateUpDown;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            CriticalUpDown;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            DefenseUpDown;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            DEXUpDown;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEXPGaugeCommandMenu_C*           ExpGauge;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnExpOverflowLevelMark_C*             ExpOverflowLevelMark;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnExpOverflowRewardIcon_C*            ExpOverflowRewardIcon;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForClassLevelAndRewardIcon;                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            HPUpDown;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            INTUpDown;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelSyncMark;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LvGrp;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LvGrpForLevelSync;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            MNDUpDown;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerGaugeCommandMenu_C*              PlayerGaugeCommandMenu;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerGaugeGrpBg01;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            ResilienceUpDown;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusGrpBg;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            STRUpDown;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            STUpDown;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForAttackValue;                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForClassLevelValue;                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForCriticalPowerValue;                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForCriticalRateValue;                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForDefenseValue;                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForDEXValue;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForINTValue;                               // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForMNDValue;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForResilienceValue;                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForSTRValue;                               // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForTotalPowerValue;                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForVITValue;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TotalPowerGrp;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TotalPowerGrpBg01;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            TotalPowerUpDown;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 TutorialHelpBtnForTotalPower;                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttackForLevelSync;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalPowerPercentageForLevelSync;            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalPowerValue;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalPowerValueForLevelSync;                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalRatePercentageForLevelSync;             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalRateValue;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCriticalRateValueForLevelSync;                  // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDefense;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDefenseForLevelSync;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEXForLevelSync;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINTForLevelSync;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMNDForLevelSync;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtResilience;                                     // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtResilienceForLevelSync;                         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTRForLevelSync;                                // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTotalPower;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTotalPowerForLevelSync;                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVITForLevelSync;                                // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_StatusUpDown_C*            VITUpDown;                                         // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbPopupButtonParts_C*             WBP_ScbPopupButtonParts;                           // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_C*         AchievementList;                                   // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAchievementListOpened;                           // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EDC[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked_AchievementChangeButton;                 // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLoadAchievement;                                 // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedAchievementId;                             // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EDD[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSaveAchievement;                                 // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNameSettingDialog_C*                   NameSetting;                                       // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDetailedStatusClicked;                           // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         DesignType;                                        // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAchievementAndCharaNameVisible;                  // 0x0554(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7EDE[0x3];                                     // 0x0555(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            LevelSyncColor;                                    // 0x0558(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBStackBEnableType                           CurrentStackBEnableType;                           // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStackBSyncTotalPower;                            // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EDF[0x2];                                     // 0x0582(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _MaxRank;                                          // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDhcBattleTopMenuMode;                            // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsScbPopupEnable;                                 // 0x0589(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsExpOverflowGrpInvalid;                          // 0x058A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef);
	void OnLoadAchievement__DelegateSignature(bool InResult);
	void OnSaveAchievement__DelegateSignature(bool InResult);
	void OnDetailedStatusClicked__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_LeftSideParameters(int32 EntryPoint);
	void OnLevelUpDelegate(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse);
	void BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature();
	void OnStatusDiffAtRecalc2ndStatus();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Construct();
	void BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void _________0(const class FString& PlayerName);
	void OnRenamed(const int32 RetCode);
	void BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Dest_Achievement();
	void Const_Achievement();
	void OnSaveAchievementSelectedDelegate_____(const bool Result);
	void OnSelectAchievement_____(int32 InAchievementId);
	void OnLoadAchievement_____(bool InResult);
	void OnCloseAchievementList_____();
	void SetAchievementName(int32 InAchievementId);
	void SetupNameGrp();
	void SetupClassGrp();
	void SetPlayerLevel(int32 InLevel);
	void SetTotalPower(int32 InTotalPower);
	void SetupStatusGrp();
	void UpdateStatusDiffMark(bool InIsVisible, const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, ESBCharaEquipType InEquipType);
	void SetStatusDiffMarkInBulk(int32 InDiff);
	void GetEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, bool* OutIsVallid, struct FSBCharacterStatus* OutNewEquipmentStatus);
	void DestroyAchievementList();
	void UpdateStatusDiffMarkBattleSet(bool InIsVisible, TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList);
	void SetAchievementAndCharaNameVisibility(bool InIsVisible);
	void InitLevelSyncValueColor();
	void SwitchAllStatusValueForLevelSync(bool InIsLevelSync);
	void UpdateLevelSync(bool InIsLevelSync);
	void SetClassInfoDiffVisibility(bool InIsVisible);
	void SetClassInfoDiff(ESBClassType InClassType, int32 InClassLevel);
	void UpdateClassInfoDiff(const class FString& InEquippedWeaponUniqueId, const class FString& InNewWeaponUniqueId);
	void UpdateAllParam(bool InIncludeClassInfo);
	void SetExpGaugeUpdateStop(bool InIsUpdateStop);
	void GetCurrLevelSyncTarget(int32* OutLevelSyncTarget);
	void GetLevelSyncTargetByUniqueId(const class FString& InUniqueId, int32* OutLevelSyncTarget, ESBClassType* OutClassType);
	void GetItemTypeByUniqueId(const class FString& InUniqueId, bool* IsValid, EItemType* OutItemType, ESBImagineCategoryType* OutImagineCategoryType);
	void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
	void UpdateAllParamByDhcBattleScoreInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo);
	void AdjustClassInfoLayout();
	void SetupExpOverflowGrp(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop);
	void SetIsExpOverflowInvalid(bool bInIsInvalid);
	void SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_LeftSideParameters_C">();
	}
	static class UMyCharaMenu_LeftSideParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_LeftSideParameters_C>();
	}
};
static_assert(alignof(UMyCharaMenu_LeftSideParameters_C) == 0x000008, "Wrong alignment on UMyCharaMenu_LeftSideParameters_C");
static_assert(sizeof(UMyCharaMenu_LeftSideParameters_C) == 0x000590, "Wrong size on UMyCharaMenu_LeftSideParameters_C");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_LeftSideParameters_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AchievementAndCharaNameGrp) == 0x000280, "Member 'UMyCharaMenu_LeftSideParameters_C::AchievementAndCharaNameGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AchievementAndCharaNameGrpBg01) == 0x000288, "Member 'UMyCharaMenu_LeftSideParameters_C::AchievementAndCharaNameGrpBg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AchievementChangeBtn) == 0x000290, "Member 'UMyCharaMenu_LeftSideParameters_C::AchievementChangeBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AchievementLabel) == 0x000298, "Member 'UMyCharaMenu_LeftSideParameters_C::AchievementLabel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AttackUpDown) == 0x0002A0, "Member 'UMyCharaMenu_LeftSideParameters_C::AttackUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, BtnDetailedStatus) == 0x0002A8, "Member 'UMyCharaMenu_LeftSideParameters_C::BtnDetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, CharaNameLabel) == 0x0002B0, "Member 'UMyCharaMenu_LeftSideParameters_C::CharaNameLabel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassGrpBg01) == 0x0002B8, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassGrpBg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassIcon) == 0x0002C0, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassInfoDiff) == 0x0002C8, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassInfoDiff' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassInfoTypeGrp) == 0x0002D0, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassInfoTypeGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassLevelTxtForLevelSync) == 0x0002D8, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassLevelTxtForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassLevelValueTxt) == 0x0002E0, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassLevelValueTxt' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassLevelValueTxtForLevelSync) == 0x0002E8, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassLevelValueTxtForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ClassNameTxt) == 0x0002F0, "Member 'UMyCharaMenu_LeftSideParameters_C::ClassNameTxt' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, CriticalRateUpDown) == 0x0002F8, "Member 'UMyCharaMenu_LeftSideParameters_C::CriticalRateUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, CriticalUpDown) == 0x000300, "Member 'UMyCharaMenu_LeftSideParameters_C::CriticalUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, DefenseUpDown) == 0x000308, "Member 'UMyCharaMenu_LeftSideParameters_C::DefenseUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, DEXUpDown) == 0x000310, "Member 'UMyCharaMenu_LeftSideParameters_C::DEXUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ExpGauge) == 0x000318, "Member 'UMyCharaMenu_LeftSideParameters_C::ExpGauge' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ExpOverflowLevelMark) == 0x000320, "Member 'UMyCharaMenu_LeftSideParameters_C::ExpOverflowLevelMark' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ExpOverflowRewardIcon) == 0x000328, "Member 'UMyCharaMenu_LeftSideParameters_C::ExpOverflowRewardIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, HBForClassLevelAndRewardIcon) == 0x000330, "Member 'UMyCharaMenu_LeftSideParameters_C::HBForClassLevelAndRewardIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, HPUpDown) == 0x000338, "Member 'UMyCharaMenu_LeftSideParameters_C::HPUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, INTUpDown) == 0x000340, "Member 'UMyCharaMenu_LeftSideParameters_C::INTUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, LevelSyncMark) == 0x000348, "Member 'UMyCharaMenu_LeftSideParameters_C::LevelSyncMark' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, LvGrp) == 0x000350, "Member 'UMyCharaMenu_LeftSideParameters_C::LvGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, LvGrpForLevelSync) == 0x000358, "Member 'UMyCharaMenu_LeftSideParameters_C::LvGrpForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, MNDUpDown) == 0x000360, "Member 'UMyCharaMenu_LeftSideParameters_C::MNDUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, PlayerGaugeCommandMenu) == 0x000368, "Member 'UMyCharaMenu_LeftSideParameters_C::PlayerGaugeCommandMenu' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, PlayerGaugeGrpBg01) == 0x000370, "Member 'UMyCharaMenu_LeftSideParameters_C::PlayerGaugeGrpBg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ResilienceUpDown) == 0x000378, "Member 'UMyCharaMenu_LeftSideParameters_C::ResilienceUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, ShowTutorialHelpBtn) == 0x000380, "Member 'UMyCharaMenu_LeftSideParameters_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, StatusGrpBg) == 0x000388, "Member 'UMyCharaMenu_LeftSideParameters_C::StatusGrpBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, STRUpDown) == 0x000390, "Member 'UMyCharaMenu_LeftSideParameters_C::STRUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, STUpDown) == 0x000398, "Member 'UMyCharaMenu_LeftSideParameters_C::STUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForAttackValue) == 0x0003A0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForAttackValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForClassLevelValue) == 0x0003A8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForClassLevelValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForCriticalPowerValue) == 0x0003B0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForCriticalPowerValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForCriticalRateValue) == 0x0003B8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForCriticalRateValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForDefenseValue) == 0x0003C0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForDefenseValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForDEXValue) == 0x0003C8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForDEXValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForINTValue) == 0x0003D0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForINTValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForMNDValue) == 0x0003D8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForMNDValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForResilienceValue) == 0x0003E0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForResilienceValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForSTRValue) == 0x0003E8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForSTRValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForTotalPowerValue) == 0x0003F0, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForTotalPowerValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SwitcherForVITValue) == 0x0003F8, "Member 'UMyCharaMenu_LeftSideParameters_C::SwitcherForVITValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TotalPowerGrp) == 0x000400, "Member 'UMyCharaMenu_LeftSideParameters_C::TotalPowerGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TotalPowerGrpBg01) == 0x000408, "Member 'UMyCharaMenu_LeftSideParameters_C::TotalPowerGrpBg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TotalPowerUpDown) == 0x000410, "Member 'UMyCharaMenu_LeftSideParameters_C::TotalPowerUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TutorialHelpBtnForTotalPower) == 0x000418, "Member 'UMyCharaMenu_LeftSideParameters_C::TutorialHelpBtnForTotalPower' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtAttack) == 0x000420, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtAttackForLevelSync) == 0x000428, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtAttackForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalPowerPercentageForLevelSync) == 0x000430, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalPowerPercentageForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalPowerValue) == 0x000438, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalPowerValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalPowerValueForLevelSync) == 0x000440, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalPowerValueForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalRatePercentageForLevelSync) == 0x000448, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalRatePercentageForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalRateValue) == 0x000450, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalRateValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtCriticalRateValueForLevelSync) == 0x000458, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtCriticalRateValueForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtDefense) == 0x000460, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtDefense' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtDefenseForLevelSync) == 0x000468, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtDefenseForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtDEX) == 0x000470, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtDEXForLevelSync) == 0x000478, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtDEXForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtINT) == 0x000480, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtINTForLevelSync) == 0x000488, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtINTForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtMND) == 0x000490, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtMNDForLevelSync) == 0x000498, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtMNDForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtResilience) == 0x0004A0, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtResilience' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtResilienceForLevelSync) == 0x0004A8, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtResilienceForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtSTR) == 0x0004B0, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtSTRForLevelSync) == 0x0004B8, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtSTRForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtTotalPower) == 0x0004C0, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtTotalPower' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtTotalPowerForLevelSync) == 0x0004C8, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtTotalPowerForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtVIT) == 0x0004D0, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, TxtVITForLevelSync) == 0x0004D8, "Member 'UMyCharaMenu_LeftSideParameters_C::TxtVITForLevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, VITUpDown) == 0x0004E0, "Member 'UMyCharaMenu_LeftSideParameters_C::VITUpDown' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, WBP_ScbPopupButtonParts) == 0x0004E8, "Member 'UMyCharaMenu_LeftSideParameters_C::WBP_ScbPopupButtonParts' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, AchievementList) == 0x0004F0, "Member 'UMyCharaMenu_LeftSideParameters_C::AchievementList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, IsAchievementListOpened) == 0x0004F8, "Member 'UMyCharaMenu_LeftSideParameters_C::IsAchievementListOpened' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, OnClicked_AchievementChangeButton) == 0x000500, "Member 'UMyCharaMenu_LeftSideParameters_C::OnClicked_AchievementChangeButton' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, OnLoadAchievement) == 0x000510, "Member 'UMyCharaMenu_LeftSideParameters_C::OnLoadAchievement' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, SelectedAchievementId) == 0x000520, "Member 'UMyCharaMenu_LeftSideParameters_C::SelectedAchievementId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, OnSaveAchievement) == 0x000528, "Member 'UMyCharaMenu_LeftSideParameters_C::OnSaveAchievement' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, NameSetting) == 0x000538, "Member 'UMyCharaMenu_LeftSideParameters_C::NameSetting' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, OnDetailedStatusClicked) == 0x000540, "Member 'UMyCharaMenu_LeftSideParameters_C::OnDetailedStatusClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, DesignType) == 0x000550, "Member 'UMyCharaMenu_LeftSideParameters_C::DesignType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, IsAchievementAndCharaNameVisible) == 0x000554, "Member 'UMyCharaMenu_LeftSideParameters_C::IsAchievementAndCharaNameVisible' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, LevelSyncColor) == 0x000558, "Member 'UMyCharaMenu_LeftSideParameters_C::LevelSyncColor' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, CurrentStackBEnableType) == 0x000580, "Member 'UMyCharaMenu_LeftSideParameters_C::CurrentStackBEnableType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, IsStackBSyncTotalPower) == 0x000581, "Member 'UMyCharaMenu_LeftSideParameters_C::IsStackBSyncTotalPower' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, _MaxRank) == 0x000584, "Member 'UMyCharaMenu_LeftSideParameters_C::_MaxRank' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, IsDhcBattleTopMenuMode) == 0x000588, "Member 'UMyCharaMenu_LeftSideParameters_C::IsDhcBattleTopMenuMode' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, bIsScbPopupEnable) == 0x000589, "Member 'UMyCharaMenu_LeftSideParameters_C::bIsScbPopupEnable' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LeftSideParameters_C, bIsExpOverflowGrpInvalid) == 0x00058A, "Member 'UMyCharaMenu_LeftSideParameters_C::bIsExpOverflowGrpInvalid' has a wrong offset!");

}

