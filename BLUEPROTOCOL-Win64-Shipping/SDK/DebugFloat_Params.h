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
	 * Function DebugFloat.DebugFloat_C.Set Menu Focus
	 */
	struct UDebugFloat_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UM5B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugFloat.DebugFloat_C.BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugFloat.DebugFloat_C.BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugFloat_C_BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugFloat.DebugFloat_C.OnPressOk
	 */
	struct UDebugFloat_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugFloat.DebugFloat_C.OnGetFocus
	 */
	struct UDebugFloat_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugFloat.DebugFloat_C.OnLostFocus
	 */
	struct UDebugFloat_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugFloat.DebugFloat_C.ExecuteUbergraph_DebugFloat
	 */
	struct UDebugFloat_C_ExecuteUbergraph_DebugFloat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
