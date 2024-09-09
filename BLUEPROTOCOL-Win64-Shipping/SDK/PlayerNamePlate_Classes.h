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
	 * WidgetBlueprintGeneratedClass PlayerNamePlate.PlayerNamePlate_C
	 * Size -> 0x0129 (FullSize[0x0421] - InheritedSize[0x02F8])
	 */
	class UPlayerNamePlate_C : public USBPlayerNamePlateWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CursorInOut;                                             // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          AchievementNameLabel;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_3;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Name;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildTag_C*                                         GuildTag;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPBg;                                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPCur;                                                   // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPCurSize;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPLossSize;                                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPPrevSize;                                              // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UJointGestureIcon_C*                                 JointGestureIcon;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        NameGrp;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NameLabel;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObjectSelectCursor_C*                               ObjectSelectCursor;                                      // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPartyIcon_C*                                        PartyIcon;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTensionTagIcon_C*                                   TensionTagIcon;                                          // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_OptionRoot;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WizardRecoverUI;                                         // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeDrawSize;                                        // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      WidgetScaleDuringHealChain;                              // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LifeGaugeCurDefaultColor;                                // 0x03C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LifeGaugeCurHealChainColor;                              // 0x03D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentScale;                                            // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowTargetCursor;                                       // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHealChainUIVisible;                                    // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55S6[0x6];                                   // 0x03EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeScale;                                           // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CurrentName;                                             // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      HpGaugeDefaultWidth;                                     // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrHpGaugeWidthRate;                                    // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCanvasPanelSlot*                                    HPSlot;                                                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IntaractEffectVisible;                                   // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetBuffIcon();
		void SetupBuffIcon(class ASBCharacter* InCharacter);
		void UpdateFriendIcon(TArray<struct FPlayerProfileSummaryData>* InPlayerProfileSummaryData);
		void IsInteractionUIVisibility(bool* IsVisibilty);
		void CursorInOutAnim(bool bin);
		void GetResurrectionRemainTimeRate(float* Rate);
		void SetLifeGaugeCurTintColor(const struct FLinearColor& TintColor);
		void UpdatePrevLifeGaugeBP(float DeltaTime);
		void InitOptionConnect();
		void TermOptionConnect();
		void OnChangeNamePlateOption(bool bIsShow);
		void InitOptionValue();
		void UpdateOptionNamePlate();
		void InitOptions();
		void BindTeamTag(bool bIsShow);
		void SetAchievementSelected(int32_t InAchievementSelected);
		void InAwake(const class FName& InQuestId);
		void JoinIninterrupt(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst);
		void Leaveout(const class FName& InQuestId);
		void Repinterrupt(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
		void RepTeam();
		void SucInterruptQuest(const class FName& InQuestId, bool InSuccess);
		void UpdateProg(class USBPlayerInterruptQuestComponent* InComponent);
		void BeginBindParty();
		void PartyUnbindDelegates();
		void UnbindAwakeInterruptQuestDelegete();
		void OnUpdateNameColor(bool bParty);
		void Construct();
		void SetName(const class FString& Name);
		void SetHpRate(float HPRate);
		void OnSetHealChainUIVisibility(bool IsVisible);
		void OnChangeLifeGaugeColor(bool IsHealChainColor);
		void SetTeamNumber(int32_t TeamNumber);
		void SetCharacter_Internal(class ASBCharacter* InCharacter);
		void SetHostility(ESBHostility Hostility);
		void SetInitialHpRate(float HPRate);
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void SetNameVisibility(bool bInVisibility);
		void SetHpGaugeVisibility(bool bInVisibility);
		void SetHpGaugeWidthRate(float InWidthRate);
		void Destruct();
		void SetDepth(float InDepth);
		void SetChargeMax();
		void AutoChangeInvisible();
		void AutoChangeVisible();
		void OnFinishedFadeAnime(bool IsFadeIn);
		void UnbindPlayerCommunicateDelegate();
		void UnbindOnClientRecieveBattleStatusDelegete();
		void UnbindVisibleSettingChangeDelegate();
		void SetInteractionTargetVisibility(bool bInVisibility);
		void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
		void OnDisplayStart();
		void PlayerStateSettingAfter();
		void CustomEvent();
		void PlayerStateRelationshipSetting();
		void CustomEvent_2(ESBTensionTagType TensionTag);
		void CustomEvent_3(TArray<struct FPlayerProfileSummaryData> PlayerProfileSummaryData);
		void OnUpdatenSimplycityPartyOn();
		void UpdateTension(ESBTensionTagType InTensionTagId);
		void ExecuteUbergraph_PlayerNamePlate(int32_t EntryPoint);
		void OnChangeScale__DelegateSignature(float Scale);
		void OnChangeDrawSize__DelegateSignature(const struct FVector2D& DrawSize);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
