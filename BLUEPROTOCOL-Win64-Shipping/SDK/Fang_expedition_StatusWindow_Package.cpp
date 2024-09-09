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
	 * 		Name   -> Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionData                      ExpeditionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_StatusWindow_C::SetData(struct FSBFang_expeditionData* ExpeditionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.SetData");
		
		UFang_expedition_StatusWindow_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExpeditionData != nullptr)
			*ExpeditionData = params.ExpeditionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_StatusWindow_C::BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_StatusWindow_C_BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.ExecuteUbergraph_Fang_expedition_StatusWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_StatusWindow_C::ExecuteUbergraph_Fang_expedition_StatusWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.ExecuteUbergraph_Fang_expedition_StatusWindow");
		
		UFang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.OnPressPlayListOpen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_StatusWindow_C::OnPressPlayListOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.OnPressPlayListOpen__DelegateSignature");
		
		UFang_expedition_StatusWindow_C_OnPressPlayListOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_StatusWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_StatusWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C");
		return ptr;
	}

}


