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
	 * Function SelectGrid.SelectGrid_C.SetBaseSortType
	 */
	struct USelectGrid_C_SetBaseSortType_Params
	{
	public:
		ESBSortFilterSaveType                                      SaveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortTypeCategory                                          SortTypeCategory;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetFilterType
	 */
	struct USelectGrid_C_SetFilterType_Params
	{
	public:
		EFilter_Type                                               FilterType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetHoverdBag
	 */
	struct USelectGrid_C_SetHoverdBag_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetHoverdStorage
	 */
	struct USelectGrid_C_SetHoverdStorage_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetBaseFilteVerbose
	 */
	struct USelectGrid_C_SetBaseFilteVerbose_Params
	{
	public:
		TArray<struct FFilterGroup>                                BaseFilter;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetBaseFilterCustom
	 */
	struct USelectGrid_C_SetBaseFilterCustom_Params
	{
	public:
		struct FFilterGroup                                        Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetBaseFilterSimple
	 */
	struct USelectGrid_C_SetBaseFilterSimple_Params
	{
	public:
		EItemFilterType                                            Filter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6II[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectGrid.SelectGrid_C.IsSelectBag
	 */
	struct USelectGrid_C_IsSelectBag_Params
	{
	public:
		bool                                                       IsBag;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetBag
	 */
	struct USelectGrid_C_SetBag_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.SetStorage
	 */
	struct USelectGrid_C_SetStorage_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature
	 */
	struct USelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectGrid.SelectGrid_C.ExecuteUbergraph_SelectGrid
	 */
	struct USelectGrid_C_ExecuteUbergraph_SelectGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ORP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectGrid.SelectGrid_C.SelectedItem__DelegateSignature
	 */
	struct USelectGrid_C_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
