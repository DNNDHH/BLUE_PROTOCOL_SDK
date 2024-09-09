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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Achievement.LibraryMenu_Achievement_C
	 * Size -> 0x01F0 (FullSize[0x0468] - InheritedSize[0x0278])
	 */
	class ULibraryMenu_Achievement_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimDetailsIn;                                           // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetSwitcher*                                     AchievementData_Switcher;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              AchievementGraffiti;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementProgressIcon_C*              AchievementProgressIcon_1;                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementProgressIcon_C*              AchievementProgressIcon_2;                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementProgressIcon_C*              AchievementProgressIcon_3;                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementProgressIcon_C*              AchievementProgressIcon_4;                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementProgressIcon_C*              AchievementProgressIcon_5;                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_C*                               CategoryList_Type1;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBox;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Frame;                                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         GetRewardBtn;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 GetRewardBtnText;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementDetails_C*                   LibraryMenu_AchievementDetails;                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_AchievementList_C*                      LibraryMenu_AchievementList;                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NoneAchievement_BG;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    NoneAchievement_Desc2_Text;                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    NoneAchievement_Desc_Text;                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Progress;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      RankProgress;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShowTutorialHelpBtn_C*                              ShowTutorialHelpBtn;                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectLargeCategoryListId;                               // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectMediumCategoryListId;                              // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectItemListId;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBindedToOnLoadAchievementDelgate;                      // 0x033C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HI5B[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CheckAchievementId;                                      // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSaving;                                                // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAchievementOnly;                                       // 0x0345(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoadAchievementData;                                   // 0x0346(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoadAchievementData_Bind;                              // 0x0347(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FAchievementMasterData>                      ItemListInfo;                                            // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBAchievementSortType                                     SortType;                                                // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YNJH[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateNewIcon;                                           // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBAchievementLargeCategoryInfo>             LargeCategoryInfo;                                       // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBCharacterAchievementDataInfo>             CharacterAchievementDataList;                            // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectCategoryListId;                                    // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRewardBtnEnable;                                       // 0x0394(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGX0[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMailAttachmentsAcceptWindow_C*                      AttachmentListData;                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRequest;                                               // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P8EU[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMailListAttachmentAcceptedResult_C*                 MailListAttachmentAcceptResultWG;                        // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            RewardAchievementIds;                                    // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             InListItemPadding;                                       // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UUMG_ProductDetailMenu_C*                            ProductDetailMenu;                                       // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker2;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOverLimitDiscard;                                      // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOverLimitSell;                                         // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_30SM[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LoadDateTime;                                            // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsColorChange;                                           // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EXZG[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBMailData>                                 RewardsData;                                             // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      DisableMiddleCategoryList;                               // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, int32_t>                               CategoryCountMax;                                        // 0x0418(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsAchievementPossession(int32_t InFindAchievementId, int32_t B, bool* NewParam);
		class USBPlayerAchievementComponent* GetAchievementComponent();
		void SetLimitedTime(const class FString& TermId, bool* OutValue);
		void UpdateCharacterAchievementDataInfo();
		void CheckAllAchievement(TArray<struct FAchievementMasterData>* outItemListInfo);
		void GetAchievementReward(TArray<struct FSBMailData>* OutMailData);
		void SetRewardBtn();
		void GetCategoryID(int32_t Value, int32_t* outLargeCategoryId, int32_t* outMediumCategoryId);
		class FString GetLargeCategoryName(int32_t inInt);
		class FString GetGroupName(int32_t inInt);
		void SetAchievedDate(int32_t AchievementId, struct FDateTime* InDateTime);
		void GetCharacterAchievementData(int32_t AchievementId, struct FSBCharacterAchievementDataInfo* Data);
		class UWidget* On_ComboBox_GenerateWidget_1(const class FString& item);
		void CheckCategory(const struct FAchievementMasterData& MasterData, bool* Result);
		void UpdateSelectCategoryNewIcon();
		void GetReadAchievementIdList(TArray<int32_t>* ReadAchievementIdList);
		void SetAchievementId(bool IsChecked, int32_t listIndex);
		void ClickListItem(int32_t listIndex);
		void CreateItemList(int32_t InSelectID);
		void CreateCategoryList();
		void Initialize_RankProgress();
		void Initialize();
		void Construct();
		void Destruct();
		void OnLoadAchievementDelegate(bool Result, TArray<struct FSBAchievementInfo> AchievementList);
		void OnSaveAchievementSelectedDelegate_Event(bool Result);
		void BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void RequestAPI_LoadAchievementData();
		void OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode);
		void CallErrorMessage(int32_t RetCode);
		void RequestAPI_GetAchievementRewards();
		void OnGetAchievementRewardsDelegate_Event(bool Result, int32_t RetCode, const struct FSBAchievementRewardData& AchievementRewardData);
		void AttachmentListWindow_Close();
		void OnGetRewardItemEvent();
		void MailListAttachmentAcceptResult_CloseEvent();
		void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward);
		void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
		void BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature(int32_t ItemIndex);
		void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature();
		void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>* outRewardsData, TArray<int32_t>* outRewardsIds);
		void ExecuteUbergraph_LibraryMenu_Achievement(int32_t EntryPoint);
		void UpdateNewIcon__DelegateSignature(int32_t MenuButtonListId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
