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
	 * 		Name   -> Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_BreakButton1_C::SetButtonEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetButtonEnabled");
		
		UFang_expedition_BreakButton1_C_SetButtonEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_BreakButton1_C::SetCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetCount");
		
		UFang_expedition_BreakButton1_C_SetCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_BreakButton1_C::BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFang_expedition_BreakButton1_C_BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.ExecuteUbergraph_Fang_expedition_BreakButton1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_BreakButton1_C::ExecuteUbergraph_Fang_expedition_BreakButton1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.ExecuteUbergraph_Fang_expedition_BreakButton1");
		
		UFang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.OnPressButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_BreakButton1_C::OnPressButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.OnPressButton__DelegateSignature");
		
		UFang_expedition_BreakButton1_C_OnPressButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_BreakButton1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_BreakButton1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C");
		return ptr;
	}

}


