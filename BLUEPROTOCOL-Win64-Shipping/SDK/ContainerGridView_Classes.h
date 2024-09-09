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
	 * WidgetBlueprintGeneratedClass ContainerGridView.ContainerGridView_C
	 * Size -> 0x0094 (FullSize[0x030C] - InheritedSize[0x0278])
	 */
	class UContainerGridView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGridPanel*                                          Grid_Value;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTemporallyStorage*                                TargetContainer;                                         // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             SelectedItem;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ViewSlotNum;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z0D7[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                BaseFilter;                                              // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBItemSortType                                            SortType;                                                // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7E7V[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxtixNum;                                               // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    MinimunViewGrid;                                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bIsMultiSelectable;                                      // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W99W[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FilterID;                                                // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GITD[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipUniqueId;                                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      SelectedUIDs;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DisableSelectAction;                                     // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bIsMaterialView;                                         // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDisableNewMark;                                         // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnablePagenate;                                         // 0x0303(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PagenateNum;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Page;                                                    // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPageMax(int32_t* MaxPage);
		void SetPage(int32_t Page);
		void GetUsedGridNum(int32_t* UsedGridNum);
		void SetSelectedUIDs(TArray<class FString>* SelectedUIDs);
		void SetDropUID(const class FString& SkipUniqueId);
		void SetFilterID(int32_t FilterID);
		void AddTicket(int32_t TokenID, int32_t AddNum);
		void SetMultiSelectable(bool bIsMultiSelectable);
		void MultiSelectOverViewUpdate(class UContainerGridView_C* GridView, bool bIsMaterialFull);
		void SetNeedCount(int32_t NeedCount);
		void SetSortType(ESBItemSortType SortType);
		void SetBaseFilteVerbose(TArray<struct FFilterGroup>* BaseFilter);
		void SetBaseFilterCustom(const struct FFilterGroup& Filter);
		void SetBaseFilterSimple(EItemFilterType Filter);
		void SetSelectedAll(bool Selected);
		void FindIconBtnToOwnItem(class UItemIconBtn_C* FindIcon, struct FOwnItemInfo* FindedItem);
		void ApplySortFilters();
		void GenerateIcons();
		void SetTarget(class USBTemporallyStorage* TargetContainer);
		void OnSelectedIcon(class UItemIconBtn_C* OnSelectedBtn);
		void SetFilter(TArray<struct FFilterGroup>* Filters);
		void ExecuteUbergraph_ContainerGridView(int32_t EntryPoint);
		void SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
