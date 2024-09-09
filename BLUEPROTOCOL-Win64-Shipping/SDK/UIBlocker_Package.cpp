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
	 * 		Name   -> Function UIBlocker.UIBlocker_C.Construct
	 * 		Flags  -> ()
	 */
	void UUIBlocker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.Construct");
		
		UUIBlocker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.BP_SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIBlocker_C::BP_SetVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.BP_SetVisibility");
		
		UUIBlocker_C_BP_SetVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUIBlocker_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.Destruct");
		
		UUIBlocker_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.SetBlockInputInBlocker
	 * 		Flags  -> ()
	 */
	void UUIBlocker_C::SetBlockInputInBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.SetBlockInputInBlocker");
		
		UUIBlocker_C_SetBlockInputInBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.ChangeUiBlockerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIBlockerType                                   UIBlockerType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIBlocker_C::ChangeUiBlockerType(ESBUIBlockerType UIBlockerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.ChangeUiBlockerType");
		
		UUIBlocker_C_ChangeUiBlockerType_Params params {};
		params.UIBlockerType = UIBlockerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.UpdateBlockInputByVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIBlocker_C::UpdateBlockInputByVisibility(ESlateVisibility IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.UpdateBlockInputByVisibility");
		
		UUIBlocker_C_UpdateBlockInputByVisibility_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIBlocker.UIBlocker_C.ExecuteUbergraph_UIBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIBlocker_C::ExecuteUbergraph_UIBlocker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIBlocker.UIBlocker_C.ExecuteUbergraph_UIBlocker");
		
		UUIBlocker_C_ExecuteUbergraph_UIBlocker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIBlocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIBlocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIBlocker.UIBlocker_C");
		return ptr;
	}

}


