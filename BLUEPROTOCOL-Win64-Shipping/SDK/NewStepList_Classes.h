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
	 * WidgetBlueprintGeneratedClass NewStepList.NewStepList_C
	 * Size -> 0x0072 (FullSize[0x0312] - InheritedSize[0x02A0])
	 */
	class UNewStepList_C : public USBStepList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOutTitle;                                              // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    out3;                                                    // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    out2;                                                    // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    out1;                                                    // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    in3;                                                     // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    in2;                                                     // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    In1;                                                     // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CPVisibleSetting;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextKey;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextKeyBack;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextTitle;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextTitleBack;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        SetupListEventHandle;                                    // 0x0308(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       OpenStorageShop;                                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StorageItemUpdate;                                       // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsPlayAnim();
		void PlayAnim();
		void OnSetupKeyGuide();
		void OnSetupTitle(const class FName& TitleTextId, const class FName& TitleBackTextID);
		void Unbind();
		void Bind();
		bool IsPlayAnimationOut3();
		bool IsPlayAnimationOut2();
		bool IsPlayAnimationOut1();
		bool IsPlayAnimOut();
		bool IsPlayAnimationIn3();
		bool IsPlayAnimationIn2();
		bool IsPlayAnimationIn1();
		bool IsPlayAnimIn();
		void PlayAnimationOut3();
		void PlayAnimationOut2();
		void PlayAnimationOut1();
		void PlayAnimationIn3();
		void PlayAnimationIn2();
		void PlayAnimationIn1();
		void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
		void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
		void BindAdventureBoardComponent();
		void UnbindAdventureBoardComponent();
		void OnChangeFavoriteAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, int32_t InRetCode);
		void OnUpdateAdventureBoard(int32_t RetCode);
		void OnLoadAdventureBoard(int32_t RetCode);
		void OnAchievementedAdventureBoardPanel(TArray<struct FSBAdventureBoardPanelParam> PanelList, int32_t InPanelId, int32_t RetCode);
		void OnComplateAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode);
		void OnChangeActiveAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, int32_t InRetCode);
		void OnGetRewardAdventureBoardPanel(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode);
		void OnGetRewardAdventureBoardAllPanel(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode);
		void OnChangeHUDDrawAdventureBoard(const struct FSBAdventureBoardParam& InBoardParam, int32_t InRetCode);
		void BindWishlist();
		void UnbindWishlist();
		void OnUpdateWishlist();
		void AddReceiver();
		void RemoveReceiver();
		void OnAcceptQuest(class UObject* Sender, class UObject* Param);
		void OnUpdateQuestProgress(class UObject* Sender, class UObject* Param);
		void OnCompleteQuest(class UObject* Sender, class UObject* Param);
		void OnCancelQuest(class UObject* Sender, class UObject* Param);
		void QuestListDebug(class UObject* Sender, class UObject* Param);
		void OnUpdateRouteGuideSetting(class UObject* Sender, class UObject* Param);
		void OnLoadRouteGuideQuestId(class UObject* Sender, class UObject* Param);
		void CustomEvent_1(class UObject* Sender, class UObject* Param);
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void OnStartNFTArea(class UObject* Sender, class UObject* Param);
		void OnEndNFTArea(class UObject* Sender, class UObject* Param);
		void BindPlayer();
		void UnbindPlayer();
		void BindGetMyCharaInfo();
		void UnbindGetMyCharaInfo();
		void OnGetMyCharaInfo(bool Result);
		void BindQuestComponent();
		void UnbindQuestComponent();
		void OnAcceptedQuestList();
		void BindCommonComponent();
		void UnbindCommonComponent();
		void OnSaveQuestCheckList(bool bWasSuccessful);
		void BindWarehouseAbilityComponent();
		void UnbindWarehouseAbilityComponent();
		void OnWarehouseAbilityUpdate(TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo);
		void BindInterruptQuestComponent();
		void UnbindInterruptQuestComponent();
		void OnJoinInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst);
		void OnSuccessInterruptQuest(const class FName& InQuestId, bool InSuccess);
		void OnFailedInterruptQuest(const class FName& InQuestId);
		void OnUpdateProgressInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent);
		void OnRepInterruptQuest(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
		void OnLeaveInterruptQuest(const class FName& InQuestId);
		void BindAdventurerComponent();
		void UnbindAdventurerComponent();
		void OnAdventurerRankChange(int32_t InRetCode);
		void BindGameState();
		void UnbindGameState();
		void OnClearConditionChange();
		void OnClearConditionUpdateProgress(const struct FDungeonClearConditionProgressItemInfo& InProgressItem, int32_t InStepNum, int32_t InProgressIndex);
		void OnClearConditionChangeStep(int32_t InCurStep);
		void OnClearConditionComplete(const class FName& InDungeonName);
		void BindUpdateItems();
		void UnbindUpdateItems();
		void OnUpdateItems();
		void CustomEvent_3(class UObject* Sender, class UObject* Param);
		void CustomEvent_4(class UObject* Sender, class UObject* Param);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BindUIVisible();
		void UnbindUIVisible();
		void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void RequestSetupList();
		void CustomEvent();
		void Construct();
		void ExecuteUbergraph_NewStepList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
