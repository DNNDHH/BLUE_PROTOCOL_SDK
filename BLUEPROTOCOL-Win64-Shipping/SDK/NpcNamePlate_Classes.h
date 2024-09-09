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
	 * WidgetBlueprintGeneratedClass NpcNamePlate.NpcNamePlate_C
	 * Size -> 0x00D8 (FullSize[0x0360] - InheritedSize[0x0288])
	 */
	class UNpcNamePlate_C : public USBNamePlateWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    QuestIconEmphasis;                                       // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CursorInOut;                                             // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            FacilityGrp;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Star1;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Star2;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Star3;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        NameGrp;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObjectSelectCursor_C*                               ObjectSelectCursor;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        QuestCanvasPanel;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuestIcon_C*                                        QuestIcon;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            QuestMarkGrp;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_NPCFacilityMark_Icon_C*                         UMG_NPCFacilityMark_Icon;                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                CurrentText;                                             // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class ASBMobCharacter*                                     OwnerNPCCharacter;                                       // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EQuestIconType>                                     IgnoreIconTypes;                                         // 0x0338(0x0010) Edit, BlueprintVisible
		bool                                                       bSystemVisible;                                          // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HudVisible;                                              // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IntaractEffectVisible;                                   // 0x034A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0P60[0x1];                                   // 0x034B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QuestIndex;                                              // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRouteGuideTarget;                                     // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsEnhancedQuestIcon;                                    // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_619H[0x6];                                   // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        QuestIconTimerEventHandle;                               // 0x0358(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetRouteGuideQuestId(int32_t* QuestIndex);
		void SetQuestIconScaleByDistance();
		void GetPlayerDistance(float* Distance);
		void CursorInOutAnim(bool bin);
		void CheckVisibility();
		void UpdateQuest();
		void SetText(const class FText& InText);
		void OnQuestListDelegete_Reset(TArray<struct FUnlockedQuestInfo> QuestList);
		void OnAcceptQuestDelegate_Reset(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
		void OnCancelQuestDelegate__1(bool Result, int32_t QuestIndex);
		void OnUpdateQuestProgressDelegate__1(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
		void OnCompleteQuestDelegate__3(int32_t RetCode, int32_t QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData);
		void OnAcceptedQuestListDelegete__1();
		void OnBeginPlay(class ASBMobCharacter* NpcCharacter);
		void OnEndPlay();
		void OnAdventurerRankDelegate_Event_1(int32_t InRetCode);
		void OnSetKeyValue_Event(bool Result);
		void OnLevelUp_Event(int32_t InPrevLevel, int32_t InCurLevel, const struct FSBExtraExpParse& InExtraExpParse);
		void ClassChangeNotify_Event(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
		void OnLoadRouteGuideInfo(class UObject* Sender, class UObject* Param);
		void OnChangeRouteGuide(class UObject* Sender, class UObject* Param);
		void Construct();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void SetNPCFacility(ESBFacilityType IconType);
		void SetNpcCharacter_Internal(class ASBMobCharacter* InNpcCharacter);
		void OnChangeBalloonVisible(bool bVsiible);
		void SetDepth(float InDepth);
		void SetChargeMax();
		void AutoChangeInvisible();
		void AutoChangeVisible();
		void Destruct();
		void UnbindChangeBalloonVisible();
		void SetInteractionTargetVisibility(bool bInVisibility);
		void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
		void FadeOutFinishSelectCursor(bool IsFadeIn);
		void OnDisplayStart();
		void QuestIconUpdateTimerEvent();
		void ExecuteUbergraph_NpcNamePlate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
