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
	 * Function DebugCommand.DebugCommand_C.Set Menu Focus
	 */
	struct UDebugCommand_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJM1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugCommand.DebugCommand_C.Construct
	 */
	struct UDebugCommand_C_Construct_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugCommand_C_BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.ExecCommand
	 */
	struct UDebugCommand_C_ExecCommand_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.OnPressOk
	 */
	struct UDebugCommand_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.OnGetFocus
	 */
	struct UDebugCommand_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.OnLostFocus
	 */
	struct UDebugCommand_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugCommand.DebugCommand_C.BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugCommand.DebugCommand_C.ExecuteUbergraph_DebugCommand
	 */
	struct UDebugCommand_C_ExecuteUbergraph_DebugCommand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugCommand.DebugCommand_C.OnExecutedConsoleCommand__DelegateSignature
	 */
	struct UDebugCommand_C_OnExecutedConsoleCommand__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
