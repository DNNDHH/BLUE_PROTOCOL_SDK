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
	 * Function StackBStepButton.StackBStepButton_C.SetButtonName
	 */
	struct UStackBStepButton_C_SetButtonName_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.SetBeginSelectView
	 */
	struct UStackBStepButton_C_SetBeginSelectView_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.SetButtonNo
	 */
	struct UStackBStepButton_C_SetButtonNo_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.ClearSelectedView
	 */
	struct UStackBStepButton_C_ClearSelectedView_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.SelectView
	 */
	struct UStackBStepButton_C_SelectView_Params
	{
	public:
		bool                                                       bButton;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.GetAppendedView
	 */
	struct UStackBStepButton_C_GetAppendedView_Params
	{
	public:
		class UUserWidget*                                         View;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.Terminate
	 */
	struct UStackBStepButton_C_Terminate_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.SetSelectedView
	 */
	struct UStackBStepButton_C_SetSelectedView_Params
	{
	public:
		class UUserWidget*                                         AppendedWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.Destruct
	 */
	struct UStackBStepButton_C_Destruct_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStackBStepButton_C_BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.Construct
	 */
	struct UStackBStepButton_C_Construct_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.ExecuteUbergraph_StackBStepButton
	 */
	struct UStackBStepButton_C_ExecuteUbergraph_StackBStepButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z02G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StackBStepButton.StackBStepButton_C.OnSelect__DelegateSignature
	 */
	struct UStackBStepButton_C_OnSelect__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
