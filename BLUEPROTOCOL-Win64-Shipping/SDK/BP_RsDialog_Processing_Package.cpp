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
	 * 		Name   -> Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Processing_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StopAnim");
		
		UBP_RsDialog_Processing_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StartAnim
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Processing_C::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StartAnim");
		
		UBP_RsDialog_Processing_C_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.ExecuteUbergraph_BP_RsDialog_Processing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_Processing_C::ExecuteUbergraph_BP_RsDialog_Processing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.ExecuteUbergraph_BP_RsDialog_Processing");
		
		UBP_RsDialog_Processing_C_ExecuteUbergraph_BP_RsDialog_Processing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.OnDialogEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Processing_C::OnDialogEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.OnDialogEnd__DelegateSignature");
		
		UBP_RsDialog_Processing_C_OnDialogEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_Processing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_Processing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_Processing.BP_RsDialog_Processing_C");
		return ptr;
	}

}


