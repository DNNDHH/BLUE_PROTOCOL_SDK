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
	 * Function DebugInt32.DebugInt32_C.Set Menu Focus
	 */
	struct UDebugInt32_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AOP3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugInt32.DebugInt32_C.BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugInt32_C_BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInt32.DebugInt32_C.BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInt32.DebugInt32_C.OnPressOk
	 */
	struct UDebugInt32_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugInt32.DebugInt32_C.OnGetFocus
	 */
	struct UDebugInt32_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugInt32.DebugInt32_C.OnLostFocus
	 */
	struct UDebugInt32_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugInt32.DebugInt32_C.ExecuteUbergraph_DebugInt32
	 */
	struct UDebugInt32_C_ExecuteUbergraph_DebugInt32_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
