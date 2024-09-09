/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugCommand_C::SetMenuFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.Set Menu Focus");
		
		UDebugCommand_C_SetMenuFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.Construct");
		
		UDebugCommand_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature");
		
		UDebugCommand_C_BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.ExecCommand
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::ExecCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.ExecCommand");
		
		UDebugCommand_C_ExecCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.OnPressOk");
		
		UDebugCommand_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.OnGetFocus");
		
		UDebugCommand_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.OnLostFocus");
		
		UDebugCommand_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugCommand_C::BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UDebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.ExecuteUbergraph_DebugCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugCommand_C::ExecuteUbergraph_DebugCommand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.ExecuteUbergraph_DebugCommand");
		
		UDebugCommand_C_ExecuteUbergraph_DebugCommand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugCommand.DebugCommand_C.OnExecutedConsoleCommand__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugCommand_C::OnExecutedConsoleCommand__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugCommand.DebugCommand_C.OnExecutedConsoleCommand__DelegateSignature");
		
		UDebugCommand_C_OnExecutedConsoleCommand__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugCommand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugCommand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugCommand.DebugCommand_C");
		return ptr;
	}

}


