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
	 * WidgetBlueprintGeneratedClass WBP_StorageRowListOwner.WBP_StorageRowListOwner_C
	 * Size -> 0x0170 (FullSize[0x03E8] - InheritedSize[0x0278])
	 */
	class UWBP_StorageRowListOwner_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ItemListSlot;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_1;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        SortList;                                                // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        SortList_Storage;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList_Storage;                                      // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UWBP_StorageRowListItemWrap_C*>               ItemRowList;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FOwnItemInfo>                                StorageItemList;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      TestData;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DebugCnt;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DebugAddCnt;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugBlock;                                              // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SE4K[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClick;                                             // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0320(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		class UWBP_StorageRowListItem_C*                           LastClickItem;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFilterGroup                                        FilterGroup;                                             // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBItemSortType                                            SortType;                                                // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemFilterType                                            FilterType;                                              // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5M2Y[0x6];                                   // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClickRight;                                        // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bMultipleSelection;                                      // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHTW[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_StorageRowListItem_C*>                   SelectListItems;                                         // 0x03B8(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FFilterGroup>                                OptionFilter;                                            // 0x03C8(0x0010) Edit, BlueprintVisible
		bool                                                       BPPointExchangeMode;                                     // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SizeSelect;                                              // 0x03D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S563[0x2];                                   // 0x03DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           OptionSize;                                              // 0x03DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastOffset;                                              // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float MaxScrollOffset();
		void SelectsItems(class UWBP_StorageRowListItem_C* InputPin, bool* bAdd);
		void SwitchMultipleSelection(bool* bAdd);
		void CreateLists();
		void RemoveSelectListItems();
		void SetScrollBoxSizeX(float SizeX);
		void StorageItemGet(ESBItemSortType SortType, EItemFilterType InFilter, TArray<struct FFilterGroup>* FilterArray);
		void AddStorageListItem(float CreateDelay);
		void ResettingStorageListItem();
		void UpdetaItemList(ESBItemSortType SortType2, EItemFilterType FilterType, TArray<struct FFilterGroup>* FilterArray, bool ScrollReset);
		void CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
		void LockIconUpdate(const class FString& UniqueId, bool bLock);
		void IconAllSelectfalse();
		void CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
		void MultiStart();
		void Reset();
		void AddOptionFilter();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void ScrollVisibleUpdate(float Offset);
		void ExecuteUbergraph_WBP_StorageRowListOwner(int32_t EntryPoint);
		void OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam);
		void OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
