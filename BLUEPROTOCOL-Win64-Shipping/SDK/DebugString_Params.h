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
	 * Function DebugString.DebugString_C.Set Menu Focus
	 */
	struct UDebugString_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3W0T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugString.DebugString_C.BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugString_C_BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugString.DebugString_C.BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugString.DebugString_C.OnPressOk
	 */
	struct UDebugString_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugString.DebugString_C.OnGetFocus
	 */
	struct UDebugString_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugString.DebugString_C.OnLostFocus
	 */
	struct UDebugString_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugString.DebugString_C.ExecuteUbergraph_DebugString
	 */
	struct UDebugString_C_ExecuteUbergraph_DebugString_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
