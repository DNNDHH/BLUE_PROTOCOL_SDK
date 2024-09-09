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
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.SetEnableKeyHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramCannonHUD_KeyHelp_C::SetEnableKeyHelp(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.SetEnableKeyHelp");
		
		UEngramCannonHUD_KeyHelp_C_SetEnableKeyHelp_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.UpdateKeyText
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_KeyHelp_C::UpdateKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.UpdateKeyText");
		
		UEngramCannonHUD_KeyHelp_C_UpdateKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Construct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_KeyHelp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Construct");
		
		UEngramCannonHUD_KeyHelp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_KeyHelp_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Destruct");
		
		UEngramCannonHUD_KeyHelp_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.OnShot_Event
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_KeyHelp_C::OnShot_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.OnShot_Event");
		
		UEngramCannonHUD_KeyHelp_C_OnShot_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.ExecuteUbergraph_EngramCannonHUD_KeyHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_KeyHelp_C::ExecuteUbergraph_EngramCannonHUD_KeyHelp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.ExecuteUbergraph_EngramCannonHUD_KeyHelp");
		
		UEngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramCannonHUD_KeyHelp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramCannonHUD_KeyHelp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C");
		return ptr;
	}

}


