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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C
	 * Size -> 0x0170 (FullSize[0x0420] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_CostumeChangeMenu_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIconIn;                                              // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C*    AccessoryCategoryTab;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgImage;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgImage_2;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgImage_3;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Body;                                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnFilter;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_CostumeChangeCategoryTab_C*             CostumeCategoryTab;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelectorAccessory;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelectorCostume;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel_1;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1_2;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1_3;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1_4;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1_5;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LineImage1_6;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ListGrp;                                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USortBox_C*                                          SortBox;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtSelectedCostumeCategory;                              // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBOwnItemListContainer*                             Inventory;                                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		ESBCharaEquipType                                          CostumeType;                                             // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharacterGender                                         GenderType;                                              // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBClassType                                               ClassType;                                               // 0x039A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsDetachingAfterCheckingChangeable;                     // 0x039B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    UnchangeableTextId_Condition;                            // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UnchangeableTextId_Target;                               // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBItemSortType                                            SortType;                                                // 0x03A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5HLN[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilterForCostume;                                    // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FFilterGroup>                                SortFilterForAccessory;                                  // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsFilterSelectorOpen;                                   // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_MyCharaMenu_CostumeCategory                              SelectedCostumeCategory;                                 // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MyCharaMenu_AccessoryCategory                            SelectedAccesoryCategory;                                // 0x03CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MyCharaMenu_CostumeCategory                              TempSelectedCostumeCategory;                             // 0x03CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MyCharaMenu_AccessoryCategory                            TempSelectedAccesoryCategory;                            // 0x03CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JHSM[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOpenEquipRingHandSelectDialog;                         // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UItemIconBtn_C*                                      TempSelectedIcon;                                        // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenUsingUnusedEquipConfirmDialog;                     // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEndUsingUnusedEquipConfirmDialog;                      // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FCharaEquipInfo                                     TempEquipInfo;                                           // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsColoringShop;                                          // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1MEW[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempChildCnt;                                            // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIconSelected(const struct FCharaEquipInfo& EquipInfo);
		void SetSelectedCostumeCategoryTitleText(E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void GetAccessoryCostumeTypeFromAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType);
		void GetCostumeTypeFromProtectorCategory(EProtectorCategory InProtectorCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType);
		void GetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory);
		void SetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
		void InitSortBox();
		void GetFilter(ESBCharaEquipType InCostumeType, TArray<struct FFilterGroup>* OutSortFilter);
		void GetCurrentSortType(ESBItemSortType* OutSortType);
		void SetInventory(class USBOwnItemListContainer* InOwnItemListContainer);
		void IsCostumeTypeAccessory(ESBCharaEquipType InEquipType, bool* OutIsAccessory);
		void HideAllSlotListItem();
		void CreateInventoryItemData(const struct FOwnItemInfo& InOwnItemInfo, struct FInventoryItemData* OutInventoryItemData);
		void SetupList(ESBItemSortType InSortType, ESBCharaEquipType InEquipType, ESBCharacterGender InGenderType, ESBClassType InClassType, TArray<struct FFilterGroup>* InSortFilters, E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void CreateEmptySlotList();
		void Close();
		void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, bool InIsAccessory);
		void ShowUsingUnusedEquipConfirmDialog();
		void Construct();
		void Destruct();
		void OnSelect_CandidateItemIcon(class UItemIconBtn_C* InSelectedIcon);
		void BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
		void BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature();
		void BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnPress_Cancel();
		void BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
		void ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu(int32_t EntryPoint);
		void OnEndUsingUnusedEquipConfirmDialog__DelegateSignature();
		void OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature();
		void OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId);
		void OnSelected__DelegateSignature(const class FString& InItemUniqueId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
