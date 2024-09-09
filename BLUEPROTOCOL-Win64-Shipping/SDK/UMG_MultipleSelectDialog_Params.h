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
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.HandleInit
	 */
	struct UUMG_MultipleSelectDialog_C_HandleInit_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        Selections;                                              // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.OnSelected_Event_1
	 */
	struct UUMG_MultipleSelectDialog_C_OnSelected_Event_1_Params
	{
	public:
		int32_t                                                    SelectIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Destruct
	 */
	struct UUMG_MultipleSelectDialog_C_Destruct_Params
	{	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Construct
	 */
	struct UUMG_MultipleSelectDialog_C_Construct_Params
	{	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.CustomEvent_1
	 */
	struct UUMG_MultipleSelectDialog_C_CustomEvent_1_Params
	{	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetCancelAction
	 */
	struct UUMG_MultipleSelectDialog_C_SetCancelAction_Params
	{
	public:
		int32_t                                                    SelectIndex;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetDialogPosition
	 */
	struct UUMG_MultipleSelectDialog_C_SetDialogPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_MultipleSelectDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.ExecuteUbergraph_UMG_MultipleSelectDialog
	 */
	struct UUMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
