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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ContainerGridView.ContainerGridView_C.GetPageMax
	 */
	struct UContainerGridView_C_GetPageMax_Params
	{
	public:
		int32_t                                                    MaxPage;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetPage
	 */
	struct UContainerGridView_C_SetPage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.GetUsedGridNum
	 */
	struct UContainerGridView_C_GetUsedGridNum_Params
	{
	public:
		int32_t                                                    UsedGridNum;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetSelectedUIDs
	 */
	struct UContainerGridView_C_SetSelectedUIDs_Params
	{
	public:
		TArray<class FString>                                      SelectedUIDs;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetDropUID
	 */
	struct UContainerGridView_C_SetDropUID_Params
	{
	public:
		class FString                                              SkipUniqueId;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.Set FilterID
	 */
	struct UContainerGridView_C_SetFilterID_Params
	{
	public:
		int32_t                                                    FilterID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.AddTicket
	 */
	struct UContainerGridView_C_AddTicket_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddNum;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetMultiSelectable
	 */
	struct UContainerGridView_C_SetMultiSelectable_Params
	{
	public:
		bool                                                       bIsMultiSelectable;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.MultiSelectOverViewUpdate
	 */
	struct UContainerGridView_C_MultiSelectOverViewUpdate_Params
	{
	public:
		class UContainerGridView_C*                                GridView;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMaterialFull;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OPKK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetNeedCount
	 */
	struct UContainerGridView_C_SetNeedCount_Params
	{
	public:
		int32_t                                                    NeedCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetSortType
	 */
	struct UContainerGridView_C_SetSortType_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetBaseFilteVerbose
	 */
	struct UContainerGridView_C_SetBaseFilteVerbose_Params
	{
	public:
		TArray<struct FFilterGroup>                                BaseFilter;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetBaseFilterCustom
	 */
	struct UContainerGridView_C_SetBaseFilterCustom_Params
	{
	public:
		struct FFilterGroup                                        Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetBaseFilterSimple
	 */
	struct UContainerGridView_C_SetBaseFilterSimple_Params
	{
	public:
		EItemFilterType                                            Filter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9UG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetSelectedAll
	 */
	struct UContainerGridView_C_SetSelectedAll_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_18SZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.Find IconBtn To OwnItem
	 */
	struct UContainerGridView_C_FindIconBtnToOwnItem_Params
	{
	public:
		class UItemIconBtn_C*                                      FindIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FOwnItemInfo                                        FindedItem;                                              // 0x0008(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.ApplySortFilters
	 */
	struct UContainerGridView_C_ApplySortFilters_Params
	{	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.GenerateIcons
	 */
	struct UContainerGridView_C_GenerateIcons_Params
	{	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.Set Target
	 */
	struct UContainerGridView_C_SetTarget_Params
	{
	public:
		class USBTemporallyStorage*                                TargetContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.OnSelectedIcon
	 */
	struct UContainerGridView_C_OnSelectedIcon_Params
	{
	public:
		class UItemIconBtn_C*                                      OnSelectedBtn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SetFilter
	 */
	struct UContainerGridView_C_SetFilter_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.ExecuteUbergraph_ContainerGridView
	 */
	struct UContainerGridView_C_ExecuteUbergraph_ContainerGridView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IGIB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ContainerGridView.ContainerGridView_C.SelectedItem__DelegateSignature
	 */
	struct UContainerGridView_C_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
