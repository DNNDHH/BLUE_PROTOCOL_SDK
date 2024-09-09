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
	 * Function ImagineCraft.ImagineCraft_C.SetCraftButtonIsEnabled
	 */
	struct UImagineCraft_C_SetCraftButtonIsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.InitializeFilter
	 */
	struct UImagineCraft_C_InitializeFilter_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.UpdateTimeLimited
	 */
	struct UImagineCraft_C_UpdateTimeLimited_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.UpdateSelectedItem
	 */
	struct UImagineCraft_C_UpdateSelectedItem_Params
	{
	public:
		class URecepiListItemBtn_C*                                SelectedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.IsAnyLiquidMemoryActive
	 */
	struct UImagineCraft_C_IsAnyLiquidMemoryActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.ConvertCraftSort
	 */
	struct UImagineCraft_C_ConvertCraftSort_Params
	{
	public:
		ECraftRecepiSortType                                       CraftSortType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemSortType                                            SortType;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.ConvertSortType
	 */
	struct UImagineCraft_C_ConvertSortType_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECraftRecepiSortType                                       CraftSort;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.On_Cmb_Sort_GenerateWidget_1
	 */
	struct UImagineCraft_C_On_Cmb_Sort_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.CheckMaterialsAmount
	 */
	struct UImagineCraft_C_CheckMaterialsAmount_Params
	{
	public:
		bool                                                       isLack;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MEX1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.MasterContainsLists
	 */
	struct UImagineCraft_C_MasterContainsLists_Params
	{
	public:
		struct FSBMasterImagine                                    Master;                                                  // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFilterGroup                                        Group;                                                   // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isContains;                                              // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JKF[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.GenerateSortBox
	 */
	struct UImagineCraft_C_GenerateSortBox_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Filter
	 */
	struct UImagineCraft_C_Filter_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.CheckMaterialLock
	 */
	struct UImagineCraft_C_CheckMaterialLock_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9GDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Generate ListBox
	 */
	struct UImagineCraft_C_GenerateListBox_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnPress_Cancel
	 */
	struct UImagineCraft_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnSelectDialog
	 */
	struct UImagineCraft_C_OnSelectDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnLimitSerlected
	 */
	struct UImagineCraft_C_OnLimitSerlected_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Construct
	 */
	struct UImagineCraft_C_Construct_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnSelectRecepi
	 */
	struct UImagineCraft_C_OnSelectRecepi_Params
	{
	public:
		struct FMasterImagineRecepi                                Recepi;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class URecepiListItemBtn_C*                                SelectedItem;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Open
	 */
	struct UImagineCraft_C_Open_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Close
	 */
	struct UImagineCraft_C_Close_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Initialize
	 */
	struct UImagineCraft_C_Initialize_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Terminate
	 */
	struct UImagineCraft_C_Terminate_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnFinished
	 */
	struct UImagineCraft_C_OnFinished_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RWIQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MakedUID;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.RegenerateList
	 */
	struct UImagineCraft_C_RegenerateList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.Destruct
	 */
	struct UImagineCraft_C_Destruct_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature_Params
	{
	public:
		bool                                                       isCloseAll;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.ShowHelp
	 */
	struct UImagineCraft_C_ShowHelp_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.ChgHelpMode
	 */
	struct UImagineCraft_C_ChgHelpMode_Params
	{
	public:
		bool                                                       isLackAdvRank;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.CheckSelectRecepi
	 */
	struct UImagineCraft_C_CheckSelectRecepi_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.UpdateLiquidMemoryDisp
	 */
	struct UImagineCraft_C_UpdateLiquidMemoryDisp_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnRequest_GetRewaedBoost_cmpl
	 */
	struct UImagineCraft_C_OnRequest_GetRewaedBoost_cmpl_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.ExecuteUbergraph_ImagineCraft
	 */
	struct UImagineCraft_C_ExecuteUbergraph_ImagineCraft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraft.ImagineCraft_C.OnClose__DelegateSignature
	 */
	struct UImagineCraft_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
