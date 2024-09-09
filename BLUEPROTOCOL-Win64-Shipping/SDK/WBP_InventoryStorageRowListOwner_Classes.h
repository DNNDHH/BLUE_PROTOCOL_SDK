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
	 * WidgetBlueprintGeneratedClass WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C
	 * Size -> 0x0180 (FullSize[0x03F8] - InheritedSize[0x0278])
	 */
	class UWBP_InventoryStorageRowListOwner_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBComboBoxCmn01_C*                                  ComboBoxString_Filter;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxString_Sort;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     FilterButton;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryStorageRowListItem_C*                  InventoryStorageRowListItem;                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ItemListSlot;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_C_81;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_1;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_130;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon1_2;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        SortList;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList;                                              // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UWBP_InventoryStorageRowListItemWrap_C*>      ItemLists;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FOwnItemInfo>                                StorageItemList;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      TestData;                                                // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DebugCnt;                                                // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DebugAddCnt;                                             // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugBlock;                                              // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CP86[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClick;                                             // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0338(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		class UWBP_InventoryStorageRowListItem_C*                  LastClickItem;                                           // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFilterGroup                                        FilterGroup;                                             // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              SortType;                                                // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemFilterType                                            FilterType;                                              // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CUH6[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClickRight;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bMultipleSelection;                                      // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y5QW[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_InventoryStorageRowListItem_C*>          SelectListItems;                                         // 0x03D0(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       IsComboSetting;                                          // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryUpdate;                                         // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BYUD[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetSortRule(ESBItemSortType* SortType);
		void GetFilterType(EItemFilterType* FilterType);
		void GetSortMode(int32_t* ModeNum);
		void CreateList();
		void SetInventoryUpdeta();
		class UWidget* On_ComboBoxString_Sort_GenerateWidget_1(const class FString& item);
		void RemoveSelectListItems();
		void SetScrollBoxSizeX(float SizeX);
		void BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void ResettingStorageListItem();
		void UpdetaItemList(ESBItemSortType InSortType, EItemFilterType FilterType);
		void LockIconUpdate(const class FString& UniqueId, bool bLock);
		void StorageItemGet(ESBItemSortType InSortType, EItemFilterType InFilter);
		void Construct();
		void AddStorageListItem(float CreateDelay);
		void IconAllSelectfalse();
		void MultiStart();
		void CustomEvent_3(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
		void CustomEvent_4(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
		void InitializeComboBox();
		void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void Open();
		void Update();
		void BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void UpdateSortCombo();
		void UpdateFilterCombo();
		void UpdateFilterButton();
		void BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void ScrollVisibleUpdate(float Offset);
		void ExecuteUbergraph_WBP_InventoryStorageRowListOwner(int32_t EntryPoint);
		void OnItemClickRight__DelegateSignature();
		void OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
