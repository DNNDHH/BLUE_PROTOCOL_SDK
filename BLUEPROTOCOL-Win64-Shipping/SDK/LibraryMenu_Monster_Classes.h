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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Monster.LibraryMenu_Monster_C
	 * Size -> 0x01C4 (FullSize[0x046C] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_Monster_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimSwitchWindow;                                        // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimNameWindow;                                          // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ModelFadeIn2;                                            // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ModelFadeIn;                                             // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimPreviewClose;                                        // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimPreviewOpen;                                         // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               ButtonFullScreen_ModelView;                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               ButtonFullScreen_MonsterDetails;                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_EnemyCaptureStudio_C*                   CaptureStudio;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_C*                               CategoryList_Type1;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate_115;                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EnemyImagePanel;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_List_C*                                 LibraryMenu_List;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Monster_NameWindow_C*                   LibraryMenu_Monster_NameWindow;                          // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Monster_SwitchWindow_C*                 LibraryMenu_Monster_SwitchWindow;                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Search_C*                               LibraryMenu_Search;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ListSelectTextOverlay;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ModelChangeButton;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ModelChangeText;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ModelImage;                                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ModelViewWindow;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PreviewImage;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    SBRichTextBlock_143;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TextLine;                                                // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_ModelView;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_MonsterDetails;                                // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ViewWindowBG;                                            // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_140;                                      // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         WindowOpenButton;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         WindowOpenButton_3;                                      // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBTextTableHash                                    SelectCategoryId;                                        // 0x03C0(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                SelectEnemyId;                                           // 0x03C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GOWD[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBEnemyCharacter*                                   EnemyModel;                                              // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALibraryMenu_Studio_C*                               Studio;                                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUpdatedModel;                                          // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PXC5[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedMonsterListIndex;                                // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Count;                                                   // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OXH8[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEnemyParamMasterData>                       List;                                                    // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        AllActiveMonsterNameList;                                // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllRead;                                                 // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GUYA[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AllReadMonster;                                          // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int32_t>                                            AppearnceIndexList;                                      // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBLibraryEnemyPartsBreakData>               PartsBreakData;                                          // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PartsBreakState;                                         // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VVIS[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBLibraryEnemyData>                         EnemyList;                                               // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectEnemyTypeIndex;                                    // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAllMipLoaded;                                         // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsModelLoadedComplete;                                  // 0x0465(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7JH3[0x2];                                   // 0x0466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllLoadedMipWaitTimeout;                                 // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void ChangeDetailEnemyId(const class FName& EnemyId);
		void UpdateCategoryListMark();
		void BossFlagCheck(const class FName& EnemyId, bool* Boss, bool* Unique);
		void ModelPartsChange();
		void UpdateSearchVisibility(const class FText& SearchWord);
		void OnAppearanceListClick(int32_t listIndex);
		void CreateAppearanceList();
		void SaveEnemyReadId(const class FName& EnemyId, bool* SaveAdd);
		void IsReadCategory(const struct FSBTextTableHash& ID, const struct FSBTextTableHash& RaceId, struct FSBTextTableHash* readId, bool* IsRead);
		bool IsAllRead();
		void CreateCategoryList();
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void InitializeCaptureStudio();
		void OnModelLoadComplete();
		void FinalizeCaptureStudio();
		void SetModelControllEnabled(bool enable);
		void SetModelVisibility(bool Visible);
		void ModelLoadRequest(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
		void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void OnModelLoadedAllMipFunc();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void UpdateEnemyModel();
		void ImageVisibleEvent();
		void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature(const class FText& NewParam);
		void Destruct();
		void BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void Esc_ModelView();
		void BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Close_ModelView();
		void OnClosePopup();
		void BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void PressedAreaList();
		void UnBindArealistBtn();
		void OnEnemyDataLoaded(bool Result);
		void AreaListVisibleChange(bool Visible);
		void BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
		void BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32_t ItemIndex);
		void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void AreaListSelect(int32_t Index, const class FName& EnemyId);
		void ExecuteUbergraph_LibraryMenu_Monster(int32_t EntryPoint);
		void AllReadMonster__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
