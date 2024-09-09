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
	 * Function FilterButton.FilterButton_C.DeleteWindow
	 */
	struct UFilterButton_C_DeleteWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.CreateWindow
	 */
	struct UFilterButton_C_CreateWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.ChangeFilterType
	 */
	struct UFilterButton_C_ChangeFilterType_Params
	{
	public:
		EFilter_Type                                               FilterType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FilterButton.FilterButton_C.SetAttachTargetCanvas
	 */
	struct UFilterButton_C_SetAttachTargetCanvas_Params
	{
	public:
		class UCanvasPanel*                                        AttachTargetCanvas;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FilterButton.FilterButton_C.BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFilterButton_C_BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.ApplyFilters
	 */
	struct UFilterButton_C_ApplyFilters_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FilterButton.FilterButton_C.CloseWindow
	 */
	struct UFilterButton_C_CloseWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.Destruct
	 */
	struct UFilterButton_C_Destruct_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.Release
	 */
	struct UFilterButton_C_Release_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.OpenWindow
	 */
	struct UFilterButton_C_OpenWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.BindWindow
	 */
	struct UFilterButton_C_BindWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.UnbindWindow
	 */
	struct UFilterButton_C_UnbindWindow_Params
	{	};

	/**
	 * Function FilterButton.FilterButton_C.ExecuteUbergraph_FilterButton
	 */
	struct UFilterButton_C_ExecuteUbergraph_FilterButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2PCP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FilterButton.FilterButton_C.OnApplyFilter__DelegateSignature
	 */
	struct UFilterButton_C_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
