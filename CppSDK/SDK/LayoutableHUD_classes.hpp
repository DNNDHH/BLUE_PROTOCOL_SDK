#pragma once

 

// Package: LayoutableHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerGaugeHighlight_structs.hpp"
#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "LayoutableHUD_FocusableWidets_structs.hpp"
#include "SkillPaletteTutorialFocus_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LayoutableHUD.LayoutableHUD_C
// 0x0210 (0x0488 - 0x0278)
class ULayoutableHUD_C final : public USBLayoutableHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg_Bottm;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBossHPGaugeList_C*                     BossNameList;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             BufIcons;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             ChatLogWindowTempList01;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             ChatLogWindowTempList02;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             ChatLogWindowTempList03;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             DsState;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EditModeBG;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                FocusBoader;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             FocusTarget;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             FPSDisplay;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             HateAlert;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitFlash_C*                            HitFlash;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HudLayoutTitle;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             ItemSelector;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MenuDescription;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             MiniMap;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMountHPSTGauge_C*                      MountHPSTGauge;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             MountShortcut;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P006LevelGauge;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P007ComboGauge;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P011MPGauge;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P011StackM;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P012GlitterGauge;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P012ShieldGauge;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P019BoostCartridge;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P020CountIcon;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P020Desire;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             P021Gauge;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PartyChain;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PartyInfo;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PlayerEGauge;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PlayerHPGauge;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PlayerName;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             PlayerSTGauge;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reticle;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             ShortcutRing;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             SkillInfo;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             StepList;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovable_C*                             WholeMap;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMovable_C*>                     MovableObject;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             CloseOnDown;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ChangeEditMode;                                    // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FAnchors>                       InitialAnchors;                                    // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      InitialPosition;                                   // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      InitChatTempLogWindowSize;                         // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMovable_C*>                     ChatTempLogs;                                      // 0x0428(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                 ZOrders;                                           // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ELayoutableHUD_FocusableWidets                TutorialFocus;                                     // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74E8[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PresetData;                                        // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bShowChat;                                         // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAutoSave;                                         // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEditMode;                                         // 0x0462(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOpenMenu;                                         // 0x0463(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFocusShow;                                        // 0x0464(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCurVisibility;                                    // 0x0465(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInitializeLoad;                                   // 0x0466(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnimationPlaing_AnimIn;                            // 0x0467(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bApply;                                            // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E9[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHudPresetSelect_C*                     TempPresetSelectWidget;                            // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPresetSelect;                                     // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEditContinue;                                     // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74EA[0x6];                                     // 0x047A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            DialogWidget;                                      // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CloseOnDown__DelegateSignature();
	void ChangeEditMode__DelegateSignature(bool bisEditMode);
	void ExecuteUbergraph_LayoutableHUD(int32 EntryPoint);
	void SetVisibleDescription(ESlateVisibility Param_Visibility);
	void AnimationFinish();
	void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_1();
	void Destruct();
	void TitorialHudInit();
	void FocusForTutorialWidget(ELayoutableHUD_FocusableWidets FocusWidget);
	void ResetZOrderForBaseOrders();
	void Reinit();
	void CheckVisibleDescription();
	void SetEditMode(bool Param_bEditMode);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CloseHudCustomMenu(bool bIsCancel);
	void ApplyPreset();
	void LayoutMenuExit();
	void Event_LayoutMenuClose();
	void OnFinishedPreset(bool bIsCancel);
	void InitLoadPreset();
	void OpenInitSelect();
	void Save_CustomSlot(ESBCustomHudLayoutSlot Result);
	void Show_Custom_SlotMenu();
	void LoadCustomSave(ESBCustomHudLayoutSlot LoadCustomSlot);
	void PresetLoad();
	void LoadPreset(ELayoutPresetTypes ELayoutPreset);
	void UnbindOnUpdateHudBeltVisible();
	void InitGeneral();
	void OnUpdateHudBeltVisible();
	void Event_CloseMenu();
	void Event_OpenMenu();
	void OnExitEditMode();
	void LoadFromFile();
	void SaveToFile();
	void LoadHudRayoutPosition(class UMovable_C* Ref, ESBCustomHudLayoutSlot HudSlot);
	void SaveHudRayoutPosition(class UMovable_C* Ref, const ESBCustomHudLayoutSlot Param_Slot);
	void ContentActionEditMode(bool bisEditMode);
	void ItemSelectorEditMode(bool bisEditMode);
	void P021EditMode(bool Condition);
	void ReticleEditMode(bool EditMode);
	void P006EditMode(bool Condition);
	void MiniMapEditMode(bool IsEditMode);
	void P020EditMode(bool Condition);
	void P019_EditMode(bool Param_bEditMode);
	void P012EditMode(bool Condition);
	void DesignMode();
	void P011EditMode(bool Condition);
	void Class_EditMode_Disable();
	void P007EditMode(bool Condition);
	void SetEditModeClassHuds(bool EditMode);
	void ShortcutRingEditMode(bool bisEditMode);
	void SkillInfoEditMode(bool IsEditMode);
	void HPSTEditMode(bool IsEditMode);
	void KeyGuideEditMode(bool IsEditMode);
	void SetTutorialImagineGaugeHighlight();
	void SetTutorialSpecialGaugeHighlight();
	void SetTutorialSkillHighlight(ESkillPaletteTutorialFocus FocusMode);
	void SetBufIconEditMode(bool IsEdit);
	void SetFocusActor(class AActor* Actor);
	void FocusTargetEditMode(bool IsEditMode);
	void SetTutorialPlayerGaugeHighlight(EPlayerGaugeHighlight HighLight);
	void PartyInfoEditMode(bool Param_bEditMode);
	void StepListEditMode(bool Param_bEditMode);
	void SetEditModeWidgets(bool IsEditMode);
	void SaveChatTempLogWindowSize();
	void LoadChatTempLogWindowSize();
	void SetChatLogEditMode(bool InEdit);
	void Chat_Construct();
	void OnCloseShortcutRingEdit();
	void OnOpenShortcutRingEdit();
	void OnCloseShortcutRing();
	void OnOpenShortcutRing();
	void UnbindShortcutRing();
	void BindShortcutRing();
	void PresetEndCheckFinish(bool bIsCancel);
	void PresetEndCheck();
	void PresetSelectContinueCheckFinish(EDialogResult Result);
	void PresetSelectContinueCheck();
	void ContinueDialogFinish(EDialogResult Result);
	void OpenContinueCheckDialog();
	void OnCloseWholeMapEditWindow();
	void OnOpenWholeMapEditWindow();
	void UnbindWholeMap();
	void BindWholeMap();
	void OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindVisibleSettingChangeDelegate();
	void BindVisibleSettingChangeDelegate();
	void OnDeadPlayer(class UObject* Sender, class UObject* Param);
	void UnBind_DeadCheck();
	void Bind_DeadCheck();
	void OnClosedMenuDetected(class UObject* Sender, class UObject* Param);
	void OnRequestTerm(bool bForce);
	void UnbindForceCloseEvent();
	void BindForceCloseEvent();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void Init();
	void Term();
	void CollectMovealObject();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void CreateClippingAnchors(struct FAnchors* Anchors);
	void ZSort(class UUserWidget* SortWidget);
	ESlateVisibility Get_PartyInfo_Visibility_0();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void GetHitFlash(class UHitFlash_C** Param_HitFlash);
	void ChatTempLogsInit();
	void SwitchingMap();
	void EditMap(float PressTime, bool* Result);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void NextStepList();
	void ItemSelectorExe();
	void ItemSelectorMoveLeftPress();
	void ItemSelectorMoveLeftRepeat();
	void ItemSelectorMoveRightPress();
	void ItemSelectorMoveRightRepeat();
	void ShortcutRingOpen();
	void ShortcutRingClose();
	void ShortcutRingSwitch();
	void ReleaseDialogWidget();
	void ShortcutRingExecuteF5();
	void ShortcutRingExecuteF6();
	void ShortcutRingExecuteF7();
	void ShortcutRingExecuteF8();
	void ShortcutRingExecuteF9();
	void ShortcutRingExecuteF10();
	void ShortcutRingExecuteF11();
	void ShortcutRingExecuteF12();

	class USBMiniMapWidget* GetMinimapWidget() const;
	class USBWholeMap* GetWholemapWidget() const;
	class USBShortcutRingWidget* GetShortcutRing() const;
	class USBPlayerGaugeBaseWidget* GetPlayerGaugeBaseWidget() const;
	class USBStepList* GetNewStepListWidget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LayoutableHUD_C">();
	}
	static class ULayoutableHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULayoutableHUD_C>();
	}
};
static_assert(alignof(ULayoutableHUD_C) == 0x000008, "Wrong alignment on ULayoutableHUD_C");
static_assert(sizeof(ULayoutableHUD_C) == 0x000488, "Wrong size on ULayoutableHUD_C");
static_assert(offsetof(ULayoutableHUD_C, UberGraphFrame) == 0x000278, "Member 'ULayoutableHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, InOut) == 0x000280, "Member 'ULayoutableHUD_C::InOut' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, Bg_Bottm) == 0x000288, "Member 'ULayoutableHUD_C::Bg_Bottm' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, BossNameList) == 0x000290, "Member 'ULayoutableHUD_C::BossNameList' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, BufIcons) == 0x000298, "Member 'ULayoutableHUD_C::BufIcons' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ChatLogWindowTempList01) == 0x0002A0, "Member 'ULayoutableHUD_C::ChatLogWindowTempList01' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ChatLogWindowTempList02) == 0x0002A8, "Member 'ULayoutableHUD_C::ChatLogWindowTempList02' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ChatLogWindowTempList03) == 0x0002B0, "Member 'ULayoutableHUD_C::ChatLogWindowTempList03' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, DsState) == 0x0002B8, "Member 'ULayoutableHUD_C::DsState' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, EditModeBG) == 0x0002C0, "Member 'ULayoutableHUD_C::EditModeBG' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, FocusBoader) == 0x0002C8, "Member 'ULayoutableHUD_C::FocusBoader' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, FocusTarget) == 0x0002D0, "Member 'ULayoutableHUD_C::FocusTarget' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, FPSDisplay) == 0x0002D8, "Member 'ULayoutableHUD_C::FPSDisplay' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, HateAlert) == 0x0002E0, "Member 'ULayoutableHUD_C::HateAlert' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, HitFlash) == 0x0002E8, "Member 'ULayoutableHUD_C::HitFlash' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, HudLayoutTitle) == 0x0002F0, "Member 'ULayoutableHUD_C::HudLayoutTitle' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ItemSelector) == 0x0002F8, "Member 'ULayoutableHUD_C::ItemSelector' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, MenuDescription) == 0x000300, "Member 'ULayoutableHUD_C::MenuDescription' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, MiniMap) == 0x000308, "Member 'ULayoutableHUD_C::MiniMap' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, MountHPSTGauge) == 0x000310, "Member 'ULayoutableHUD_C::MountHPSTGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, MountShortcut) == 0x000318, "Member 'ULayoutableHUD_C::MountShortcut' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P006LevelGauge) == 0x000320, "Member 'ULayoutableHUD_C::P006LevelGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P007ComboGauge) == 0x000328, "Member 'ULayoutableHUD_C::P007ComboGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P011MPGauge) == 0x000330, "Member 'ULayoutableHUD_C::P011MPGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P011StackM) == 0x000338, "Member 'ULayoutableHUD_C::P011StackM' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P012GlitterGauge) == 0x000340, "Member 'ULayoutableHUD_C::P012GlitterGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P012ShieldGauge) == 0x000348, "Member 'ULayoutableHUD_C::P012ShieldGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P019BoostCartridge) == 0x000350, "Member 'ULayoutableHUD_C::P019BoostCartridge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P020CountIcon) == 0x000358, "Member 'ULayoutableHUD_C::P020CountIcon' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P020Desire) == 0x000360, "Member 'ULayoutableHUD_C::P020Desire' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, P021Gauge) == 0x000368, "Member 'ULayoutableHUD_C::P021Gauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PartyChain) == 0x000370, "Member 'ULayoutableHUD_C::PartyChain' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PartyInfo) == 0x000378, "Member 'ULayoutableHUD_C::PartyInfo' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PlayerEGauge) == 0x000380, "Member 'ULayoutableHUD_C::PlayerEGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PlayerHPGauge) == 0x000388, "Member 'ULayoutableHUD_C::PlayerHPGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PlayerName) == 0x000390, "Member 'ULayoutableHUD_C::PlayerName' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PlayerSTGauge) == 0x000398, "Member 'ULayoutableHUD_C::PlayerSTGauge' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, Reticle) == 0x0003A0, "Member 'ULayoutableHUD_C::Reticle' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ShortcutRing) == 0x0003A8, "Member 'ULayoutableHUD_C::ShortcutRing' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, SkillInfo) == 0x0003B0, "Member 'ULayoutableHUD_C::SkillInfo' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, StepList) == 0x0003B8, "Member 'ULayoutableHUD_C::StepList' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, WholeMap) == 0x0003C0, "Member 'ULayoutableHUD_C::WholeMap' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, MovableObject) == 0x0003C8, "Member 'ULayoutableHUD_C::MovableObject' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, CloseOnDown) == 0x0003D8, "Member 'ULayoutableHUD_C::CloseOnDown' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ChangeEditMode) == 0x0003E8, "Member 'ULayoutableHUD_C::ChangeEditMode' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, InitialAnchors) == 0x0003F8, "Member 'ULayoutableHUD_C::InitialAnchors' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, InitialPosition) == 0x000408, "Member 'ULayoutableHUD_C::InitialPosition' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, InitChatTempLogWindowSize) == 0x000418, "Member 'ULayoutableHUD_C::InitChatTempLogWindowSize' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ChatTempLogs) == 0x000428, "Member 'ULayoutableHUD_C::ChatTempLogs' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, ZOrders) == 0x000438, "Member 'ULayoutableHUD_C::ZOrders' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, TutorialFocus) == 0x000448, "Member 'ULayoutableHUD_C::TutorialFocus' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, PresetData) == 0x000450, "Member 'ULayoutableHUD_C::PresetData' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bShowChat) == 0x000460, "Member 'ULayoutableHUD_C::bShowChat' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bAutoSave) == 0x000461, "Member 'ULayoutableHUD_C::bAutoSave' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bEditMode) == 0x000462, "Member 'ULayoutableHUD_C::bEditMode' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bOpenMenu) == 0x000463, "Member 'ULayoutableHUD_C::bOpenMenu' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bFocusShow) == 0x000464, "Member 'ULayoutableHUD_C::bFocusShow' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bCurVisibility) == 0x000465, "Member 'ULayoutableHUD_C::bCurVisibility' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bInitializeLoad) == 0x000466, "Member 'ULayoutableHUD_C::bInitializeLoad' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, AnimationPlaing_AnimIn) == 0x000467, "Member 'ULayoutableHUD_C::AnimationPlaing_AnimIn' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bApply) == 0x000468, "Member 'ULayoutableHUD_C::bApply' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, TempPresetSelectWidget) == 0x000470, "Member 'ULayoutableHUD_C::TempPresetSelectWidget' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bPresetSelect) == 0x000478, "Member 'ULayoutableHUD_C::bPresetSelect' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, bEditContinue) == 0x000479, "Member 'ULayoutableHUD_C::bEditContinue' has a wrong offset!");
static_assert(offsetof(ULayoutableHUD_C, DialogWidget) == 0x000480, "Member 'ULayoutableHUD_C::DialogWidget' has a wrong offset!");

}

