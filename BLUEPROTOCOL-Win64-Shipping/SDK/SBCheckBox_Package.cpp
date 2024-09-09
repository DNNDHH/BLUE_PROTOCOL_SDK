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
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnGetFocus");
		
		USBCheckBox_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnLostFocus");
		
		USBCheckBox_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnPressOk");
		
		USBCheckBox_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.ExecuteUbergraph_SBCheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBCheckBox_C::ExecuteUbergraph_SBCheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.ExecuteUbergraph_SBCheckBox");
		
		USBCheckBox_C_ExecuteUbergraph_SBCheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnHandledPressOk__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnHandledPressOk__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnHandledPressOk__DelegateSignature");
		
		USBCheckBox_C_OnHandledPressOk__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnHandledLostFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnHandledLostFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnHandledLostFocus__DelegateSignature");
		
		USBCheckBox_C_OnHandledLostFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBCheckBox.SBCheckBox_C.OnHandledGetFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBCheckBox_C::OnHandledGetFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBCheckBox.SBCheckBox_C.OnHandledGetFocus__DelegateSignature");
		
		USBCheckBox_C_OnHandledGetFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBCheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBCheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBCheckBox.SBCheckBox_C");
		return ptr;
	}

}


