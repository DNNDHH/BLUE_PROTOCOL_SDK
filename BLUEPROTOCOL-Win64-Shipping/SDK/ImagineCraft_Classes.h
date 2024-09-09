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
	 * WidgetBlueprintGeneratedClass ImagineCraft.ImagineCraft_C
	 * Size -> 0x01E2 (FullSize[0x0492] - InheritedSize[0x02B0])
	 */
	class UImagineCraft_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ArrowInAnim;                                             // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_Craft;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_5;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasRadyUpgrade_2;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBox_C*                                       CB_FilterCraftable;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_Sort;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_ArrowM_C*                                   CmnAnim_ArrowM;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtnWishListWhite_C*                              CmnBtnWishListWhite;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_FilterSelector;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_LackAdvRank;                                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_LiquidMemoryActive_C*                       Cvs_LiquidMemory;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_Timelimited;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     FilterButton;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Help;                                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_195;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageCategoryBG;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageWhiteBG;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UimagineCraftAnim_C*                                 imagineCraftAnim;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImagineCraftDesc_C*                                 ImagineCraftDesc;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImagineCraftResult_C*                               ImagineCraftResult;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderBattleImagine;                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderEnhanceImagine;                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Load;                                                    // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopMenu_Craft_InAnime_C*                           ShopMenu_Craft_InAnime;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Sz_RequireAdvRank;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Sz_SelectRecepi;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VT_RecepiBOx;                                            // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_HeaderImg;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FMasterImagineRecepi                                Selected;                                                // 0x03D0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInitialized;                                           // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MG1[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class URecepiListItemBtn_C*>                        RecepiItems;                                             // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ESBImagineCategoryType                                     ShowType;                                                // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_5HYS[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, ECraftRecepiSortType>                  SortFromEnum;                                            // 0x0438(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		ECraftRecepiSortType                                       SortType;                                                // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCloseBlocked;                                          // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimVar;                                                 // 0x048A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S04A[0x1];                                   // 0x048B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StorageNo;                                               // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DStudio_Desc;                                            // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DStudio_Result;                                          // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetCraftButtonIsEnabled(bool bInIsEnabled);
		void InitializeFilter();
		void UpdateTimeLimited();
		void UpdateSelectedItem(class URecepiListItemBtn_C* SelectedItem);
		void IsAnyLiquidMemoryActive(bool* Active);
		void ConvertCraftSort(ECraftRecepiSortType CraftSortType, ESBItemSortType* SortType);
		void ConvertSortType(ESBItemSortType SortType, ECraftRecepiSortType* CraftSort);
		class UWidget* On_Cmb_Sort_GenerateWidget_1(const class FString& item);
		void CheckMaterialsAmount(bool* isLack);
		void MasterContainsLists(const struct FSBMasterImagine& Master, const struct FFilterGroup& Group, bool* isContains);
		void GenerateSortBox();
		void Filter();
		void CheckMaterialLock(bool* IsLocked);
		void GenerateListBox();
		void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature();
		void OnPress_Cancel();
		void OnSelectDialog(EDialogResult Result);
		void OnLimitSerlected(EDialogResult Result);
		void Construct();
		void OnSelectRecepi(const struct FMasterImagineRecepi& Recepi, class URecepiListItemBtn_C* SelectedItem);
		void Open();
		void Close();
		void Initialize();
		void Terminate();
		void OnFinished(int32_t RetCode, const class FString& MakedUID);
		void RegenerateList(int32_t RetCode);
		void Destruct();
		void BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature(bool isCloseAll);
		void BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature();
		void ShowHelp(bool Visible);
		void ChgHelpMode(bool isLackAdvRank);
		void CheckSelectRecepi();
		void BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature();
		void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void UpdateLiquidMemoryDisp();
		void OnRequest_GetRewaedBoost_cmpl(int32_t InRetCode);
		void BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_ImagineCraft(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
