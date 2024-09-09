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
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnGetFocus");
		
		USBTextBox_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnLostFocus");
		
		USBTextBox_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnPressOk");
		
		USBTextBox_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.ExecuteUbergraph_SBTextBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBTextBox_C::ExecuteUbergraph_SBTextBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.ExecuteUbergraph_SBTextBox");
		
		USBTextBox_C_ExecuteUbergraph_SBTextBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnHandledPressOk__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnHandledPressOk__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnHandledPressOk__DelegateSignature");
		
		USBTextBox_C_OnHandledPressOk__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnHandledLostFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnHandledLostFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnHandledLostFocus__DelegateSignature");
		
		USBTextBox_C_OnHandledLostFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextBox.SBTextBox_C.OnHandledGetFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextBox_C::OnHandledGetFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextBox.SBTextBox_C.OnHandledGetFocus__DelegateSignature");
		
		USBTextBox_C_OnHandledGetFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBTextBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBTextBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBTextBox.SBTextBox_C");
		return ptr;
	}

}


