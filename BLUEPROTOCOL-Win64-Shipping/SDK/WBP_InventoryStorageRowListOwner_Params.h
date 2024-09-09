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
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortRule
	 */
	struct UWBP_InventoryStorageRowListOwner_C_GetSortRule_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ZSX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetFilterType
	 */
	struct UWBP_InventoryStorageRowListOwner_C_GetFilterType_Params
	{
	public:
		EItemFilterType                                            FilterType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AXXE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortMode
	 */
	struct UWBP_InventoryStorageRowListOwner_C_GetSortMode_Params
	{
	public:
		int32_t                                                    ModeNum;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Create List
	 */
	struct UWBP_InventoryStorageRowListOwner_C_CreateList_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetInventoryUpdeta
	 */
	struct UWBP_InventoryStorageRowListOwner_C_SetInventoryUpdeta_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.On_ComboBoxString_Sort_GenerateWidget_1
	 */
	struct UWBP_InventoryStorageRowListOwner_C_On_ComboBoxString_Sort_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.RemoveSelectListItems
	 */
	struct UWBP_InventoryStorageRowListOwner_C_RemoveSelectListItems_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetScrollBoxSizeX
	 */
	struct UWBP_InventoryStorageRowListOwner_C_SetScrollBoxSizeX_Params
	{
	public:
		float                                                      SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RXCN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ResettingStorageListItem
	 */
	struct UWBP_InventoryStorageRowListOwner_C_ResettingStorageListItem_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdetaItemList
	 */
	struct UWBP_InventoryStorageRowListOwner_C_UpdetaItemList_Params
	{
	public:
		ESBItemSortType                                            InSortType;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemFilterType                                            FilterType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.LockIconUpdate
	 */
	struct UWBP_InventoryStorageRowListOwner_C_LockIconUpdate_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bLock;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.StorageItemGet
	 */
	struct UWBP_InventoryStorageRowListOwner_C_StorageItemGet_Params
	{
	public:
		ESBItemSortType                                            InSortType;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemFilterType                                            InFilter;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Construct
	 */
	struct UWBP_InventoryStorageRowListOwner_C_Construct_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.AddStorageListItem
	 */
	struct UWBP_InventoryStorageRowListOwner_C_AddStorageListItem_Params
	{
	public:
		float                                                      CreateDelay;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.IconAllSelectfalse
	 */
	struct UWBP_InventoryStorageRowListOwner_C_IconAllSelectfalse_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.MultiStart
	 */
	struct UWBP_InventoryStorageRowListOwner_C_MultiStart_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_3
	 */
	struct UWBP_InventoryStorageRowListOwner_C_CustomEvent_3_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_4
	 */
	struct UWBP_InventoryStorageRowListOwner_C_CustomEvent_4_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.InitializeComboBox
	 */
	struct UWBP_InventoryStorageRowListOwner_C_InitializeComboBox_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Open
	 */
	struct UWBP_InventoryStorageRowListOwner_C_Open_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Update
	 */
	struct UWBP_InventoryStorageRowListOwner_C_Update_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateSortCombo
	 */
	struct UWBP_InventoryStorageRowListOwner_C_UpdateSortCombo_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterCombo
	 */
	struct UWBP_InventoryStorageRowListOwner_C_UpdateFilterCombo_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterButton
	 */
	struct UWBP_InventoryStorageRowListOwner_C_UpdateFilterButton_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ScrollVisibleUpdate
	 */
	struct UWBP_InventoryStorageRowListOwner_C_ScrollVisibleUpdate_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ExecuteUbergraph_WBP_InventoryStorageRowListOwner
	 */
	struct UWBP_InventoryStorageRowListOwner_C_ExecuteUbergraph_WBP_InventoryStorageRowListOwner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKIV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClickRight__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_OnItemClickRight__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClick__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListOwner_C_OnItemClick__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      OnItemClick;                                             // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
