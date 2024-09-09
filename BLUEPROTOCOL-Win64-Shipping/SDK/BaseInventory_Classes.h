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
	 * WidgetBlueprintGeneratedClass BaseInventory.BaseInventory_C
	 * Size -> 0x0310 (FullSize[0x0588] - InheritedSize[0x0278])
	 */
	class UBaseInventory_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_4;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_InventorySlot;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxString_Filter;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxString_Sort;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonPagerWidget_C*                                CommonPagerWidget;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     FilterButton;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          InventorySlot;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryStorageRowListOwner_C*                 InventoryStorageRowListOwner;                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Label_Capacity;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Label_Slash;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Label_UseBlock;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LIne_Liquid;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemory_ForInventory_C*                    LiquidMemoryList;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerGaugeCommandMenu_C*                           PlayerGaugeCommandMenu;                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_1;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USelectBlankText_C*                                  SelectBlankText_132;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switch_BagStorage;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTokenDisplay_C*                                     TokenDisplay;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon1;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon2;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon3;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon4;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_InventoryIcon5;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedButton;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBOwnItemListContainer*                             Inventory;                                               // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInventoryType                                             InventoryType;                                           // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2SBI[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickedItemButton;                                     // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FInventoryData>                              InventoryData;                                           // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UItemIconBtn_C*                                      SelectedItemBtn;                                         // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InventoryItemMax;                                        // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BeforeItemLength;                                        // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedItemRightButton;                                // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DoCheckSlotIconTextureLoadProgress;                      // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I9A9[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPressItemButton;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TempSlotNum;                                             // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P4YU[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItemIconBtn_C*>                              TempSlotItems;                                           // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FName>                                        FilterList_Item;                                         // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList_Equipment;                                    // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnComboChanged;                                          // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsRecastTime;                                           // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11QC[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRefreshRegisterRequest;                                // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInventoryData                                      LastSelectInventoryStorageList;                          // 0x0420(0x0098) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bNowInitialize;                                          // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G3JZ[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBSendIdentifiedMaterialsToWarehouseData           ResultData;                                              // 0x04D0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemNum;                                                 // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemMaxNum;                                              // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InitializeNow;                                           // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VHQA[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InventoryViewSlotNum;                                    // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EInventoryType, int32_t>                              InventoryViewSlotNumBase;                                // 0x0530(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ItemIconMax;                                             // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PageNum;                                                 // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetCategoryModeName();
		void GetFilterType(EItemFilterType* FilterType);
		void GetSortMode(int32_t* ModeNum);
		void GetSortRule(ESBItemSortType* SortType);
		void SetSelectBlankTextOff();
		void SetSelectBlankText(EInventoryType Selection);
		void SetSelectedItemBtn(const class FString& ItemId);
		void GetSelectItemData(struct FInventoryItemData* InventoryItemData);
		class UWidget* On_ComboBoxString_Filter_GenerateWidget_1(const class FString& item);
		void IconAnimInPlay();
		void UpdateLockInventory(TArray<struct FSBLockItemData>* LockItems);
		void NeedItemVisible();
		void CheckSlotIconTextureLoadProgress(bool* OutIsLoadFinished);
		void FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData);
		void SetRegisterMode(bool bIsRegisterMode);
		void FindInventoryDataFromIndex(int32_t ItemIndex, struct FInventoryData* ArrayElement);
		void SelectedAll(bool IsSelected);
		void AdjustItemIcons();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnReflesh();
		void OnSelect(class UItemIconBtn_C* SelectItem);
		void ChangeCategory(EInventoryType Inventory);
		void OnRefleshFromRegister();
		void OnRefleshWithNoAnim();
		void Destruct();
		void UnbindDelegate();
		void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void RecastTimeIconUpdate(bool bIsRecastTime);
		void Event_PressItemEnable(class UItemIconBtn_C* Target);
		void CustomEvent_1(const struct FInventoryData& OnItemClick);
		void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void UpdateFilterButton();
		void UpdateFilterComboBox();
		void UpdateSortComboBox();
		void BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void InventoryScrollStart();
		void ScrollVisibleUpdate(float Offset);
		void CustomEvent_2();
		void BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t PageCurrent);
		void ExecuteUbergraph_BaseInventory(int32_t EntryPoint);
		void OnRefreshRegisterRequest__DelegateSignature();
		void OnComboChanged__DelegateSignature();
		void OnPressItemButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData);
		void OnClickedItemRightButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData);
		void OnClickedItemButton__DelegateSignature(const struct FInventoryData& InventoryData);
		void OnClickedButton__DelegateSignature(EDescripionButtonType Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
