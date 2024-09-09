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
	 * 		Name   -> Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListBtn_Finish_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.Construct");
		
		UFang_expedition_PlayListBtn_Finish_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListBtn_Finish_C::BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_PlayListBtn_Finish_C_BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListBtn_Finish_C::ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish");
		
		UFang_expedition_PlayListBtn_Finish_C_ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.OnButtonClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListBtn_Finish_C::OnButtonClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.OnButtonClick__DelegateSignature");
		
		UFang_expedition_PlayListBtn_Finish_C_OnButtonClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_PlayListBtn_Finish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_PlayListBtn_Finish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C");
		return ptr;
	}

}


