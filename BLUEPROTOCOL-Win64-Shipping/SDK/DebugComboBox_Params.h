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
	 * Function DebugComboBox.DebugComboBox_C.SetComboBoxStringFocus
	 */
	struct UDebugComboBox_C_SetComboBoxStringFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JRL9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.SetSpacerWidthFromStringLength
	 */
	struct UDebugComboBox_C_SetSpacerWidthFromStringLength_Params
	{
	public:
		int32_t                                                    Length;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W90B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.Set Menu Focus
	 */
	struct UDebugComboBox_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PPLC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugComboBox_C_BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UDebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.OnPressOk
	 */
	struct UDebugComboBox_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.OnGetFocus
	 */
	struct UDebugComboBox_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.OnLostFocus
	 */
	struct UDebugComboBox_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.Construct
	 */
	struct UDebugComboBox_C_Construct_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature
	 */
	struct UDebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugComboBox.DebugComboBox_C.ExecuteUbergraph_DebugComboBox
	 */
	struct UDebugComboBox_C_ExecuteUbergraph_DebugComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
