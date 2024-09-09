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
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.Open
	 * 		Flags  -> ()
	 */
	void UTokenDisplay_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.Open");
		
		UTokenDisplay_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.ChangeForcusCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenDisplay_C::ChangeForcusCategory(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.ChangeForcusCategory");
		
		UTokenDisplay_C_ChangeForcusCategory_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.OnGetExpiredBlankText_Event
	 * 		Flags  -> ()
	 */
	void UTokenDisplay_C::OnGetExpiredBlankText_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.OnGetExpiredBlankText_Event");
		
		UTokenDisplay_C_OnGetExpiredBlankText_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.OnGetTokenListBlankText_Event
	 * 		Flags  -> ()
	 */
	void UTokenDisplay_C::OnGetTokenListBlankText_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.OnGetTokenListBlankText_Event");
		
		UTokenDisplay_C_OnGetTokenListBlankText_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.SwitchInfoText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenDisplay_C::SwitchInfoText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.SwitchInfoText");
		
		UTokenDisplay_C_SwitchInfoText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UTokenDisplay_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.CustomEvent_1");
		
		UTokenDisplay_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenDisplay.TokenDisplay_C.ExecuteUbergraph_TokenDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenDisplay_C::ExecuteUbergraph_TokenDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenDisplay.TokenDisplay_C.ExecuteUbergraph_TokenDisplay");
		
		UTokenDisplay_C_ExecuteUbergraph_TokenDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTokenDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTokenDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TokenDisplay.TokenDisplay_C");
		return ptr;
	}

}


