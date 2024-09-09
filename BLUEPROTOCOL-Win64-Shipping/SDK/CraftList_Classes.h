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
	 * WidgetBlueprintGeneratedClass CraftList.CraftList_C
	 * Size -> 0x0329 (FullSize[0x05A1] - InheritedSize[0x0278])
	 */
	class UCraftList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_DiffWeapon;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_RateDisplay;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn08_C*                                         Btn_ReadyCraft;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasConstruct;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasRadyCraft;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     CategoryDropDown;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBox_C*                                       CB_Craftable;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraft_StorageSelector_C*                            Craft_StorageSelector;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CraftableItems;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_ShowDiffWeaon;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_ShowRatioBtn;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DescPanel;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     FilterButton;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_14;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Arrow;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageCategoryBG;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderItemCraft;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderWeaponCraft;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Load;                                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultipleCraftWidget_C*                              MultipleCraftWidget;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ProbabilityDisplayText;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SelectItemMsgText;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  SortDropDown;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_BigBonusRate;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Diff;                                                // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUseTokenSelector_C*                                 UseTokenSelector;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_HeaderImg;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftRecepiDesc_C*                                  RecepiDesc;                                              // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SelectRecepi;                                            // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ChengePointValidate;                                     // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ShowNpcCraftBtn;                                         // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UShopCmnBtn1_C*                                      SelectedCategoryTab;                                     // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FItemListData>                               ListData;                                                // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MaxDifficulty;                                           // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isWeaponShowed;                                          // 0x03DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJZE[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FillterDifficulty;                                       // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsItem;                                                 // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PBB2[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, ESBWeaponType>                         WeaponTypes;                                             // 0x03E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		ESBWeaponType                                              FillterWeaponType;                                       // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZQL[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CraftNum;                                                // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECraftRecepiSortType                                       SortType;                                                // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JNPF[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, ECraftRecepiSortType>                  SortTypes;                                               // 0x0448(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ChangeTabs;                                              // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    StorageType;                                             // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCharacterCraftRecepi                               SelectRecepi2;                                           // 0x04BC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_3MZF[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCraftMasterData                                    CraftMasterData;                                         // 0x04C8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             SetCancelLock;                                           // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UProbabilityDisplay_C*                               ProbabilityDisplayDialog;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEquipmentDiffDialog_C*                              EquipmentDiffDialog;                                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SetColorChangeMoney;                                     // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PreCraftCount;                                           // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LUQ1[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressCraft;                                            // 0x0590(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bExecutingCraft;                                         // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetIsExecutingCraft(bool bExecutingCraft);
		void IsCheckMoney(bool* bEnoughMoney);
		void InitCheckBox();
		void UpdateRatio(int32_t RecepiId);
		void SetWeaponShow(bool isWeaponShowed);
		void GetCraftNum(int32_t* Num);
		void GetLastCraftStorage(int32_t* StorageType);
		void UpdateLastCraftStorage();
		void ConvertSaveType(ECraftRecepiSortType UseType, ESBItemSortType* SaveType);
		void ConvertSortType(ESBItemSortType SaveType, ECraftRecepiSortType* UseType);
		void FilterLists(TArray<struct FFilterGroup>* Array);
		void GenerateLists(TArray<struct FCharacterCraftRecepi> InputPin);
		void GenerateSortedIndexes(TArray<struct FCharacterCraftRecepi>* Resepis, TArray<int32_t>* Indexes);
		void SetupCategoryList(bool bIsWeapon1);
		class UWidget* On_CategoryDropDown_GenerateWidget_1(const class FString& item);
		class UWidget* On_DifficultyDropDown_GenerateWidget_1(const class FString& item);
		void ShowRedayCheckYesNoDialog(class UBP_Dialog_C** OutIsDialog);
		void isRecepiMaterialLocked(bool* OutIsLocked);
		void FilterItems();
		void CreateSortType();
		void SetupItemList(bool isWeaponShowed);
		void OnSelectRecepi(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem);
		void OnSelectDifficulty(const class FString& SelectedItem, ESelectInfo SelectionType);
		void InitList(TArray<struct FCharacterCraftRecepi> InputPin);
		void BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature(int32_t Now);
		void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
		void RestSelected();
		void Destruct();
		void OnCompletGetRewardBoost(int32_t InRetCode);
		void BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void ShowRateDialog();
		void ProbabilityOnClose();
		void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
		void OnCloseDiffDialog();
		void BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature();
		void OnDialogClosed(EDialogResult Result);
		void BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CraftList_Btn_ReadyCraft_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void UpdateSelectRecepi(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem);
		void Construct();
		void OnConditionCreated(EDialogResult Result);
		void OnOverflowAccepted(EDialogResult Result);
		void OnCanceled();
		void OnCloseClassCheck(EDialogResult Result);
		void OnTokenDemanded(EDialogResult Result);
		void OnSelected(int32_t Selected);
		void EndEasyRedayCheckYesNoDialog(EDialogResult Result);
		void ExecuteUbergraph_CraftList(int32_t EntryPoint);
		void OnPressCraft__DelegateSignature();
		void SetColorChangeMoney__DelegateSignature(bool WhiteColor);
		void SetCancelLock__DelegateSignature(bool LockInput);
		void ChangeTabs__DelegateSignature();
		void ShowNpcCraftBtn__DelegateSignature(bool bShow);
		void ChengePointValidate__DelegateSignature();
		void SelectRecepi__DelegateSignature(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
