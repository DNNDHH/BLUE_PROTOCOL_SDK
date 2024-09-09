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
	 * 		Name   -> Function SBButton.SBButton_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnGetFocus");
		
		USBButton_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnLostFocus");
		
		USBButton_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnPressOk");
		
		USBButton_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.ExecuteUbergraph_SBButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBButton_C::ExecuteUbergraph_SBButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.ExecuteUbergraph_SBButton");
		
		USBButton_C_ExecuteUbergraph_SBButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.OnHandledPressOk__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnHandledPressOk__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnHandledPressOk__DelegateSignature");
		
		USBButton_C_OnHandledPressOk__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.OnHandledLostFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnHandledLostFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnHandledLostFocus__DelegateSignature");
		
		USBButton_C_OnHandledLostFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBButton.SBButton_C.OnHandledGetFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBButton_C::OnHandledGetFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBButton.SBButton_C.OnHandledGetFocus__DelegateSignature");
		
		USBButton_C_OnHandledGetFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBButton.SBButton_C");
		return ptr;
	}

}


