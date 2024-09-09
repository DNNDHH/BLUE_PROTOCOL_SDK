#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass LayoutableHUD.LayoutableHUD_C
	 * Size -> 0x0220 (FullSize[0x0498] - InheritedSize[0x0278])
	 */
	class ULayoutableHUD_C : public USBLayoutableHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOut;                                                   // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Bg_Bottm;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBossHPGaugeList_C*                                  BossNameList;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          BufIcons;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ChatLogWindowTempList01;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ChatLogWindowTempList02;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ChatLogWindowTempList03;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ContentAction;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          DsState;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             EditModeBG;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FocusBoader;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          FocusTarget;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          FPSDisplay;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          HateAlert;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHitFlash_C*                                         HitFlash;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HudLayoutTitle;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ItemSelector;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MenuDescription;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          MiniMap;                                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMountHPSTGauge_C*                                   MountHPSTGauge;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          MountShortcut;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P006LevelGauge;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P007ComboGauge;                                          // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P011MPGauge;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P011StackM;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P012GlitterGauge;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P012ShieldGauge;                                         // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P019BoostCartridge;                                      // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P020CountIcon;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P020Desire;                                              // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P021CountIcon;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          P021Gauge;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PartyChain;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PartyInfo;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PlayerEGauge;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PlayerHPGauge;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PlayerName;                                              // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          PlayerSTGauge;                                           // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Reticle;                                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          ShortcutRing;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          SkillInfo;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          StepList;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMovable_C*                                          WholeMap;                                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UMovable_C*>                                  MovableObject;                                           // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             CloseOnDown;                                             // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ChangeEditMode;                                          // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FAnchors>                                    InitialAnchors;                                          // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector2D>                                   InitialPosition;                                         // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector2D>                                   InitChatTempLogWindowSize;                               // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMovable_C*>                                  ChatTempLogs;                                            // 0x0438(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            ZOrders;                                                 // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ELayoutableHUD_FocusableWidets                             TutorialFocus;                                           // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JIPB[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PresetData;                                              // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bShowChat;                                               // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAutoSave;                                               // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEditMode;                                               // 0x0472(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOpenMenu;                                               // 0x0473(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFocusShow;                                              // 0x0474(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCurVisibility;                                          // 0x0475(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInitializeLoad;                                         // 0x0476(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimationPlaing_AnimIn;                                  // 0x0477(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bApply;                                                  // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q34W[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHudPresetSelect_C*                                  TempPresetSelectWidget;                                  // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPresetSelect;                                           // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEditContinue;                                           // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQMJ[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         DialogWidget;                                            // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USBShortcutRingWidget* GetShortcutRing();
		class USBStepList* GetNewStepListWidget();
		void ReleaseDialogWidget();
		class USBPlayerGaugeBaseWidget* GetPlayerGaugeBaseWidget();
		class USBWholeMap* GetWholemapWidget();
		class USBMiniMapWidget* GetMinimapWidget();
		void ItemSelectorMoveRightRepeat();
		void ItemSelectorMoveRightPress();
		void ItemSelectorMoveLeftRepeat();
		void ItemSelectorMoveLeftPress();
		void ItemSelectorExe();
		void NextStepList();
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void EditMap(float PressTime, bool* Result);
		void SwitchingMap();
		void ChatTempLogsInit();
		void GetHitFlash(class UHitFlash_C** HitFlash);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		ESlateVisibility Get_PartyInfo_Visibility_1();
		void ZSort(class UUserWidget* SortWidget);
		void CreateClippingAnchors(struct FAnchors* Anchors);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CollectMovealObject();
		void Term();
		void Init();
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void BindForceCloseEvent();
		void UnbindForceCloseEvent();
		void OnRequestTerm(bool bForce);
		void OnClosedMenuDetected(class UObject* Sender, class UObject* Param);
		void BindDeadCheck();
		void UnBindDeadCheck();
		void OnDeadPlayer(class UObject* Sender, class UObject* Param);
		void BindVisibleSettingChangeDelegate();
		void UnbindVisibleSettingChangeDelegate();
		void OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindWholeMap();
		void UnbindWholeMap();
		void OnOpenWholeMapEditWindow();
		void OnCloseWholeMapEditWindow();
		void OpenContinueCheckDialog();
		void ContinueDialogFinish(EDialogResult Result);
		void PresetSelectContinueCheck();
		void PresetSelectContinueCheckFinish(EDialogResult Result);
		void PresetEndCheck();
		void PresetEndCheckFinish(bool bIsCancel);
		void BindShortcutRing();
		void UnbindShortcutRing();
		void OnOpenShortcutRing();
		void OnCloseShortcutRing();
		void OnOpenShortcutRingEdit();
		void OnCloseShortcutRingEdit();
		void Chat_Construct();
		void SetChatLogEditMode(bool InEdit);
		void LoadChatTempLogWindowSize();
		void SaveChatTempLogWindowSize();
		void SetEditModeWidgets(bool IsEditMode);
		void StepListEditMode(bool bEditMode);
		void PartyInfoEditMode(bool bEditMode);
		void SetTutorialPlayerGaugeHighlight(EPlayerGaugeHighlight HighLight);
		void FocusTargetEditMode(bool IsEditMode);
		void SetFocusActor(class AActor* Actor);
		void SetBufIconEditMode(bool IsEdit);
		void SetTutorialSkillHighlight(ESkillPaletteTutorialFocus FocusMode);
		void SetTutorialSpecialGaugeHighlight();
		void SetTutorialImagineGaugeHighlight();
		void KeyGuideEditMode(bool IsEditMode);
		void HPSTEditMode(bool IsEditMode);
		void SkillInfoEditMode(bool IsEditMode);
		void ShortcutRingEditMode(bool bIsEditMode);
		void SetEditModeClassHuds(bool EditMode);
		void P007EditMode(bool Condition);
		void ClassEditModeDisable();
		void P011EditMode(bool Condition);
		void DesignMode();
		void P012EditMode(bool Condition);
		void P019EditMode(bool bEditMode);
		void P020EditMode(bool Condition);
		void MiniMapEditMode(bool IsEditMode);
		void P006EditMode(bool Condition);
		void ReticleEditMode(bool EditMode);
		void P021EditMode(bool Condition);
		void ItemSelectorEditMode(bool bIsEditMode);
		void ContentActionEditMode(bool bIsEditMode);
		void SaveHudRayoutPosition(class UMovable_C* ref, ESBCustomHudLayoutSlot Slot);
		void LoadHudRayoutPosition(class UMovable_C* ref, ESBCustomHudLayoutSlot HudSlot);
		void SaveToFile();
		void LoadFromFile();
		void OnExitEditMode();
		void Event_OpenMenu();
		void Event_CloseMenu();
		void OnUpdateHudBeltVisible();
		void InitGeneral();
		void UnbindOnUpdateHudBeltVisible();
		void LoadPreset(ELayoutPresetTypes eLayoutPreset);
		void PresetLoad();
		void LoadCustomSave(ESBCustomHudLayoutSlot LoadCustomSlot);
		void ShowCustomSlotMenu();
		void SaveCustomSlot(ESBCustomHudLayoutSlot Result);
		void OpenInitSelect();
		void InitLoadPreset();
		void OnFinishedPreset(bool bIsCancel);
		void Event_LayoutMenuClose();
		void LayoutMenuExit();
		void ApplyPreset();
		void CloseHudCustomMenu(bool bIsCancel);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void SetEditMode(bool bEditMode);
		void CheckVisibleDescription();
		void Reinit();
		void ResetZOrderForBaseOrders();
		void FocusForTutorialWidget(ELayoutableHUD_FocusableWidets FocusWidget);
		void TitorialHudInit();
		void Destruct();
		void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2();
		void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3();
		void AnimationFinish();
		void SetVisibleDescription(ESlateVisibility Visibility);
		void ExecuteUbergraph_LayoutableHUD(int32_t EntryPoint);
		void ChangeEditMode__DelegateSignature(bool bIsEditMode);
		void CloseOnDown__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
